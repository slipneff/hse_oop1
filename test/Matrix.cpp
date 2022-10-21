#include "Matrix.h"
#include "Station.h"
#include <fstream>
#include <iostream>
#pragma once
Matrix::Matrix(int _size) {
  size = _size;
  matrix = new Station *[size];
  count = 0;
}
Matrix::Matrix() {
  size = 0;
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
  size = _size;
  matrix = new Station *[_size];
}

int Matrix::getCount() const { return count; }

void Matrix::setItems(const Station &station) {
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

Station Matrix::interp(double a, double b) const {
  int x0 = a, y0 = b, x1 = a, y1 = b, x2, x3, y2, y3;
  if (int(a) != a) {
    x0 = a;
    x1 = 1 + x0;
  }
  if (int(b) != b) {
    y0 = b;
    y1 = 1 + y0;
  }

  int interp_speed = matrix[x0][y0].getWindSpeed() * (1 - a) * (1 - b) +
                     matrix[x1][y0].getWindSpeed() * a * (1 - b) +
                     matrix[x0][y1].getWindSpeed() * (1 - a) * b +
                     matrix[x1][y1].getWindSpeed() * a * b;

  int interp_direction = matrix[x0][y0].getWindSpeed() * (1 - a) * (1 - b) +
                         matrix[x1][y0].getWindSpeed() * a * (1 - b) +
                         matrix[x0][y1].getWindSpeed() * (1 - a) * b +
                         matrix[x1][y1].getWindSpeed() * a * b;

  for (int i = 0; i < size; i++) {
    for (int j = 0; i < size; j++) {
      if (matrix[i][j].getPressure() != 0) {
        if (i <= a && j <= b) {
          x0 = i;
          y0 = j;
        } else if (i < a && j > b) {
          x2 = i;
          y2 = j;
        } else if (i > a && j < b) {
          x1 = i;
          y1 = j;
        } else {
          x3 = i;
          y3 = j;
        }
      }
    }
  }

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