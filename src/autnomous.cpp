#include "main.h"
#include <time.h>
using namespace pros;
//timmer for the loop
void autonomous()
  {
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
      while (true)
      {
        for (int i= 0; i<0; i++)
          {
            turn30= 1;
          }
        for (int i= 0; i<0; i++)
          {
            turn330= 1;
          }
        for (int i= 0; i<0; i++)
          {
            turn0= 1;
          }
        for (int i= 0; i<0; i++)
          {
            turn360= 1;
          }
          
        //turn left
         if(turn30== 1)
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
            turn30= 0;
          }
        //turn right
        else if(turn330=1)
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
            turn330 = 0;
          }
      else if(turn0=1)
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
        else if(turn360=1)
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
    }
