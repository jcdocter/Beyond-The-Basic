#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>

#include "Matrix.h"
#include "StandardRules.h"

using namespace std;

Rules* ChooseRule(vector<vector<int>>& _grid){
     return new StandardRules(_grid);
}

int main(){
    int width = 625;
    int height = 625;

    int Xcells = Rules::XCell;
    int Ycells = Rules::YCell;

    int cellWidth = width /Xcells;
    int cellHeight = height / Ycells;

    sf::RenderWindow window(sf::VideoMode(width,height), "Game of life");

    sf::Color backGroundcolor(255, 255, 255);

    Matrix *matrix = new Matrix(cellWidth, cellHeight, Xcells, Ycells);
    Rules *rule = ChooseRule(matrix->grids);

     matrix->ClearGrid();

     while (window.isOpen()){

        sf::Event event;

        while (window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }

        if(event.type == sf::Event::MouseButtonReleased){
            if(event.mouseButton.button == sf::Mouse::Left){
                int col = floor(event.mouseButton.x / cellWidth);
                int ln = floor(event.mouseButton.y / cellHeight);

                matrix->ToggleCell(ln, col);
            }
        }

        window.clear(sf::Color::White);
        matrix->Draw(window, rule);
        window.display();
    }
    return 0;
}