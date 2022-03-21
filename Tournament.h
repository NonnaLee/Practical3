#pragma once
#include <iostream>
#include <array>
#include "Player.h"

using namespace std;

class Tournament
{
public:
	Player* run(array<Player*, 8>  competitors);
	//Player* run(Player* competitors[8]);
	
};

