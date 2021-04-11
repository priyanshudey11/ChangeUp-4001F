//drive
#include "main.h"
using namespace pros;
//tells the brain the motor speed for the controller
//varibles are looking at the robot from the back
//controlles each side

void setdrive(int forward, int back)
  {
    /**
    Scale up y and r from 127 to 12000
    double check math
    Got math from senior team of 2019
    */
    forward *= 12000.0 / 127.0;
    back *= -12000.0 / 127.0;
    //left front.
    driveLF.move_voltage(back);
    //left back
    driveLB.move_voltage(back);
    //right front
    driveRF.move_voltage(forward);
    //right back
    driveRB.move_voltage(forward);
  }
void setdrivemotors()


/*
  {
    //looking at the robot(front) head on where the robot gets the ball from
    //get Y value from right analog stick
    int lefty = mainController.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y);
    //gets Y value of left analog stick the -1 is to correct the side
    int righty = mainController.get_analog(E_CONTROLLER_ANALOG_LEFT_Y);
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
  */
  {
  int forward = mainController.get_analog(E_CONTROLLER_ANALOG_LEFT_X)*(-1); // get Y value from left analog stick
  int turn = mainController.get_analog(E_CONTROLLER_ANALOG_LEFT_Y); // get X value from right analog stick
  int left =  forward +turn;
  int right = forward- turn;
 if(std::abs(forward) < 16)
   {
     turn = 127.0 * std::copysign(std::pow(std::abs(turn / 127.0), 1.4), turn); // make turning less sensitive than driving forward or backwards
    }

  setdrive(left, right);
}
