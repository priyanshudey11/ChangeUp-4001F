//drive 
#include "main.h"
using namespace pros;
//tells the brain the motor speed for the controller
void setdrive(int forward, int back)
  {
    /**
    Scale up y and r from 127 to 12000
    double check math
    Got math from senior team of 2019
    */
    forward *= 12000.0 / 127.0;
    back *= 12000.0 / 127.0;
    //left front.
    driveLF.move_voltage(forward);
    //left back
    driveLB.move_voltage(forward);
    //right front
    driveRF.move_voltage(back);
    //right back
    driveRB.move_voltage(back);
  }
void setdrivemotors()
  {
    int lefty = mainController.get_analog(E_CONTROLLER_ANALOG_LEFT_Y)*(-1);
    //get X value from right analog stick
    int righty = mainController.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y);
    //corrects the joystick to be 0 when at a standstill
    if (abs(lefty)<10)
      {
        lefty= 0;
      }
    if (abs(righty)<10)
      {
        righty=0;
      }
    setdrive (lefty,righty);
  }
