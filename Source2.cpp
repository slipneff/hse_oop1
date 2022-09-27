#include "Station.h"

Station::Station() {
	temp = 0;
	pressure = 0;
	windSpeed = 0;
	windDirection = "north";
}

Station::Station(int _temp, int _pressure, int _windSpeed, string _windDirection) {
	if (_pressure >= 0 && _windSpeed >= 0) {
		temp = _temp
		pressure = _pressure;
		windSpeed = _windSpeed;
		windDirection = _windDirection;
	}
	else {
		temp = 0;
		pressure = 0;
		windSpeed = 0;
		windDirection = "north";
	}
}

Station::Station(const Station& other) {
	temp = other.temp;
	pressure = other.pressure;
	windSpeed = other.windSpeed;
	windDirection = other.windDirection;
}

Station::~Station() {}

int Station::getPressure() const {
	return pressure;
}
int Station::getWindSpeed() const {
	return windSpeed;
}
int Station::getTemp() const {
	return temp;
}
string Station::getWindDirection() const {
	return windDirection;
}
void Station::setPressure(int _pressure) {
	pressure = _pressure;
}
void Station::setWindSpeed(int _windSpeed) {
	windSpeed = _windSpeed;
}
void Station::setTemp(int _temp) {
	temp = _temp;
}
void Station::setWindDirection(string _windDirection) {
	windDirection = _windDirection;
}