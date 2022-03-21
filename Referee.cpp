#include <iostream>
#include "Referee.h"

using namespace std;

    char Referee::refGame(Player player1, Player player2){
        
        char result;
     
        char player1Move = player1.makeMove();
        char player2Move = player2.makeMove();

        if(player1Move == player2Move){
    
            result = 'T';
        }
        else if((player1Move == 'R' && player2Move == 'S') || 
           (player1Move == 'S' && player2Move == 'P') || 
           (player1Move == 'P' && player2Move == 'R')){

           result = 'W';
        }else{

           result = 'L';
        }
        
    
        return result;
};

    /*
    void Referee::outputResults(){
        //cout << "Results for human player are: ";

        for(int i=0; i<gamePlayed; i++){
            cout << player2Results[i] << " ";
        }
    };
    */

    Referee::Referee()
    {
    }

