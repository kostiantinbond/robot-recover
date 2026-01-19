#include "controllers/motor_controller.h"
#include <iostream>

MotorController::MotorController() : speed(0), isRunning(false) {}

void MotorController::start() {
    if (!isRunning) {
        isRunning = true;
        std::cout << "Motors started." << std::endl;
    } else {
        std::cout << "Motors are already running." << std::endl;
    }
}

void MotorController::stop() {
    if (isRunning) {
        isRunning = false;
        speed = 0;
        std::cout << "Motors stopped." << std::endl;
    } else {
        std::cout << "Motors are already stopped." << std::endl;
    }
}

void MotorController::setSpeed(int newSpeed) {
    if (isRunning) {
        speed = newSpeed;
        std::cout << "Motor speed set to " << speed << "." << std::endl;
    } else {
        std::cout << "Cannot set speed. Motors are not running." << std::endl;
    }
}

int MotorController::getSpeed() const {
    return speed;
}

bool MotorController::isMotorRunning() const {
    return isRunning;
}