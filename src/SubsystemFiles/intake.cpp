#include "main.h"
#include "pros/misc.h"
#include "pros/rtos.h"
/*
//helper functions 
void setIntake(int power){
    INTAKEdriveLEFT = power;
    INTAKEdriveRIGHT = power;
}

//driver control functions
void setIntakeMotors(){
    int intakePower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)- controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1));
    setIntake(intakePower);
}

void setIntakeAuton(){
    int intakePower = 127;
    setIntake(intakePower);
    pros::c::delay(300);
    setIntake(0);
}
*/