#ifndef motor_h
#define motor_h

#include "Arduino.h"

class Motor
{
  public:
    Motor(int 1IN1, int 1IN2, int 1PWM, int 2IN1, int 2IN2, int 2PWM, int 3IN1, int 3IN2, int 3PWM, int 4IN1, int 4IN2, int 4PWM);
    void mc(int m1, int m2, int m3, int m4, int del);

  private:
    int _1IN1, _1IN2, _1PWM, _2IN1, _2IN2, _2PWM, _3IN1, _3IN2, _3PWM, _4IN1, _4IN2, _4PWM;
};

#endif
