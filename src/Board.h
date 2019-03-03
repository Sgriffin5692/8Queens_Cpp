//
// Created by Seth Griffin on 3/3/2019.
//

#ifndef INC_8QUEENS_BOARD_H
#define INC_8QUEENS_BOARD_H
#include "Queen.h"

class Board
{
private:
    std::vector<std::vector<char>> gameBoard;
    std::vector<Queen> queens;  // Holds queen objects
    int currentQueen;   // Keeps track of current queen
    const int BOARD_SIZE;

    int findFreeSquare(int column);

public:
    Board();

    bool placeQueens(Queen _queen, int _row, int _column);

    void doEightQueens();








};

#endif //INC_8QUEENS_BOARD_H
