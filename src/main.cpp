#include <iostream>
#include "robot.h"

int main() {
    Robot robot;

    // Initialize the robot system
    if (!robot.initialize()) {
        std::cerr << "Failed to initialize the robot." << std::endl;
        return 1;
    }

    // Start the main control loop
    robot.start();

    return 0;
}