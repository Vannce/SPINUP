#include "main.h"
#include "okapi/api/util/mathUtil.hpp"
#include "okapi/impl/chassis/controller/chassisControllerBuilder.hpp"
#include "okapi/impl/control/async/asyncPosControllerBuilder.hpp"
#include <memory>
//Drivetrain
std::shared_ptr<ChassisController> chassis =
ChassisControllerBuilder()
    .withMotors({1, 2, 3}, {4, 5, 6})
    //Blue Gearset, 2.75in Diam, 11.5in wheel track
    .withDimensions(AbstractMotor::gearset::blue, {{2.75_in, 11.5_in}, imev5BlueTPR})
    .build();

//Catapult
const double CatakP = 0.001;
const double CatakI = 0.0001;
const double CatakD = 0.0001;
std::shared_ptr<AsyncPositionController<double, double>> CataController = 
AsyncPosControllerBuilder()
.withMotor(7)
.withGains({CatakP, CatakI, CatakD})
.build();

//Intake
const double IntakekP = 0.001;
const double IntakekI = 0.0001;
const double IntakekD = 0.0001;
std::shared_ptr<AsyncPositionController<double, double>> IntakeController = 
AsyncPosControllerBuilder()
.withMotor(8)
.withGains({IntakekP, IntakekI, IntakekD})
.build();

void autonomous() {
    chassis-> moveDistance(0.5_m);
    chassis-> turnAngle(180_deg);
}