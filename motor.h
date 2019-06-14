#ifndef motor_h
#define motor_h

/* #define AIN1 13
#define AIN2 12
#define PWMA 11
#define BIN1 10
#define BIN2 9
#define PWMB 8 */

#include "Arduino.h"

class Motor
{
public:
  Motor(int aAIN1,int aAIN2,int aPWMA,int aBIN1,int aBIN2,int aPWMB,int bAIN1,int bAIN2,int bPWMA,int bBIN1,int bBIN2,int bPWMB); 
  void mc(int m1,int m2,int m3,int m4,int del);

private:
  int _pin;
};

#endif
