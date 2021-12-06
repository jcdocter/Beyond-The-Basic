#pragma once

#include <iostream>
#include <Vector>
#include <SFML/Graphics.hpp>

#include "Rules.h"

class Matrix{
    private:
        int Xcell;
        int Ycell;

        int cellWidth;
        int cellHeight;

    public:
        Matrix(int _width, int _height, int _Xcell, int _Ycell);
        virtual ~Matrix();

        void InitGrid();
        void ClearGrid();

        void ToggleCell(int _line, int _column);
        void Draw(sf::RenderWindow &window, Rules* rules);

        std::vector<std::vector<int>> grids;
};