#include <iostream>
#include "Player.h"


#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

class ComputerPlayer:public Player{
public:
    // char move = 'R';

    ComputerPlayer(){};
    //ComputerPlayer(char move){};

    char getMove();

};

#endif
