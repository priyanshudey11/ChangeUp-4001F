#include "main.h"
#include <stdio.h>
using namespace pros;

void rollerHandler()
  {
    rollert.move_voltage(12000);
    rollerb.move_voltage(-12000);
    delay(300);
    rollert.move_voltage(12000);
    rollerb.move_voltage(-12000);
  }
void intakeHandler()
  {
    intakel.move_voltage(12000);
    intaker.move_voltage(-12000);
    delay(300);
    intakel.move_voltage(0);
    intakel.move_voltage(0);

  }

void getball()
  {
    intakel.move_voltage(12000);
    intaker.move_voltage(-12000);
    delay(300);
    intakel.move_voltage(0);
    intakel.move_voltage(0);
    rollerb.move_voltage(12000);
    delay (20);
    rollerb.move_voltage(0);
  }
void storeball()
  {
    rollert.move_voltage(12000);
    rollerb.move_voltage(-12000);
    delay(100);
    rollert.move_voltage(0);
    rollerb.move_voltage(-0);
  }

void flipout()
  {
    intakel.move_voltage(-12000);
    intaker.move_voltage(12000);
    rollerb.move_voltage(12000);
    delay(200);
    intakel.move_voltage(0);
    intaker.move_voltage(0);

  }
void score()
  {
    rollerb.move_voltage(12000);
    rollert.move_voltage(12000);
    delay(650);
    rollerb.move_voltage(0);
    rollert.move_voltage(0);
  }
void descore()
  {
    intaker.move_voltage(-12000);
    intakel.move_voltage(12000);
    rollerb.move_voltage(-12000);

  }
