#include "main.h"
#include "pros/misc.h"
//helper functions 
void setCATA(int power){
    CATA = power;
}

//driver control functions
void setCATAMotor(){
    int CATAPower = -127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_RIGHT));
    setCATA(CATAPower);
}