cmake_minimum_required(VERSION 3.19)
project(Orcs_and_elves)

set(CMAKE_CXX_STANDARD 14)

include_directories(.h)

add_executable(Orcs_and_elves
        .cpp/Decorator.cpp
        .cpp/Elf.cpp
        .cpp/main.cpp
        .cpp/Npc.cpp
        .cpp/Orc.cpp
        .cpp/RoleDecorator.cpp
        .h/Decorator.h
        .h/Elf.h
        .h/Npc.h
        .h/Orc.h
        .h/RoleDecorator.h)
