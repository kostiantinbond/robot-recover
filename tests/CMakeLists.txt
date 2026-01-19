cmake_minimum_required(VERSION 3.10)

# Set the project name
project(RobotProjectTests)

# Find the required packages
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_gtest REQUIRED)

# Include the source files for the tests
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)

# Add the test executable
ament_add_gtest(test_robot test_robot.cpp)

# Link the test executable with the necessary libraries
target_link_libraries(test_robot
  robot
)

# Install the test executable
install(TARGETS
  test_robot
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()