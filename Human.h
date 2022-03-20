#include <iostream>
#include "Player.h"

#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H


class Human:public Player{
public:
    char move;
    
    Human(){};
    void getInput();

    char makeMove();

};

#endif
