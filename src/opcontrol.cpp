#include "main.h"
void opcontrol()
  {
    while (true)
      {
        setIntakeMotors();
        setdrivemotors();
        setrrollerMotors();
      }
  }
