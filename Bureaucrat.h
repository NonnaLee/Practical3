#pragma once
#include "Player.h"

#ifndef BURRAUCRAT_H
#define	BURRAUCRAT_H

class Bureaucrat :public Player
{
public:

    Bureaucrat();
    char makeMove();

};

#endif // !BURRAUCRAT_H