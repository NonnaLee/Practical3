#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Player.h"

using namespace std;


#ifndef REFEREE_H
#define REFEREE_H

class Referee{
public:
    Player *player1;
    Player *player2;
    int gameNumber = 5;
    int gamePlayed = 0;
    bool tieMove;
    bool player1Win;
    char result;
    char player2Results[5];

    //Player getMove();
    void setMove(char Move);
    char refGame(Player& player1, Player& player2);
    void outputResults();
    
};

#endif
