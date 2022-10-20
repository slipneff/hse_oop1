#pragma once
#include "Station.h"
#include <string>
using namespace std;

class Matrix {
private:
  int size, count;
  Station **matrix;

public:
  Matrix(int _size);
  Matrix(const Matrix &other);
  virtual ~Matrix();
  int getCount() const;
  Station getItem(int _row, int _column) const;
  void setItems(const Station& station);
  int getSize() const;
  void matrixToFile(const string& path) const;
  void fileToMatrix(const string& path);

};