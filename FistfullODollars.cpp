#include <iostream>
#include "FistfullODollars.h"

using namespace std;

FistfullODollars::FistfullODollars() {};
char FistfullODollars::makeMove() {
	char fistFullODollarsMoves[3] = { 'R','P','P' };
	int moveIndex = 0;
	char fistFullODollarsMove = fistFullODollarsMoves[moveIndex];
	if (moveIndex < 3) {
		moveIndex++;
	}
	else {
		moveIndex = 0;
	}
	return fistFullODollarsMove;
}
