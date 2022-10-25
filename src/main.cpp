#include "main.h"


/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {

//    setIntakeAuton();
   /* okapi::ChassisControllerBuilder()
    .withMotors(3,-4, 1, -2)
    .withDimensions(AbstractMotor::gearset::green, {{4_in,15_in}, okapi::imev5GreenTPR})
    .withSensors(
        ADIEncoder{'A', 'B'},//left
        ADIEncoder{'C', 'D',true},//right
        ADIEncoder{'E','F'}//middle
    )
    //specidy tracking wheel diameter (2.75in), track(7in), and TPR (360)
    //specify middle wheel distance (1in) and diameter (2.75in)
    .withOdometry({{2.75_in, 7_in, 1_in, 2.75_in},okapi::quadEncoderTPR})
    .buildOdometry();
    */
}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */



