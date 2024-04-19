cmake_minimum_required(VERSION 3.27)
project(eeee346_project3)

set(CMAKE_CXX_STANDARD 17)

add_executable(eeee346_project3
        DifferentialDriveRobot.cpp
        DifferentialDriveRobot.h
        main.cpp
        MobileRobot.cpp
        MobileRobot.h
        OmnidirectionalDriveRobot.cpp
        OmnidirectionalDriveRobot.h
        Robot.cpp
        Robot.h
        Wheel.cpp
        Wheel.h)
