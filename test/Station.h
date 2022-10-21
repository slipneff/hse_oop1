#pragma once
#include<string>
class Station {
private:
  int temp, pressure;

protected:
  int windSpeed, windDirection;

public:
  Station();
  Station(int _temp, int _pressure, int _windSpeed, int _windDirection);
  Station(const Station &other);
  ~Station();
  int getTemp() const;
  int getPressure() const;
  int getWindSpeed() const;
  int getWindDirection() const;
  virtual void setAttributes(int _temp, int _pressure, int _windSpeed,
                     int _windDirection);
  virtual std::string printStation() const;
};
