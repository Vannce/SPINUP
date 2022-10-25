#include "main.h"
#include "pros/rtos.h"
//Drive rcontrol functions

void SetDriveMotors(int motors, int right, int left){
  
  if(motors == 6){
    DRIVEmidLEFT = left;
    DRIVEmidRight = right;
    DRIVEbackLEFT = left;
    DRIVEbackRIGHT = right;
    DRIVEfrontLEFT = left;
    DRIVEfrontRIGHT = right;}
  
}

void setDrive(int motors){
  int turn = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_X)/1.5;
    int vertical = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    if(abs(turn) < 10) {
        turn = 0;
    }
    if(abs(vertical) < 10) {
        vertical = 0;
    }
    SetDriveMotors(motors, vertical + turn, vertical - turn);
}

void setDriveAuton(){
  SetDriveMotors(4,127, 127);
  pros::c::delay(200);
  SetDriveMotors(4, 0, 0);
}