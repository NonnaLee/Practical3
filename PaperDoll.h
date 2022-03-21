#include<iostream>
#include "Player.h"

#ifndef PAPERDOLL_H
#define PAPERDOLL_H

class PaperDoll :public Player
{
	PaperDoll();
	char makeMove();
};

#endif // !PAPERDOLL_H

