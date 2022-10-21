#include "Station.h"
#include <string>

#pragma once

using namespace std;

class Vane : public Station {
public:
  Vane();
  Vane(int _windSpeed, int _windDirection);
  Vane(const Vane &other);
  virtual ~Vane();
  void setAttributes(int temp, int pressure ,int _windSpeed, int _windDirection) override;
  string printStation() const override;
};
