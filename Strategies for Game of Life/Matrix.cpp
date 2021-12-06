#include "Matrix.h"

Matrix::Matrix(int _width, int _height, int _Xcell, int _Ycell) : cellWidth(_width), cellHeight(_height){
    Xcell = _Xcell;
    Ycell = _Ycell;
}

Matrix::~Matrix() {

}

void Matrix::InitGrid() {
    for(int y=0; y < Ycell; y++){
        std::vector<int> line;
        for(int x=0; x < Xcell; x++){
            line.push_back(0);
        }

        grids.push_back(line);
    }
}

void Matrix::ClearGrid() {
    grids.clear();
    InitGrid();
}

void Matrix::ToggleCell(int _line, int _column) {
    int v = grids[_line][_column];

    if(v == 1){
        grids[_line][_column] = 0;
    }else{
        grids[_line][_column] = 1;
    }
}

void Matrix::Draw(sf::RenderWindow &window, Rules* rules) {
    float thread = 1.0f;
    sf::Color gridColor(200,200,200);
    sf::Color cellColor(0,0,0);

    //grids
    for (int x = 0; x <= Xcell; x++) {
        int cell = cellWidth * x;

        sf::RectangleShape line;
        line.setPosition(cell,0);
        line.setSize(sf::Vector2f(thread, 625));
        line.setFillColor(gridColor);
        line.setOutlineThickness(0);

        window.draw(line);
    }

    for (int y = 0; y <= Ycell; y++) {
        int cell = cellHeight * y;

        sf::RectangleShape line;
        line.setPosition(0,cell);
        line.setSize(sf::Vector2f(625, thread));
        line.setFillColor(gridColor);
        line.setOutlineThickness(0);

        window.draw(line);
    }

    //cells
    for (int ln = 0; ln < Ycell; ln++) {
        std::vector<int> lines = grids[ln];

        for (int c = 0; c < Xcell; c++) {
            int column = lines[c];

            if(column == 1){
                sf::RectangleShape cell;
                cell.setPosition(c * cellWidth + thread, ln * cellHeight + thread);
                cell.setSize(sf::Vector2f(cellWidth - thread, cellHeight - thread));

                cell.setFillColor(cellColor);
                cell.setOutlineThickness(0);

                window.draw(cell);
            }
        }
    }
    rules->TimeManager();
}
