/*#include "main.h"
#include "subsytemheaders/auton.hpp"
#include "subsytemheaders/drive.hpp"
#include "subsytemheaders/globals.hpp"
#include "subsytemheaders/intake.hpp"
#include "subsytemheaders/roller.hpp"
void initialize();
void autonomous() {autonHandler();}
void opcontrol()
  {
    while (true)
      {
        if(mainController.get_digital(E_CONTROLLER_DIGITAL_A))
          {

            autonHandler();
          }
        setdrivemotors();
        setIntakeMotors();
        setrrollerMotors();
      }
  }
*/
