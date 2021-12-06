#include "StandardRules.h"

StandardRules::StandardRules(std::vector<std::vector<int>> _grid) {
    grids = _grid;
}

StandardRules::~StandardRules() noexcept {

}

int StandardRules::GetNeighbours(int _line, int _column, std::vector<std::vector<int>> dgrid) {
    int cell = 0;
    for (int y = _line - 1; y <= _line + 1 ; y++) {
        for (int x = _column - 1; x <= _column + 1 ; x++) {
            if(y >= 0 && y < YCell && x < XCell){
                cell += dgrid[y][x];
            }
        }
    }

    return cell - dgrid[_line][_column];
}

void StandardRules::TimeManager() {
    sf::Clock gameClock;
    float elapsed = gameClock.getElapsedTime().asSeconds();

    if(elapsed >= delay){
        std::vector<std::vector<int>> tmp = grids;

        for(int ln = 0; ln < YCell; ln++){
            std::vector<int> line = grids[ln];

            for(int cn = 0; cn < XCell; cn++){
                int col = line[cn];
                int neighbor = GetNeighbours(ln,col, grids);

                if(col == 1){
                    if(neighbor < 2 || neighbor > 3){
                        tmp[ln][cn] = 0;
                    }
                } else{
                    if(neighbor == 3){
                        tmp[ln][cn] = 1;
                    }
                }
            }
        }
        grids = tmp;
        gameClock.restart();
    }
}