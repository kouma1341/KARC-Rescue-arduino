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

Motor::Motor(uint8_t aAIN1,uint8_t aAIN2,uint8_t aPWMA,uint8_t aBIN1,uint8_t aBIN2,uint8_t aPWMB,uint8_t bAIN1,uint8_t bAIN2,uint8_t bPWMA,uint8_t bBIN1,uint8_t bBIN2,uint8_t bPWMB)
{
  pinMode(aAIN1,OUTPUT);
  pinMode(aAIN2,OUTPUT);
  pinMode(aPWMA,OUTPUT);
  pinMode(aBIN1,OUTPUT);
  pinMode(aBIN2,OUTPUT);
  pinMode(aPWMB,OUTPUT);
  pinMode(bAIN1,OUTPUT);
  pinMode(bAIN2,OUTPUT);
  pinMode(bPWMA,OUTPUT);
  pinMode(bBIN1,OUTPUT);
  pinMode(bBIN2,OUTPUT);
  pinMode(bPWMB,OUTPUT);
  _aAIN1 = aAIN1;
  _aAIN2 = aAIN2;
  _aPWMA = aPWMA;
  _aBIN1 = aBIN1;
  _aBIN2 = aBIN2;
  _aPWMB = aPWMB;
  _bAIN1 = bAIN1;
  _bAIN2 = bAIN2;
  _bPWMA = bPWMA;
  _bBIN1 = bBIN1;
  _bBIN2 = bBIN2;
  _bPWMB = bPWMB;
}

void Motor::mc(int m1,int m2,int m3,int m4,int del)
{
  m1 *= 2.55;
  m2 *= 2.55;
  m3 *= 2.55;
  m4 *= 2.55;
  if(m1 >= 0)
  {
    digitalWrite(_aAIN1,HIGH);
    digitalWrite(_aAIN2,LOW); 
  }else{
    m1 *= -1;
    digitalWrite(_aAIN1,LOW);
    digitalWrite(_aAIN2,HIGH); 
  }
  if(m2 > 0)
  {
    digitalWrite(_aBIN1,HIGH);
    digitalWrite(_aBIN2,LOW); 
  }else{
    m2 *= -1;
    digitalWrite(_aBIN1,LOW);
    digitalWrite(_aBIN2,HIGH); 
  }
  if(m3 > 0)
  {
    digitalWrite(_bAIN1,HIGH);
    digitalWrite(_bAIN2,LOW); 
  }else{
    m3 *= -1;
    digitalWrite(_bAIN1,LOW);
    digitalWrite(_bAIN2,HIGH); 
  }
  if(m4 > 0)
  {
    digitalWrite(_bBIN1,HIGH);
    digitalWrite(_bBIN2,LOW); 
  }else{
    m4 *= -1;
    digitalWrite(_bBIN1,LOW);
    digitalWrite(_bBIN2,HIGH); 
  }
  analogWrite(_aPWMA,m1);
  analogWrite(_aPWMB,m2);
  analogWrite(_bPWMA,m3);
  analogWrite(_bPWMB,m4);
  delay(del);
  

}
