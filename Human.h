#include <iostream>
#include "Player.h"

#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H


class HumanPlayer:public Player{
public:
    char move;
    
    HumanPlayer(){};
    void getInput();

    char getMove();

};

#endif
