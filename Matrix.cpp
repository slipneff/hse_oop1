#include "Matrix.h"
#include <fstream>
#include <iostream>
#pragma once
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

int Matrix::getCount() const { return count; }

void Matrix::setItems(const Station& station) {
  if (count % size == 0)
    matrix[count / size] = new Station[size];
  matrix[count / size][count % size] = station;
  count++;
}

Station Matrix::getItem(int _row, int _column) const{
  return matrix[_row][_column];
}

int Matrix::getSize() const {
  return size;
};

void Matrix::fileToMatrix(const string& path) {
    ifstream infile(path);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            Station station;
            int temp, pressure, windSpeed, windDirection;
            infile >> temp >> pressure >> windSpeed >> windDirection;
            station.setAttributes(temp, pressure, windSpeed, windDirection);
            matrix[i][j] = station;
        }
    infile.close();
}
 
void Matrix::matrixToFile(const string& path) const {
    ofstream outfile(path);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            outfile << matrix[i][j].getTemp() << " " << matrix[i][j].getPressure() << " "
                << matrix[i][j].getWindSpeed() << " " << matrix[i][j].getWindDirection() << endl;
        }
}