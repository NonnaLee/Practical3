#include <iostream>
#include "Human.h"

using namespace std;

Human::Human()
{
}

char Human::makeMove(){
        cout << "Enter move: ";
        char humanMove;
        cin >> humanMove;
        return humanMove;
    };