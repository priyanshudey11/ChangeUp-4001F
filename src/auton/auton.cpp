#include "main.h"
#include <time.h>
#include"okapi/api.hpp"
using namespace pros;
using namespace okapi;
void autonHandler()
  {
    //test();
    //score1auton();
    score2autonR();
    //score2autonR();
    //skills();

    //score3auton();


    //skillspt2();
  }
void test ()
  {
    std::shared_ptr<okapi::OdomChassisController> chassis = ChassisControllerBuilder()
          .withMotors(
              {1, 3}, // Left motors are 1 & 3 (reversed)
              {4, 6}    // Right motors are 3 & 4
            )
          //  .withMaxVoltage(2000)
            .withMaxVelocity(100)
            //{wheel diameter, wheel track, length to middle wheel, middle wheel diameter}.
            .withDimensions(AbstractMotor::gearset::green, {{3.25_in, 11.5_in}, imev5GreenTPR})
            .withOdometry()
            .buildOdometry();

      //test
      chassis->turnAngle(90_deg);
      delay(1000);
      chassis->turnAngle(-90_deg);
      chassis->moveDistance(2_ft);

      //chassis->turnAngle(90_deg);
  }
void score1auton()
  {
    std::shared_ptr<okapi::OdomChassisController> chassis = ChassisControllerBuilder()
          .withMotors(
              {1, 3}, // Left motors are 1 & 3 (reversed)
              {4, 6}    // Right motors are 3 & 4
            )
          //  .withMaxVoltage(2000)
            .withMaxVelocity(200)
            //{wheel diameter, wheel track, length to middle wheel, middle wheel diameter}.
            .withDimensions(AbstractMotor::gearset::green, {{3.25_in, 11.5_in}, imev5GreenTPR})
            .withOdometry()
            .buildOdometry();
          //flipout / goal 1
          flipout();
          delay(200);
  }
void score2autonR()
  {
    std::shared_ptr<okapi::OdomChassisController> chassis = ChassisControllerBuilder()
          .withMotors(
              {1, 3}, // Left motors are 1 & 3 (reversed)
              {4, 6}    // Right motors are 3 & 4
            )
          //  .withMaxVoltage(2000)
            .withMaxVelocity(150)
            //{wheel diameter, wheel track, length to middle wheel, middle wheel diameter}.
            .withDimensions(AbstractMotor::gearset::green, {{3.25_in, 11.5_in}, imev5GreenTPR})
            .withOdometry()
            .buildOdometry();
            //flipout / goal 3
            flipout();
            delay(600);
            //get ball1
            chassis->moveDistance(3.6882_ft);
            chassis->turnAngle(103_deg);
            auton1_intakes();
            chassis->moveDistance(2.3974_ft);
            goal2();
            chassis->moveDistance(-1_ft);
            chassis->turnAngle(200_deg);

    }
void score2autonL()
  {
    std::shared_ptr<okapi::OdomChassisController> chassis = ChassisControllerBuilder()
          .withMotors(
              {1, 3}, // Left motors are 1 & 3 (reversed)
              {4, 6}    // Right motors are 3 & 4
            )
          //  .withMaxVoltage(2000)
            .withMaxVelocity(150)
            //{wheel diameter, wheel track, length to middle wheel, middle wheel diameter}.
            .withDimensions(AbstractMotor::gearset::green, {{3.25_in, 11.5_in}, imev5GreenTPR})
            .withOdometry()
            .buildOdometry();
            //flipout / goal 3
            flipout();
            delay(600);
            //get ball1
            chassis->moveDistance(3.6882_ft);
            chassis->turnAngle(-103_deg);
            auton1_intakes();
            chassis->moveDistance(2.3974_ft);
            // goal 2
            auton1_rollers();
            chassis->moveDistance(-1.3746_ft);
            chassis->turnAngle(180_deg);


            //descore


    }
