#include "Matrix.cpp"
#include "Station.cpp"
#include "Station.h"
#include "Vane.cpp"
#include <assert.h>
#include <iostream>

using namespace std;

#define TEST_TEMP 15
#define TEST_PRESSURE 700
#define TEST_SPEED 50
#define TEST_DIRECTION 45


void printMatrix(Matrix matrix)  {
  int temp = matrix.getCount();
  cout<<temp<<" "<<matrix.size<<endl;
  for (int i = 0; i <= matrix.getCount() / matrix.size; i++) {
    for (int j = 0; j < temp && j < matrix.size; j++) {
      matrix.getItem(i, j).printStation();
    }
    temp = temp - matrix.size;
    cout << endl;
  }
}


int main() {
  Station stationTestFirst;
  // assert(stationTestFirst.getTemp() == 0);
  // assert(stationTestFirst.getPressure() == 0);
  // assert(stationTestFirst.getWindSpeed() == 0);
  // assert(stationTestFirst.getWindDirection() == 0);

  Station stationTestSecond(TEST_TEMP, TEST_PRESSURE, TEST_SPEED,
                            TEST_DIRECTION);
  assert(stationTestSecond.getTemp() == TEST_TEMP);
  assert(stationTestSecond.getPressure() == TEST_PRESSURE);
  assert(stationTestSecond.getWindSpeed() == TEST_SPEED);
  assert(stationTestSecond.getWindDirection() == TEST_DIRECTION);

  Station stationTestThird(stationTestSecond);
  assert(stationTestSecond.getTemp() == stationTestThird.getTemp());
  assert(stationTestSecond.getPressure() == stationTestThird.getPressure());
  assert(stationTestSecond.getWindSpeed() == stationTestThird.getWindSpeed());
  assert(stationTestSecond.getWindDirection() ==
         stationTestThird.getWindDirection());

  Station stationTestFourth;
  stationTestFourth.setAttributes(TEST_TEMP, TEST_PRESSURE, TEST_SPEED,
                                  TEST_DIRECTION);
  assert(stationTestFourth.getTemp() == TEST_TEMP);
  assert(stationTestFourth.getPressure() == TEST_PRESSURE);
  assert(stationTestFourth.getWindSpeed() == TEST_SPEED);
  assert(stationTestFourth.getWindDirection() == TEST_DIRECTION);
  assert(stationTestFourth.getWindDirection() == TEST_DIRECTION);

  Matrix data(4);
  Vane vane(TEST_SPEED,TEST_DIRECTION);
  cout<<vane.getPressure();
  return 0;
}
