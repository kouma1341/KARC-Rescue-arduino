/*
      前
  1----------2
  |          |
  |          |
  |          |
  |          |
  3----------4

*/
#include "Arduino.h"
#include "motor.h"

Motor::Motor(int 1IN1, int 1IN2, int 1PWM, int 2IN1, int 2IN2, int 2PWM, int 3IN1, int 3IN2, int 3PWM, int 4IN1, int 4IN2, int 4PWM)
{
  pinMode(1IN1, OUTPUT);
  pinMode(1IN2, OUTPUT);
  pinMode(1PWM, OUTPUT);
  pinMode(2IN1, OUTPUT);
  pinMode(2IN2, OUTPUT);
  pinMode(2PWM, OUTPUT);
  pinMode(3IN1, OUTPUT);
  pinMode(3IN2, OUTPUT);
  pinMode(3PWM, OUTPUT);
  pinMode(4IN1, OUTPUT);
  pinMode(4IN2, OUTPUT);
  pinMode(4PWM, OUTPUT);
  _1IN1 = 1IN1;
  _1IN2 = 1IN2;
  _1PWM = 1PWM;
  _2IN1 = 2IN1;
  _2IN2 = 2IN2;
  _2PWM = 2PWM;
  _3IN1 = 3IN1;
  _3IN2 = 3IN2;
  _3PWM = 3PWM;
  _4IN1 = 4IN1;
  _4IN2 = 4IN2;
  _4PWM = 4PWM;
}

void Motor::mc(int m1, int m2, int m3, int m4, int del)
{
  m1 *= 2.55;
  m2 *= 2.55;
  m3 *= 2.55;
  m4 *= 2.55;
  if (m1 >= 0)
  {
    digitalWrite(_1IN1, HIGH);
    digitalWrite(_1IN2, LOW);
  } else {
    m1 *= -1;
    digitalWrite(_1IN1, LOW);
    digitalWrite(_1IN2, HIGH);
  }
  if (m2 > 0)
  {
    digitalWrite(_2IN1, HIGH);
    digitalWrite(_2IN2, LOW);
  } else {
    m2 *= -1;
    digitalWrite(_2IN1, LOW);
    digitalWrite(_2IN2, HIGH);
  }
  if (m3 > 0)
  {
    digitalWrite(_3IN1, HIGH);
    digitalWrite(_3IN2, LOW);
  } else {
    m3 *= -1;
    digitalWrite(_3IN1, LOW);
    digitalWrite(_3IN2, HIGH);
  }
  if (m4 > 0)
  {
    digitalWrite(_4IN1, HIGH);
    digitalWrite(_4IN2, LOW);
  } else {
    m4 *= -1;
    digitalWrite(_4IN1, LOW);
    digitalWrite(_4IN2, HIGH);
  }
  analogWrite(_1PWM, m1);
  analogWrite(_2PWM, m2);
  analogWrite(_3PWM, m3);
  analogWrite(_4PWM, m4);
  delay(del);


}
