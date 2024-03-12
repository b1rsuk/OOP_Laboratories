cmake_minimum_required(VERSION 3.28)
project(duhoxy)

set(CMAKE_CXX_STANDARD 17)

add_executable(duhoxy main.cpp
        Dyhotomia.cpp
        dyhotomia.h)
