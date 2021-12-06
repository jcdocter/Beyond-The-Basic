#pragma once

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

class Rules{
    private:

    public:
        Rules();

        virtual ~Rules();

        virtual int GetNeighbours(int _line, int _column, std::vector<std::vector<int>> dgrid) = 0;
        virtual void TimeManager() = 0;

        static const int XCell = 25;
        static const int YCell = 25;
};