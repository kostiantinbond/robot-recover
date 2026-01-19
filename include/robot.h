#ifndef ROBOT_H
#define ROBOT_H

#include "controllers/motor_controller.h"
#include "controllers/sensor_manager.h"

class Robot {
public:
    Robot();
    void initialize();
    void start();
    void stop();
    void update();

private:
    MotorController motorController;
    SensorManager sensorManager;
};

#endif // ROBOT_H