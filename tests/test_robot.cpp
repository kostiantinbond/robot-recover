#include <gtest/gtest.h>
#include "robot.h"

class RobotTest : public ::testing::Test {
protected:
    Robot robot;

    void SetUp() override {
        // Initialize the robot for testing
        robot.initialize();
    }
};

TEST_F(RobotTest, TestInitialization) {
    EXPECT_TRUE(robot.isInitialized());
}

TEST_F(RobotTest, TestStart) {
    robot.start();
    EXPECT_TRUE(robot.isRunning());
}

TEST_F(RobotTest, TestStop) {
    robot.start();
    robot.stop();
    EXPECT_FALSE(robot.isRunning());
}

TEST_F(RobotTest, TestControlMotors) {
    robot.start();
    robot.controlMotors(50); // Set speed to 50
    EXPECT_EQ(robot.getMotorSpeed(), 50);
}

TEST_F(RobotTest, TestSensorReadings) {
    robot.start();
    robot.updateSensors();
    EXPECT_GT(robot.getSensorData(), 0); // Assuming sensor data should be greater than 0
}