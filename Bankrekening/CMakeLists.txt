cmake_minimum_required(VERSION 3.19)
project(Bankrekening)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Bankrekening
        Bankrekening.cpp
        Bankrekening.h
        main.cpp
        Transactie.cpp
        Transactie.h)
