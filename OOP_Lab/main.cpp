#include "mainwindow.h"
#include <assert.h>
#include <iostream>

#include <QApplication>

using namespace std;

#define TEST_TEMP 15
#define TEST_PRESSURE 700
#define TEST_SPEED 50
#define TEST_DIRECTION 45


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
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

    w.show();
    return a.exec();
}
