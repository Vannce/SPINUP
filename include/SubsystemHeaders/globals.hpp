#include "main.h"
#include "okapi/impl/chassis/controller/chassisControllerBuilder.hpp"
#include "pros/adi.hpp"
#include "pros/motors.h"
#include <memory>

//Motors
extern pros::Motor INTAKE;
extern pros::Motor CATA;
    //drive
extern pros::Motor DRIVEmidLEFT;
extern pros::Motor DRIVEmidRight;
extern pros::Motor DRIVEbackLEFT;
extern pros::Motor DRIVEbackRIGHT;
extern pros::Motor DRIVEfrontLEFT;
extern pros::Motor DRIVEfrontRIGHT;

//Controller


extern pros::Controller controller;

//Miscellaneous

//Pneumatics
extern pros::ADIDigitalOut Intake;
extern pros::ADIDigitalOut Flywheel;
extern pros:: ADIDigitalOut IndexerPiston;

//Odometry?
extern std::shared_ptr<okapi::ChassisControllerBuilder> chassis;
extern std::shared_ptr<AsyncMotionProfileController> profileController;

//GUI
