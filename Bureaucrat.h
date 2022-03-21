#pragma once
#include "Player.h"

#ifndef BURRAUCRAT_H
#define	BURRAUCRAT_H

class Bureaucrat :public Player
{
public:

    Bureaucrat();
    char makeMove() override;

};

#endif // !BURRAUCRAT_H