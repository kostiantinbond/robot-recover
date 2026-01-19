# Recovery Robot

## Overview
This project is a simulation of a robotic system, designed to manage and control various components such as motors and sensors. The robot's functionality is encapsulated within classes that handle specific tasks, allowing for modular development and testing.

## Project Structure
```
robot-project
├── src
│   ├── main.cpp                # Entry point of the application
│   ├── robot.cpp               # Implementation of the Robot class
│   └── controllers
│       ├── motor_controller.cpp # MotorController class implementation
│       └── sensor_manager.cpp   # SensorManager class implementation
├── include
│   ├── robot.h                 # Robot class declaration
│   └── controllers
│       ├── motor_controller.h   # MotorController class declaration
│       └── sensor_manager.h     # SensorManager class declaration
├── launch
│   └── robot_launch.launch      # Launch configuration file
├── configs
│   └── robot_config.yaml        # Configuration settings for the robot
├── tests
│   ├── test_robot.cpp           # Unit tests for the Robot class
│   └── CMakeLists.txt          # Build configuration for tests
├── CMakeLists.txt              # CMake configuration file
├── package.xml                  # Package management file
└── README.md                    # Project documentation
```

## Setup Instructions
1. **Clone the repository**:
   ```
   git clone <repository-url>
   cd robot-project
   ```

2. **Build the project**:
   ```
   mkdir build
   cd build
   cmake ..
   make
   ```

3. **Run the robot**:
   ```
   ./src/main
   ```

## Usage Guidelines
- Modify the configuration in `configs/robot_config.yaml` to adjust motor parameters and sensor thresholds as needed.
- Use the launch file in `launch/robot_launch.launch` to start the robot system with predefined parameters.
- Unit tests can be run from the `tests` directory to ensure the functionality of the Robot class and its components.

## Contributing
Contributions are welcome! Please submit a pull request or open an issue for any enhancements or bug fixes.

## License
This project is licensed under the MIT License. See the LICENSE file for details.
