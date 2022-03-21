#include <iostream>
#include "PaperDoll.h"

PaperDoll::PaperDoll() {
	name = "PaperDoll";
};
char PaperDoll::makeMove() {
	char paperDollMoves[3] = { 'P','S','S' };
	int moveIndex = 0;
	char paperDollMove = paperDollMoves[moveIndex];
	if (moveIndex < 3) {
		moveIndex++;
	}
	else {
		moveIndex = 0;
	}

	return paperDollMove;

}
