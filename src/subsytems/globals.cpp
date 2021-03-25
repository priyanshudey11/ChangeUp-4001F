//gets the motors and other parts of the robot
#include "main.h"
using namespace pros;
/*true means reverse
false means forward
06 = 600 RPM Blue
18 = 200 RPM Green
36 = 100 RPM Red
Motors
*/
//tank drive 
//Left Front
Motor driveLF(1, E_MOTOR_GEARSET_18, true, E_MOTOR_ENCODER_ROTATIONS);
//Left Back
Motor driveLB(3, E_MOTOR_GEARSET_18, true, E_MOTOR_ENCODER_ROTATIONS);
//Right Front
Motor driveRF(4, E_MOTOR_GEARSET_18, true, E_MOTOR_ENCODER_ROTATIONS);
//Right Back
Motor driveRB(6, E_MOTOR_GEARSET_18, true, E_MOTOR_ENCODER_ROTATIONS);
/*
//arcade
//Left Front
Motor driveLF(1, E_MOTOR_GEARSET_18, false, E_MOTOR_ENCODER_ROTATIONS);
//Left Back
Motor driveLB(3, E_MOTOR_GEARSET_18, false, E_MOTOR_ENCODER_ROTATIONS);
//Right Front
Motor driveRF(4, E_MOTOR_GEARSET_18, true, E_MOTOR_ENCODER_ROTATIONS);
//Right Back
Motor driveRB(6, E_MOTOR_GEARSET_18, true, E_MOTOR_ENCODER_ROTATIONS);
*/
//Intake Right
Motor intaker(10 , E_MOTOR_GEARSET_06, true, E_MOTOR_ENCODER_ROTATIONS);
//Intake Left
Motor intakel(15, E_MOTOR_GEARSET_06, false, E_MOTOR_ENCODER_ROTATIONS);
//Middle Intake left
Motor rollerf(9, E_MOTOR_GEARSET_06, true, E_MOTOR_ENCODER_ROTATIONS);
//intake in the back
Motor rollerb(19, E_MOTOR_GEARSET_06, false, E_MOTOR_ENCODER_ROTATIONS);
//Controller
Controller mainController= Controller(E_CONTROLLER_MASTER);
// Sensor
//Vision vision_sensor =vision_sensor (V;
