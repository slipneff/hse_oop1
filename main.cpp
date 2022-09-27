#include <iostream>
#include <assert.h>
#include "Station.h"

#define TEST_TEMP 15
#define TEST_PRESSURE 700
#define TEST_SPEED 50
#define TEST_DIRECTION "north"

int main() {
	Station stationTestFirst;
	assert(stationTest.getTemp() == 0);
	assert(stationTest.getPressure() == 0);
	assert(stationTest.getWindSpeed() == 0);
	assert(stationTest.getTemp() == "north");

	Station stationTestSecond(TEST_TEMP, TEST_PRESSURE, TEST_SPEED, TEST_DIRECTION);
	assert(stationTestSecond.getTemp() == TEST_TEMP);
	assert(stationTestSecond.getPressure() == TEST_PRESSURE);
	assert(stationTestSecond.getWindSpeed() == TEST_SPEED);
	assert(stationTestSecond.getWindDirection() == TEST_DIRECTION);

	Station stationTestThird(stationTestSecond);
	assert(stationTestSecond.getTemp() == stationTestThird.getTemp())
	assert(stationTestSecond.getPressure() == stationTestThird.getPressure())
	assert(stationTestSecond.getWindSpeed() == stationTestThird.getWindSpeed())
	assert(stationTestSecond.getWindDirection() == stationTestThird.getWindDirection())
	return 0;
}
