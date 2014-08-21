/*
  Twd.h - Library for controlling robots with two wheel drive system.
  Created by Narendra Patwardhan, August, 2014.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Twd.h"

Twd::Twd(byte motor1logic1,byte motor1logic2,byte motor2logic1,byte motor2logic2)
{
  pinMode(motor1logic1, OUTPUT);
  pinMode(motor1logic2, OUTPUT);
  pinMode(motor2logic1, OUTPUT);
  pinMode(motor2logic2, OUTPUT);
  _motor1logic1 = motor1logic1;
  _motor1logic2 = motor1logic2;
  _motor2logic1 = motor2logic1;
  _motor2logic2 = motor2logic2;
}

void Twd::moveForward()
{
  digitalWrite(_motor1logic1, HIGH);
  digitalWrite(_motor1logic2, LOW);
  digitalWrite(_motor2logic1, HIGH);
  digitalWrite(_motor2logic2, LOW); 
}

void Twd::moveBackward()
{
  digitalWrite(_motor1logic1, LOW);
  digitalWrite(_motor1logic2, High);
  digitalWrite(_motor2logic1, LOW);
  digitalWrite(_motor2logic2, HIGH);
}

void Twd::turnRight()
{
  digitalWrite(_motor1logic1, HIGH);
  digitalWrite(_motor1logic2, LOW);
  digitalWrite(_motor2logic1, LOW);
  digitalWrite(_motor2logic2, LOW);
}

void Twd::turnLeft()
{
  digitalWrite(_motor1logic1, LOW);
  digitalWrite(_motor1logic2, LOW);
  digitalWrite(_motor2logic1, HIGH);
  digitalWrite(_motor2logic2, LOW);
}

void Twd::turnSharpright()
{
  digitalWrite(_motor1logic1, HIGH);
  digitalWrite(_motor1logic2, LOW);
  digitalWrite(_motor2logic1, LOW);
  digitalWrite(_motor2logic2, HIGH);
}

void Twd::turnSharpleft()
{
  digitalWrite(_motor1logic1, LOW);
  digitalWrite(_motor1logic2, HIGH);
  digitalWrite(_motor2logic1, HIGH);
  digitalWrite(_motor2logic2, LOW);
}

void Twd::applyBrakes()
{
  digitalWrite(_motor1logic1, LOW);
  digitalWrite(_motor1logic2, LOW);
  digitalWrite(_motor2logic1, LOW);
  digitalWrite(_motor2logic2, LOW);
}
