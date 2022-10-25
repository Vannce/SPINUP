#include "main.h"
#include "pros/adi.hpp"

//motors
    //drive
pros::Motor DRIVEfrontLEFT(1, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor DRIVEmidLEFT(2, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor DRIVEbackLEFT(3, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor DRIVEfrontRIGHT(4, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor DRIVEmidRight(5, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor DRIVEbackRIGHT(6, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);



pros::Motor INTAKE(8, pros::E_MOTOR_GEARSET_36, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor CATA(7, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);

//Controller

pros::Controller controller(pros::E_CONTROLLER_MASTER);

//PTOS

pros::ADIDigitalOut Endgame('A');