void score3auton()
  {
    std::shared_ptr<okapi::OdomChassisController> chassis = ChassisControllerBuilder()
          .withMotors
            (
              {1, 3}, // Left motors are 1 & 3 (reversed)
              {4, 6}    // Right motors are 3 & 4
            )
          //  .withMaxVoltage(2000)
            .withMaxVelocity(200)
            //{wheel diameter, wheel track, length to middle wheel, middle wheel diameter}.
            .withDimensions(AbstractMotor::gearset::green, {{3.25_in, 11.5_in}, imev5GreenTPR})
            .withOdometry()
            .buildOdometry();
            flipout();
            delay(200);
            //get ball1
            chassis->moveDistance(3.5682_ft);
            chassis->turnAngle(103_deg);
            chassis->setMaxVelocity(150);
            chassis->moveDistance(1.6577_ft);
            getball();
            storeball();
            // goal 2
            chassis->setMaxVelocity(100);
            chassis->moveDistance(2.3930_ft);
            score();
            //ball 3
            chassis->setMaxVelocity(200);
            chassis->moveDistance(-1.3746_ft);
            chassis->turnAngle(162_deg);
            chassis->moveDistance(5.2010_ft);
            chassis->turnAngle(119_deg);
            chassis->setMaxVelocity(150);
            chassis->moveDistance(1.2456_ft);
            getball();
            storeball();
            //goal 4
            chassis->setMaxVelocity(100);
            chassis->moveDistance(0.7544_ft);
            middlescore();
  }
void skills()
  {
    std::shared_ptr<okapi::OdomChassisController> chassis = ChassisControllerBuilder()
          .withMotors
            (
              {1, 3}, // Left motors are 1 & 3 (reversed)
              {4, 6}    // Right motors are 3 & 4
            )
          //  .withMaxVoltage(2000)
            .withMaxVelocity(100)
            //{wheel diameter, wheel track, length to middle wheel, middle wheel diameter}.
            .withDimensions(AbstractMotor::gearset::green, {{3.25_in, 11.5_in}, imev5GreenTPR})
            .withOdometry()
            .buildOdometry();
            //goal 1 /flipout
            flipout();
            delay(200);
            //get ball1 1
            chassis->moveDistance(0.7875_ft);
            chassis->turnAngle(-60_deg);
            chassis->moveDistance(1.8453_ft);
            getball();
            storeball();
            //get ball 12
            chassis->turnAngle(76_deg);
            chassis->moveDistance(4.1231_ft);
            getball();
            storeball();
            //get ball 3
            chassis->turnAngle(104_deg);
            chassis->moveDistance(2_ft);
            getball();
            storeball();
            // goal 2
            chassis->moveDistance(1.5_ft);
            goal2();
            //descore from goal 2

            chassis->moveDistance(-1.5_ft);
            chassis->turnAngle(30_deg);
            descore();
            //get ball 5
            //acounted for descore
            chassis->turnAngle(-134_deg);
            chassis->moveDistance(4.1231_ft);
            getball();
            //goal 3
            chassis->turnAngle(76_deg);
            chassis->moveDistance(0.7501_ft);
            chassis->turnAngle(-42_deg);
            chassis->moveDistance(3.0079_ft);
            goal3();
            //descore
            chassis->moveDistance(-3.0079_ft);
            chassis->turnAngle(30_deg);
            descore();
            //ball 13
            chassis->turnAngle(164_deg);
            chassis->moveDistance(4.2529_ft);
            getball();
            storeball();
            //goal 4
            chassis->turnAngle(62_deg);
            chassis->moveDistance(3.5_ft);
            goal4();
            chassis->turnAngle(30_deg);
            descore();
            //ball 6
            chassis->moveDistance(-1_ft);
            chassis->turnAngle(-120_deg);
            chassis->moveDistance(2.9957_ft);
            getball();
            storeball();
            //goal5
            chassis->moveDistance(1_ft);
            chassis->turnAngle(135_deg);
            chassis->moveDistance(2.1213_ft);
            goal5();
            chassis->moveDistance(-1.293_ft);
            chassis->turnAngle(-30_deg);
            //ball 14
            chassis->moveDistance(165_ft);
            chassis->turnAngle(-135_deg);
            //ball 14
            chassis->moveDistance(5.2925_ft);
            getball();
            storeball();
            //ball 8
            chassis->moveDistance(2_ft);
            getball();
            storeball();
            //goal 6
            chassis->moveDistance(2_ft);
            chassis->moveDistance(1.4479_ft);
            goal6();
            chassis->moveDistance(-1.4479_ft);
            chassis->turnAngle(30_deg);
            //ball 10
            chassis->turnAngle(-134_deg);
            chassis->moveDistance(4.1241_ft);
            getball();
            storeball();
            //goal 7
  }
void oldauton()
{
    //old auton
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
