#include <iostream>


#ifndef PLAYER_H
#define PLAYER_H

class Player{
private:
    char move;
public:
    Player();
    Player(char name);

    virtual char makeMove();
    // void setMove(char move);

};

#endif
