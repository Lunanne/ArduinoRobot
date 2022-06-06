#include <arduino.h>

#include "Motor.h"

int speed = 150;
Motor::Motor()
{
}
void Motor::Init (const int p_leftPin, const int p_rightPin)
{
  m_leftPin = p_leftPin;
  m_rightPin = p_rightPin;
}

void Motor::Drive(boolean p_forward)
{
  if(p_forward)
  {
  analogWrite(m_leftPin, speed);
  analogWrite(m_rightPin, 0);
  }
  else
  {
    analogWrite(m_leftPin, 0);
    analogWrite(m_rightPin, speed);
  }
}

void Motor::Stop()
{
  analogWrite(m_leftPin, 0);
  analogWrite(m_rightPin, 0);
}
