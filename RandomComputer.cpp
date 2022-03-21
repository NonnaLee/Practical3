#include <iostream>
#include "RandomComputer.h"

RandomComputer::RandomComputer()
{
    name = "RandomComputer";
}

char RandomComputer::makeMove() {
    char moves[3] = { 'R','S','P' };
    int randomMove = rand() % 3;

    return moves[randomMove]; ;
};
