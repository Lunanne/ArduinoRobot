#ifndef MOTOR_H
#define MOTOR_H

#include <arduino.h>

class Motor 
{
  private :
int m_leftPin;
int m_rightPin;

public:
Motor();
void Init (const int p_leftPin, const int p_rightPin);
void Drive(boolean p_forward);
void Stop();
};

#endif
