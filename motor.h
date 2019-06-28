#ifndef motor_h
#define motor_h

#include "Arduino.h"

class Motor
{
public:
  Motor(uint8_t aAIN1,uint8_t aAIN2,uint8_t aPWMA,uint8_t aBIN1,uint8_t aBIN2,uint8_t aPWMB,uint8_t bAIN1,uint8_t bAIN2,uint8_t bPWMA,uint8_t bBIN1,uint8_t bBIN2,uint8_t bPWMB);
  void mc(int m1,int m2,int m3,int m4,int del);

private:
  uint8_t _aAIN1,_aAIN2,_aPWMA,_aBIN1,_aBIN2,_aPWMB,_bAIN1,_bAIN2,_bPWMA,_bBIN1,_bBIN2,_bPWMB;
};

#endif
