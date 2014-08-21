/*
  2wd.h - Library for controlling robots with two wheel drive system.
  Created by Narendra Patwardhan, August, 2014.
  Released into the public domain.
*/
#ifndef 2wd_h
#define 2wd_h

#include "Arduino.h"

class 2wd
{
  public:
    2wd(byte motor1logic1,byte motor1logic2,byte motor2logic1,byte motor2logic2);
    void moveForward();
    void moveBackward();
    void turnRight();
    void turnLeft();
    void turnSharpright();
    void turnSharpleft();
    void applyBrakes();
    
  private:
    byte motor1logic1,motor1logic2,motor2logic1,motor2logic2;
};

#endif
