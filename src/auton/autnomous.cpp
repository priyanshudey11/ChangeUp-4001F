#include "main.h"
#include <time.h>
#include"okapi/api.hpp"
#include "subsystemheaders/auton.hpp"
using namespace pros;
using namespace okapi;
void autonomous()
  {

    std::shared_ptr<okapi::OdomChassisController> chassis = ChassisControllerBuilder()
          .withMotors(
              {4, 5}, // Left motors are 1 & 2 (reversed)
              {8, 9}    // Right motors are 3 & 4
            )
          //  .withMaxVoltage(2000)
            .withMaxVelocity(275)
            //{wheel diameter, wheel track, length to middle wheel, middle wheel diameter}.
            .withDimensions(AbstractMotor::gearset::green, {{4_in, 4_in, 4_in, 4_in}, quadEncoderTPR})
            .withOdometry()
            .buildOdometry();
            int power = 0;
            int intakea= 0;
            int intaker= power;
            int intakel= power;
      //test
      chassis->moveDistance(2_ft);
      //flipout / goal 1
      flipout();
      //gets ball 1
      chassis->moveDistance(2.255_ft);
      getball();
      //gets ball 2
      chassis->turnAngle(60_deg);
      chassis->moveDistance(0.5_ft);
      storeball();
      getball();
      //get ball 3
      chassis-> moveDistance(3.32843_ft);
      storeball();
      getball();
      //goal 2
      chassis->turnAngle(120_deg);
      chassis-> moveDistance(1.2_ft);
      for  (int i=0; i<= 3; i++ )
        {
          void score();
        }
      for  (int i=0; i<= 2; i++ )
        {
          void getball();
        }
    chassis-> moveDistance(-1.2_ft);
    chassis->turnAngle(30_deg);
      for(int i= 0; i <=2;i++)
        {
          void descore();
        }
    //gets ball 4
    chassis->turnAngle(60_deg);
    chassis-> moveDistance(3.32843_ft);
    void getball();
    chassis-> moveDistance(-0.5_ft);
    //gaol 3
    



}

    /*
    while (true){
    //30 secs
    int forward,back;
        //turn left
        int turn30= 0;
        //turn right
        int turn330= 0;
        //go forward
        int turn0 = 0;
        //go back
        int turn360= 0;

        //auton
        turn0= 1;

        //turn left
         if(turn30== 1)
          {
            driveLF.move_voltage(-12000.0 / 127.0);
            driveLB.move_voltage(-12000.0 / 127.0);
            delay(1);
            driveLF.move_voltage(0);
            driveLF.move_voltage(0);

            driveRF.move_voltage(-12000.0 / 127.0);
            driveLB.move_voltage(-12000.0 / 127.0);
            delay(3000);
            driveLF.move_voltage(0);
            driveLF.move_voltage(0);
            turn30= 0;
          }
        //turn right
        else if(turn330==1)
          {
            driveLF.move_voltage(-12000.0 / 127.0);
            driveLB.move_voltage(-12000.0 / 127.0);
            delay(3000);
            driveLF.move_voltage(0);
            driveLF.move_voltage(0);

            driveRF.move_voltage(-12000.0 / 127.0);
            driveLB.move_voltage(-12000.0 / 127.0);
            delay(3000);
            driveLF.move_voltage(0);
            driveLF.move_voltage(0);
            turn330 =0;
          }
      else if(turn0==1)
              {
                driveLF.move_voltage(12000.0 / 127.0);
                driveLB.move_voltage(12000.0 / 127.0);
                delay(3000);
                driveLF.move_voltage(0);
                driveLF.move_voltage(0);

                driveRF.move_voltage(12000.0 / 127.0);
                driveLB.move_voltage(12000.0 / 127.0);
                delay(3000);
                driveLF.move_voltage(0);
                driveLF.move_voltage(0);
                turn0= 0;
              }
        else if(turn360==1)
            {
              driveLF.move_voltage(-12000.0 / 127.0);
              driveLB.move_voltage(-12000.0 / 127.0);
              delay(3000);
              driveLF.move_voltage(0);
              driveLF.move_voltage(0);

              driveRF.move_voltage(-12000.0 / 127.0);
              driveLB.move_voltage(-12000.0 / 127.0);
              delay(3000);
              driveLF.move_voltage(0);
              driveLF.move_voltage(0);
              turn360=0;
            }
        }
      }
*/
