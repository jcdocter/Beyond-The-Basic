cmake_minimum_required(VERSION 3.19)
project(Strategies_for_Game_of_Life)

set(CMAKE_CXX_STANDARD 14)

add_executable(Strategies_for_Game_of_Life
        Main.cpp
        Matrix.h
        Matrix.cpp
        Rules.h
        Rules.cpp
        StandardRules.cpp
        StandardRules.h
        )

include_directories(headers /usr/include c:/SFML/include)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(c:/SFML/include)
target_link_libraries(Strategies_for_Game_of_Life sfml-system sfml-window sfml-graphics sfml-audio)