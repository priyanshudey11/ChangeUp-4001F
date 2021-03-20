#include "main.h"
#include "subsystems.hpp"

using namespace pros;

Controller mainController = Controller(E_CONTROLLER_MASTER);

void initialize() {}

void disabled() {}

void competition_initialize() {}

void autonomous() {}

void opcontrol() {
		while (true) {

			if (mainController.get_digital(DIGITAL_L1)) {
				rollerHandler(12000);
			} else if (mainController.get_digital(DIGITAL_L2)) {
				rollerHandler(-12000);
			} else {
				rollerHandler(0);
			}

			if (mainController.get_digital(DIGITAL_R1)) {
				intakeHandler(12000);
			} else if (mainController.get_digital(DIGITAL_R2)) {
				intakeHandler(-12000);
			} else {
				intakeHandler(0);
			}

			int LY = mainController.get_analog(E_CONTROLLER_ANALOG_LEFT_Y); // get Y value from left analog stick
			int RY = mainController.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y); // get Y value from right analog stick
			drive(LY, RY);
		}
}
