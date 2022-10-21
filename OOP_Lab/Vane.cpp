#include "Vane.h"
#include <iostream>
#pragma once
Vane::Vane() {
  windSpeed = 0;
  windDirection = 0;
}

Vane::Vane(int _windSpeed, int _windDirection) {
  if (_windSpeed >= 0 && _windDirection >= 0 && _windDirection <= 360) {
    windSpeed = _windSpeed;
    windDirection = _windDirection;
  } else {
    windSpeed = 0;
    windDirection = 0;
  }
}
Vane::Vane(const Vane &other) {
  if (other.windSpeed >= 0 && other.windDirection >= 0 &&
      other.windDirection <= 360) {
    windSpeed = other.windSpeed;
    windDirection = other.windDirection;
  }
}
Vane::~Vane() {}

void Vane::setAttributes(int temp, int pressure ,int _windSpeed, int _windDirection) {
  windSpeed = _windSpeed;
  windDirection = _windDirection;
}

string Vane::printStation() const{
   return "("+std::to_string(windSpeed)+" "+std::to_string(windDirection)+")";
}
