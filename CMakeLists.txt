cmake_minimum_required(VERSION 3.10)
project(robot_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

file(GLOB SOURCES
    src/*.cpp
    src/controllers/*.cpp
)

add_executable(robot ${SOURCES})

# Add tests
enable_testing()
add_subdirectory(tests)