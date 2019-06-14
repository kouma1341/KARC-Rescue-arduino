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

Motor::Motor(int aAIN1,int aAIN2,int aPWMA,int aBIN1,int aBIN2,int aPWMB,int bAIN1,int bAIN2,int bPWMA,int bBIN1,int bBIN2,int bPWMB)
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
}

void Motor::mc(int m1,int m2,int m3,int m4,int del)
{
  m1 *= 2.55;
  m2 *= 2.55;
  m3 *= 2.55;
  m4 *= 2.55;
  if(m1 > 0)
  {
    digitalWrite(aAIN1,HIGH);
    digitalWrite(aAIN2,LOW); 
  }else if(m1 < 0)
  {
    m1 *= -1;
    digitalWrite(aAIN1,LOW);
    digitalWrite(aAIN2,HIGH); 
  }
  if(m2 > 0)
  {
    digitalWrite(aBIN1,HIGH);
    digitalWrite(aBIN2,LOW); 
  }else if(m2 < 0)
  {
    m2 *= -1;
    digitalWrite(aBIN1,LOW);
    digitalWrite(aBIN2,HIGH); 
  }
  if(m3 > 0)
  {
    digitalWrite(bAIN1,HIGH);
    digitalWrite(bAIN2,LOW); 
  }else if(m3 < 0)
  {
    m3 *= -1;
    digitalWrite(bAIN1,LOW);
    digitalWrite(bAIN2,HIGH); 
  }
  if(m4 > 0)
  {
    digitalWrite(bBIN1,HIGH);
    digitalWrite(bBIN2,LOW); 
  }else if(m4 < 0)
  {
    m4 *= -1;
    digitalWrite(bBIN1,LOW);
    digitalWrite(bBIN2,HIGH); 
  }
  analogWrite(aPWMA,m1);
  analogWrite(aPWMB,m2);
  analogWrite(bPWMA,m3);
  analogWrite(bPWMB,m4);
  delay(del);
  

}
