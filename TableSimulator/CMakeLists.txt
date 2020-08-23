cmake_minimum_required(VERSION 3.17)
project(TableSimulator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TableSimulator
        Card.cpp
        Card.h
        pTableSim.cpp
        pTableSim.h)
