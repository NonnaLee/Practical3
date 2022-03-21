
#include <iostream>
#include <array>
#include "Referee.h"
#include "Human.h"
// Player Types
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Avalanche.h"
#include "Toolbox.h"
#include "Avalanche.h"
#include "Crescendo.h"
#include "FistfullODollars.h"

#include "Tournament.h"


using namespace std;

int main()
{
	Avalanche* p1 = new Avalanche();
	Bureaucrat* p2 = new Bureaucrat();
	Bureaucrat* p3 = new Bureaucrat();
	Toolbox* p4 = new Toolbox();
	Toolbox* p5 = new Toolbox();
	Crescendo* p6 = new Crescendo();
	Crescendo* p7 = new Crescendo();
	FistfullODollars* p8 = new FistfullODollars();
	// Expecting : Toolbox


	Tournament tournament = Tournament();
	
	array<Player*, 8> players = { p1, p2, p3, p4, p5, p6, p7, p8 };
	Player* winningPlayer = tournament.run(players);
	cout << endl<< "Winning Player: "<< winningPlayer->name;
	//Referee referee1 = Referee();
	//cout << referee1.refGame(avalunche, avalunche);
	
	return 0;

}

