cmake_minimum_required(VERSION 3.27)
project(RentaAutos)

set(CMAKE_CXX_STANDARD 17)

add_executable(RentaAutos main.cpp
        Car.h
        OldCar.h
        SportCar.h
        SportCar.cpp
        Car.cpp
        OldCar.cpp
        Company.cpp
        Company.h)
