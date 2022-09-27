#include <string>

#pragma once

using namespace std;

class Station {
private:
    int temp, pressure, windSpeed;
    string windDirection;
public:
    Station();
    Station(int _temp, int _pressure, int _windSpeed, string _windDirection);
    Station(const Station& other);
    ~Station();
    int getPressure() const;
    int getWindSpeed() const;
    int getTemp() const;
    string getWindDirection() const;
    void setPressure(int _pressure);
    void setWindSpeed(int _windSpeed);
    void setTemp(int _temp);
    void setWindDirection(string _windDirection);
};
