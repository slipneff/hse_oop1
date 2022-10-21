#include "Matrix.h"
#include "Station.h"
#include <fstream>
#include <iostream>
#pragma once


//оформление
// vane -> station
// setter по индексу
Matrix::Matrix(int _size) {
  size = _size;
  matrix = new Station *[size];
  count = 0;
}
Matrix::Matrix(const Matrix &other) {
  size = other.size;
  matrix = other.matrix;
}
Matrix::~Matrix() {
  for (int i = 0; i < size; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;
}

void Matrix::setSize(int _size) {
    //очистка памяти

  size = _size;
  matrix = new Station *[_size];
}

int Matrix::getCount() const { return count; }

void Matrix::setItems(const Station &station) {
    //тройной указатель, индентификатор класса типа проифать по условия идентификатора функции, назвать аппенд и сделать сет по индексу
  if (count % size == 0)
    matrix[count / size] = new Station[size];
  matrix[count / size][count % size] = station;
  count++;
}

Station Matrix::getItem(int _row, int _column) const {
  return matrix[_row][_column];
}

void Matrix::fileToMatrix(const string &path) {
  ifstream infile(path);
  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++) {
      Station station1;
      int temp, pressure, windSpeed, windDirection;
      infile >> temp >> pressure >> windSpeed >> windDirection;
      station1.setAttributes(temp, pressure, windSpeed, windDirection);
      matrix[i][j] = station1;
    }
  infile.close();
}

void Matrix::matrixToFile(const string &path) const {
  ofstream outfile(path);
  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++) {
      outfile << matrix[i][j].getTemp() << " " << matrix[i][j].getPressure()
              << " " << matrix[i][j].getWindSpeed() << " "
              << matrix[i][j].getWindDirection() << endl;
    }
}

void Matrix::printMatrix(Ui::MainWindow *ui) const {
    int temp = count;
      for (int i = 0; i <= count / size; i++) {
        for (int j = 0; j < temp && j < size; j++) {
          ui->textEdit->insertPlainText(QString::fromStdString(matrix[i][j].printStation()));
        }
        temp = temp - size;
        ui->textEdit->insertPlainText("\n");
      }
}


Station Matrix::interp(double a, double b) const {
  int x0 = a, y0 = b, x1 = a, y1 = b, x2=0, x3=0, y2=0, y3=0;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (matrix[i][j].getPressure() != 0) {
        if (i <= a && j <= b) {
          x0 = i;
          y0 = j;
        } if (i < a && j > b) {
          x2 = i;
          y2 = j;
        } if (i > a && j < b) {
          x1 = i;
          y1 = j;
        } if(i>a && j>b){
          x3 = i;
          y3 = j;
        }
      }
    }
  }
  int interp_speed = matrix[x0][y0].getWindSpeed() * (1 - a) * (1 - b) +
                    matrix[x2][y2].getWindSpeed() * a * (1 - b) +
                    matrix[x1][y1].getWindSpeed() * (1 - a) * b +
                    matrix[x3][y3].getWindSpeed() * a * b;
  int interp_direction = matrix[x0][y0].getWindDirection() * (1 - a) * (1 - b) +
                    matrix[x2][y2].getWindDirection() * a * (1 - b) +
                    matrix[x1][y1].getWindDirection() * (1 - a) * b +
                    matrix[x3][y3].getWindDirection() * a * b;

  int interp_temp = matrix[x0][y0].getTemp() * (1 - a) * (1 - b) +
                    matrix[x2][y2].getTemp() * a * (1 - b) +
                    matrix[x1][y1].getTemp() * (1 - a) * b +
                    matrix[x3][y3].getTemp() * a * b;
  int interp_pressure = matrix[x0][y0].getPressure() * (1 - a) * (1 - b) +
                        matrix[x2][y2].getPressure() * a * (1 - b) +
                        matrix[x1][y1].getPressure() * (1 - a) * b +
                        matrix[x3][y3].getPressure() * a * b;
  return Station(interp_temp, interp_pressure, interp_speed, interp_direction);

}

bool Matrix::compareMatrix(const Matrix& first) {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (matrix[i][j] != first.getItem(i, j))
                return false;
    return true;
}
