#pragma once
#include "Station.h"
#include <string>
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

class Matrix {
private:
  int count;
  Station **matrix;
public:
  int size;
  Matrix(int _size);
  Matrix(const Matrix &other);
  void setSize(int _size);
  virtual ~Matrix();
  int getCount() const;
  Station getItem(int _row, int _column) const;
  void setItems(const Station& station);
  void matrixToFile(const string& path) const;
  void fileToMatrix(const string& path);
  Station interp(double a, double b) const;
  void printMatrix(Ui::MainWindow *ui) const;
  bool compareMatrix(const Matrix& first, const Matrix& second)const;
};
