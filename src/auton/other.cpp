#include "main.h"
#include <stdio.h>
using namespace pros;
void getball()
  {
    intakel.move_voltage(12000);
    intaker.move_voltage(12000);
    delay(250);
    intakel.move_voltage(0);
    intaker.move_voltage(0);
    rollerb.move_voltage(-12000);
    delay (50);
    rollerb.move_voltage(0);
  }
//stores ball on midde roller moving it up as each ball comes in
void storeball()
  {
    rollert.move_voltage(12000);
    rollerb.move_voltage(-12000);
    delay(200);
    rollert.move_voltage(0);
    rollerb.move_voltage(0);
  }
void flipout()
  {
    intakel.move_voltage(-12000);
    intaker.move_voltage(12000);
    rollerb.move_voltage(12000);
    rollert.move_voltage(12000);
    delay(200);
    intakel.move_voltage(0);
    intaker.move_voltage(0);
    rollerb.move_voltage(0);
    rollert.move_voltage(0);
  }
void scoreauton()
{
  intakel.move_voltage(12000);
  intaker.move_voltage(12000);
  rollerb.move_voltage(-12000);
  rollert.move_voltage(-12000);
  delay(900);
  rollerb.move_voltage(0);
  rollert.move_voltage(0);
  intakel.move_voltage(0);
  intaker.move_voltage(0);
}
void score()
  {
    rollerb.move_voltage(-12000);
    rollert.move_voltage(-12000);
    delay(800);
    rollerb.move_voltage(0);
    rollert.move_voltage(0);
  }
void descore()
  {
    intaker.move_voltage(-12000);
    intakel.move_voltage(-12000);
    rollerb.move_voltage(12000);
    rollert.move_voltage(12000);
    delay(800);
    rollerb.move_voltage(0);
    rollert.move_voltage(0);
    intaker.move_voltage(0);
    intakel.move_voltage(0);
  }
void middlescore()
  {
    rollerb.move_voltage(-12000);
    rollert.move_voltage(-8000);
    delay(500);
    rollerb.move_voltage(0);
    rollert.move_voltage(0);
  }
//skills goals
void goal2()
  {
    rollerb.move_voltage(-12000);
    rollert.move_voltage(-12000);
    delay(900);
    for (int i= 0;i<2;i++)
    {
      getball();
    }

    intakel.move_voltage(6000);
    intaker.move_voltage(6000);
    rollerb.move_voltage(0);
    rollert.move_voltage(0);
    intakel.move_voltage(0);
    intaker.move_voltage(0);
  }
//skills goal3
void goal3()
{
  rollerb.move_voltage(-12000);
  rollert.move_voltage(-12000);
  delay(900);
  for (int i= 0;i<4;i++)
    {
      getball();
    }
  rollerb.move_voltage(0);
  rollert.move_voltage(0);
  intakel.move_voltage(0);
  intaker.move_voltage(0);
}
void goal4()
  {
    rollerb.move_voltage(-12000);
    rollert.move_voltage(-12000);
    delay(900);
    for (int i= 0;i<2;i++)
    {
      getball();
    }
    rollerb.move_voltage(0);
    rollert.move_voltage(0);
    intakel.move_voltage(0);
    intaker.move_voltage(0);
  }
void goal5()
{
  rollerb.move_voltage(-12000);
  rollert.move_voltage(-12000);
  delay(900);
  for (int i= 0;i<4;i++)
    {
      getball();
    }
  rollerb.move_voltage(0);
  rollert.move_voltage(0);
  intakel.move_voltage(0);
  intaker.move_voltage(0);
}
void goal6()
{
  rollerb.move_voltage(-12000);
  rollert.move_voltage(-12000);
  delay(900);
  for (int i= 0;i<2;i++)
    {
      getball();
    }
  rollerb.move_voltage(0);
  rollert.move_voltage(0);
  intakel.move_voltage(0);
  intaker.move_voltage(0);
}
void goal7()
{
  rollerb.move_voltage(-12000);
  rollert.move_voltage(-12000);
  delay(900);
  for (int i= 0;i<4;i++)
  {
    getball();
  }
  rollerb.move_voltage(0);
  rollert.move_voltage(0);
  intakel.move_voltage(0);
  intaker.move_voltage(0);
}
void goal8()
{
  rollerb.move_voltage(-12000);
  rollert.move_voltage(-12000);
  delay(900);
  for (int i= 0;i<2;i++)
  {
    getball();
  }
  rollerb.move_voltage(0);
  rollert.move_voltage(0);
  intakel.move_voltage(0);
  intaker.move_voltage(0);
}
void goalm()
{
  intakel.move_voltage(8000);
  intaker.move_voltage(8000);
  rollerb.move_voltage(-12000);
  rollert.move_voltage(-12000);
  delay(900);
  rollerb.move_voltage(0);
  rollert.move_voltage(0);
  intakel.move_voltage(0);
  intaker.move_voltage(0);
}
void auton1_intakes()
  {
    intakel.move_voltage(12000);
    intaker.move_voltage(12000);
    rollerb.move_voltage(600);
  }
//score
void auton1_rollers()
  {
    rollerb.move_voltage(-12000);
    rollert.move_voltage(-12000);
    delay(300);
  }
