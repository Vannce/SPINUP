#include "main.h"
#include "okapi/api/control/async/asyncMotionProfileController.hpp"
#include "okapi/impl/control/async/asyncMotionProfileControllerBuilder.hpp"
#include "pros/misc.h"

std::shared_ptr<OdomChassisController> chassis =
ChassisControllerBuilder()
    .withMotors({1, 2, 3}, {4, 5, 6})
    //Blue Gearset, 4 in Diam, 11.5in wheel track
    .withDimensions(AbstractMotor::gearset::blue, {{4_in, 11.5_in}, imev5BlueTPR})
    .withSensors(
        ADIEncoder{'A', 'B'}, //left encoder in A and B
        ADIEncoder{'C', 'D', true} // right encoder in C and D, reversed
    )
    .withOdometry({{4_in, 7_in}, quadEncoderTPR}, StateMode::FRAME_TRANSFORMATION)
    .buildOdometry();

void aimbot(){
        //goal is at -1, 5
    while(true){
        if(controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1)){
        
        chassis-> turnToPoint({-1_ft, 5_ft});
    }
    }


}


std::shared_ptr<AsyncMotionProfileController> profileControllerAuton =
    AsyncMotionProfileControllerBuilder()
    .withLimits({
        1.0, //maximum linear velocity
        2.0, //maximum linear acceleration
        10.0 // maximum linear jerk
    })
    .withOutput(chassis)
    .buildMotionProfileController();




void autonomous() {

    
    
}

