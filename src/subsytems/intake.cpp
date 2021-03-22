#include "main.h"
void setIntake(int power)
  {
      intaker= power;
      intakel= power;
      intakem = power;
  }
void setIntakeMotors()
  {
    int forward, back;
    forward *= 12000.0 / 127.0;
    back *= -12000.0 / 127.0;
      //keeps the motors going forever
      int intakepower= 0;
      //stops with and starts after 5 secounds
      if(mainController.get_digital(E_CONTROLLER_DIGITAL_A))
        {
        while (true)
          {
            intakepower= back;
            delay(10);
            intakepower= 0;
          }
        }
    else if(mainController.get_digital(E_CONTROLLER_DIGITAL_B))
      {
        while (true)
          {
            intakepower= forward;
            delay(10);
            intakepower= 0;
          }
      }
      //stops both top triggers stops the intakes
      else if(mainController.get_digital(E_CONTROLLER_DIGITAL_L1) && (E_CONTROLLER_DIGITAL_R1))
        {
          intakepower=0;
        }
      //reverses the motors
      else if (mainController.get_digital(E_CONTROLLER_DIGITAL_R2))
        {
          intakepower=forward;
        }
      //restarts the motors
      else if (mainController.get_digital(E_CONTROLLER_DIGITAL_L2))
        {
          intakepower=back;
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
