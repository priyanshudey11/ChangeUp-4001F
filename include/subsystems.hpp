#pragma once
#include "main.h"

using namespace pros;

void drive(int LY, int RY);
void intakeHandler(int power);
void rollerHandler(int power);

extern Motor driveRF;
extern Motor driveRB;
extern Motor driveLF;
extern Motor driveLB;

extern Motor intakeL;
extern Motor intakeR;

extern Motor rollerT;
extern Motor rollerB;

extern Controller mainController;
