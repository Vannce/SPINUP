#include "main.h"
#include "pros/llemu.hpp"
#include "pros/misc.h"
#include "pros/rtos.h"
#include "pros/screen.hpp"
#include <string>



void opcontrol(){
  while(true){
DRIVEbackLEFT.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
DRIVEbackRIGHT.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
DRIVEfrontLEFT.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
DRIVEfrontRIGHT.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
DRIVEmidLEFT.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
DRIVEmidRight.set_brake_mode(pros::E_MOTOR_BRAKE_COAST); 
CATA.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
INTAKE.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);

                setCATAMotor();  
//            setIntakeMotors();
            setDrive(6);  
            setPneumatics();
  }

}