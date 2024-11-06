#pragma once

#include "api.h"

inline pros::MotorGroup intake({-1, 11});  // Negative port will reverse the motor

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor tilter(9);

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');