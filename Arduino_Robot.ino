#include "Driver.h"

Driver driver;

void setup()
{
}

void loop()
{
  driver.Drive(Direction_Forward);
  delay(1000);
  driver.Drive(Direction_Backward);
  delay(1000);
  driver.Drive(Direction_Left);
  delay(1000);
  driver.Drive(Direction_Right);
  delay(1000);
  driver.Drive(Direction_Stop);
  delay(1000);
}
