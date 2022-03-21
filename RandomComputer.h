#pragma once
#include <iostream>
#include "Player.h"


class RandomComputer :public Player
{public:
	RandomComputer();
	char makeMove();
};


