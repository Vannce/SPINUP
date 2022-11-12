#include "main.h"
#include "pros/rtos.h"
//Drive rcontrol functions

void SetDriveMotors(int motors, int right, int left){
  
  if(motors == 6){
    DRIVEmidLEFT = right;
    DRIVEmidRight = left;
    DRIVEbackLEFT = right;
    DRIVEbackRIGHT = left;
    DRIVEfrontLEFT = right;
    DRIVEfrontRIGHT = left;}
  
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

