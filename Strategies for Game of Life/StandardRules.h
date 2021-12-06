#pragma once

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

#include "Rules.h"

class StandardRules : public Rules{
    private:
        float delay = 0.5f;
        std::vector<std::vector<int>> grids;

    public:
        StandardRules(std::vector<std::vector<int>> _grid);
        ~StandardRules();

        int GetNeighbours(int _line, int _column, std::vector<std::vector<int>> dgrid) override;
        void TimeManager() override;

};

