#include "main.h"
void setIntake(int power)
  {
      intaker= power;
      intakel= power;
      intakem = power;
    }
void setIntakeMotors()
  {
       int intakepower= -9999999.0 / 127.0;
      //stops with and starts after 5 secounds 
      if(mainController.get_digital(E_CONTROLLER_DIGITAL_R2))
        {
          intakepower=0;
          delay(5);
          intakepower= -9999999.0 / 127.0;
        }
        //stops 
      else if(mainController.get_digital(E_CONTROLLER_DIGITAL_A))
        {
          intakepower=0;
        }
      //reverses the motors
      else if (mainController.get_digital(E_CONTROLLER_DIGITAL_L1))
        {
          intakepower=9999999.0 / 127.0;
        }
      //restarts the motors
      else if (mainController.get_digital(E_CONTROLLER_DIGITAL_R1))
        {
          intakepower= -9999999.0 / 127.0;
        }
      setIntake (intakepower);
  }
/*
  }
