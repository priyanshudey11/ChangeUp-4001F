#include "main.h"
void setIntake(int power)
  {
      intaker= power;
      intakel= power;
  }
void setIntakeMotors()
  {
    //  int intakepower= 120000.0;
    //  delay(20000);
    int  intakepower=0;
      //stops with and starts after 5 secounds
      if(mainController.get_digital(E_CONTROLLER_DIGITAL_R2))
          {
            intakepower=12000.0;
          }
      //reverses the motors
      else if(mainController.get_digital(E_CONTROLLER_DIGITAL_R1))
            {
              intakepower=-12000.0;
            }
      setIntake (intakepower);
  }
/*
int intakepower= -12000.0 / 127.0;
//stops
if(mainController.get_digital(E_CONTROLLER_DIGITAL_A))
{
  intakepower=0;
}
//reverses the motors
else if (mainController.get_digital(E_CONTROLLER_DIGITAL_B))
{
  intakepower=12000.0 / 127.0;
}
//restarts the motors
else if (mainController.get_digital(E_CONTROLLER_DIGITAL_X))
{
  intakepower= -12000.0 / 127.0;
}
else
{
  intakepower= -12000.0 / 127.0;
} */
