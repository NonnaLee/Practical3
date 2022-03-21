#include <iostream>
#include "Crescendo.h"

using namespace std;

Crescendo::Crescendo() {
	name = "Crescendo";
};
char Crescendo::makeMove() {
	char crescendoMoves[3] = { 'P','S','R' };
	int moveIndex = 0;
	char crescendoMove = crescendoMoves[moveIndex];
	if (moveIndex < 3) {
		moveIndex++;
	}
	else {
		moveIndex = 0;
	}
	
	return crescendoMove;

}
