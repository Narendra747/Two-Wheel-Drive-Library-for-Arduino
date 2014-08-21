/*
  Twd.h - Library for controlling robots with two wheel drive system.
  Created by Narendra Patwardhan, August, 2014.
  

Released into the public domain.
*/
#ifndef Twd_h
#define Twd_h

#include "Arduino.h"

class Twd
{
  public:
    Twd(byte 

motor1logic1,byte motor1logic2,byte motor2logic1,byte motor2logic2);
    void moveForward();
    void moveBackward();
    void 

turnRight();
    void turnLeft();
    void turnSharpright();
    void turnSharpleft();
    void applyBrakes();
    
  private:
    

byte _motor1logic1,_motor1logic2,_motor2logic1,_motor2logic2;
};

#endif
