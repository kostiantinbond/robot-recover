#include "robot.h"
#include "controllers/motor_controller.h"
#include "controllers/sensor_manager.h"

Robot::Robot() : motorController(), sensorManager() {
}

void Robot::initialize() {
    motorController.initialize();
    sensorManager.initialize();
}

void Robot::start() {
    while (true) {
        sensorManager.update();
        motorController.control();
        // Add any additional coordination logic here
    }
}

void Robot::shutdown() {
    motorController.stop();
    sensorManager.shutdown();
}