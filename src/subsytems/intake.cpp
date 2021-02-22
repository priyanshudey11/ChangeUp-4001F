#include "main.h"
void setIntake(int power)
  {
      intaker= power;
      intakel= power;
      intakem = power;
    }
void setIntakeMotors()
  {
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
      }
      setIntake (intakepower);
  }
