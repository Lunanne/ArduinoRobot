#include "Motor.h"

#include "Driver.h"

Driver::Driver()
{
  int leftPinA = 9;
  int rightPinA = 8;

  int leftPinB = 6;
  int rightPinB = 7;

  int leftPinC = 4;
  int rightPinC = 5;

  int leftPinD = 2;
  int rightPinD = 3;

    m_frontRight.Init(leftPinA, rightPinA);
    m_frontLeft.Init(leftPinB, rightPinB);
    m_backRight.Init(leftPinC, rightPinC);
    m_backLeft.Init(leftPinD, rightPinD);

}

void Driver::Drive(Direction p_direction)
{
    switch(p_direction)
    {
        case Direction_Forward:
            Drive(true);
            break;
        case Direction_Backward:
            Drive(false);
            break;
        case Direction_Left:
            Turn(true);
            break;
        case Direction_Right:
            Turn(false);
            break;
        case Direction_Stop:
            Stop();
            break;

    }
}

void Driver::Turn(boolean p_left)
{
    m_frontRight.Drive(p_left);
    m_backRight.Drive(p_left);
    m_frontLeft.Drive(!p_left);
    m_backLeft.Drive(!p_left);
}


void Driver::Drive(boolean p_forward)
{
   m_frontRight.Drive(p_forward);
   m_frontLeft.Drive(p_forward);
   m_backRight.Drive(p_forward);
   m_backLeft.Drive(p_forward);
}

void Driver::Stop()
{
   m_frontRight.Stop();
   m_frontLeft.Stop();
   m_backLeft.Stop();
   m_backRight.Stop();
}
