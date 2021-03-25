#include "main.h"
void setrrollers(int powers)
  {
      rollerf = powers;
      rollerb= powers;

  }
void setrrollerMotors()
  {

      //keeps the motors going forever
      int rollers= 0;
      //stops with and starts after 5 secounds

      //makes the rollers forward
    if(mainController.get_digital(E_CONTROLLER_DIGITAL_L2))
        {
          rollers=-99999999999.0 / 127.0;
        }
    //reverses the motors
    else if(mainController.get_digital(E_CONTROLLER_DIGITAL_L1))
          {
            rollers=99999999999.0 / 127.0;
          }

      setrrollers (rollers);
  }
