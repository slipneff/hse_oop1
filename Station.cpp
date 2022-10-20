#include "Station.h"
#include <cstddef>
#include <cstdio>
#include <iostream>

#pragma once
Station::Station() : temp(0), pressure(0), windSpeed(0), windDirection(0) {}

Station::Station(int _temp, int _pressure, int _windSpeed, int _windDirection)
    : temp(0), pressure(0), windSpeed(0), windDirection(0) {
  if (_pressure >= 0 && _windSpeed >= 0 && _windDirection >= 0 &&
      _windDirection <= 360) {
    temp = _temp;
    pressure = _pressure;
    windSpeed = _windSpeed;
    windDirection = _windDirection;
  } else {
    temp = 0;
    pressure = 0;
    windSpeed = 0;
    windDirection = 0;
  }
}

Station::Station(const Station &other)
    : temp(0), pressure(0), windSpeed(0), windDirection(0) {
  if (other.pressure >= 0 && other.windSpeed >= 0 && other.windDirection >= 0 &&
      other.windDirection <= 360) {
    temp = other.temp;
    pressure = other.pressure;
    windSpeed = other.windSpeed;
    windDirection = other.windDirection;
  }
}

Station::~Station() {}

int Station::getPressure() const { return pressure; }
int Station::getTemp() const { return temp; }
int Station::getWindDirection() const { return windDirection; }
int Station::getWindSpeed() const { return windSpeed; }
void Station::setAttributes(int _temp, int _pressure, int _windSpeed,
                            int _windDirection) {
  temp = _temp;
  pressure = _pressure;
  windSpeed = _windSpeed;
  windDirection = _windDirection;
}

void Station::printStation() const{
   std::cout<<"("<<temp<<" "<<pressure<<" "<<windSpeed<<" "<<windDirection<<")";
}