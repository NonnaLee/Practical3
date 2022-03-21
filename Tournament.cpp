#include "Tournament.h"
#include <iostream>
#include <array>
#include "Referee.h"

using namespace std;

Player* Tournament::run(array<Player*, 8> competitors)
//Player* Tournament::run(Player* competitors[8])
{
    Referee referee1 = Referee();
    int remainingCompetitors = 8;
    array<Player*, 8> competitorsNext;
    while (remainingCompetitors>1){
        int competitorsNextCount = 0;
        cout << "  ------- ROUND -----" << endl;
        for (int i = 0; i < remainingCompetitors; i+=2) {
            // Get Player Index
            int p1_i = i;
            int p2_i = i + 1;

            // Get Player Objects
            Player* p1 = competitors[p1_i];
            Player* p2 = competitors[p2_i];

            // Referee The Game
            cout << p1_i << " vs " << p2_i << " = ";
            int p1Wins = 0;
            int p2Wins = 0;
            for (int i = 0; i < 5; i++) {
                
                char result = referee1.refGame(*p1, *p2);
                cout << result<<"-";
                if (result == 'W') {
                    p1Wins++;
                }else if (result == 'L') {
                    p2Wins++;
                }
            }
            // Add The Winner To The Next Game
            if (p1Wins >= p2Wins) {
                competitorsNext[competitorsNextCount] = p1;
            }
            else {
                competitorsNext[competitorsNextCount] = p2;
            }
            competitorsNextCount++;
            
            cout << endl;
        }
        competitors = competitorsNext;
        remainingCompetitors = competitorsNextCount;
    };
    
    return competitorsNext[0];
}
