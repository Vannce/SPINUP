#include "main.h"
#include "pros/misc.h"

//helper functions
void setPneumaticsPistons(){
}
//drive control functions
void setPneumatics(){
    if(controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2) && controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)
    && controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1) && controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)){
        Endgame.set_value(false);
    }
    else{
        Endgame.set_value(true);
    }
}




