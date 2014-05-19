#ifndef DRIVER_H
#define DRIVER_H

#include <arduino.h>
#include <enum.h>

#include "Motor.h"

enum Direction
{
  Direction_Forward,
  Direction_Backward,
  Direction_Left,
  Direction_Right,
  Direction_Stop,
};


class Driver
{
  private:
  Motor m_frontLeft;
  Motor m_frontRight;
  Motor m_backLeft;
  Motor m_backRight;

  void Drive(boolean p_forward);
  void Turn(boolean p_left);
  void Stop();

  public:
  Driver();
  void Drive(Direction p_direction);

};

#endif

