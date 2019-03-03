//
// Created by Seth Griffin on 3/3/2019.
//

#ifndef INC_8QUEENS_QUEEN_H
#define INC_8QUEENS_QUEEN_H
#include<vector>

class Queen
{
private:
    // Position on the game board
    std::vector<int> position;

public:
    Queen();

    std::vector<int> getPosition();

    void setPosition(int row, int column);
};

#endif //INC_8QUEENS_QUEEN_H
