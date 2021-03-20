#include "main.h"

using namespace pros;

Motor driveLF(1, E_MOTOR_GEARSET_18, true, E_MOTOR_ENCODER_ROTATIONS);
Motor driveLB(3, E_MOTOR_GEARSET_18, true, E_MOTOR_ENCODER_ROTATIONS);
Motor driveRF(4, E_MOTOR_GEARSET_18, true, E_MOTOR_ENCODER_ROTATIONS);
Motor driveRB(6, E_MOTOR_GEARSET_18, true, E_MOTOR_ENCODER_ROTATIONS);

Motor intakeR(12, E_MOTOR_GEARSET_06, true, E_MOTOR_ENCODER_ROTATIONS);
Motor intakeL(15, E_MOTOR_GEARSET_06, false, E_MOTOR_ENCODER_ROTATIONS);

Motor rollerB(17, E_MOTOR_GEARSET_06, false, E_MOTOR_ENCODER_ROTATIONS);
Motor rollerT(18, E_MOTOR_GEARSET_06, true, E_MOTOR_ENCODER_ROTATIONS);

pros::Controller mainController = Controller(E_CONTROLLER_MASTER);


// this is the drive function that the controller uses
void drive(int LY, int RY) {
  LY *= 12000.0 / -127.0;
  RY *= 12000.0 / 127.0;
  driveLF.move_voltage(LY);
  driveLB.move_voltage(LY);
  driveRF.move_voltage(RY);
  driveRB.move_voltage(RY);
}

void intakeHandler(int power) {
  intakeL.move_voltage(power);
  intakeR.move_voltage(power);
}

void rollerHandler(int power) {
  rollerB.move_voltage(power);
  rollerT.move_voltage(power);
}
