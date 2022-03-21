
#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Avalanche.h"
#include "Tournament.h"


using namespace std;

int main()
{
	Avalanche* avalunche = new Avalanche();
	// Human humanPlayer = Human();
	// cout << humanPlayer.makeMove();
	Tournament tournament = Tournament();
	Player* players[8] = { avalunche, avalunche, avalunche, avalunche, avalunche, avalunche, avalunche, avalunche };
	tournament.run(players);
	//Referee referee1 = Referee();
	//cout << referee1.refGame(avalunche, avalunche);
	
	return 0;

}

