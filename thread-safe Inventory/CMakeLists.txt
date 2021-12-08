cmake_minimum_required(VERSION 3.19)
project(thread_safe_Inventory)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(thread_safe_Inventory
        Inventory.cpp
        Inventory.h
        main.cpp)
