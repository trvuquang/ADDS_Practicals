# include "Player.cpp"
# include "Human.cpp"
# include "Referee.cpp"
# include "Avalanche.cpp"
# include "Bureaucrat.cpp"
# include "Crescendo.cpp"
# include "FistfullODollars.cpp"
# include "PaperDoll.cpp"
# include "Toolbox.cpp"
# include "RandomComputer.cpp"
# include "Tournament.cpp"

# include <iostream>
# include <array>
# include <string>
# include <random>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

using namespace std;

int main (){
    // Avalanche Bureaucrat Bureaucrat Toolbox Toolbox Crescendo Crescendo FistfullODollars 
    Avalanche        player1;
    Bureaucrat       player2, player3;
    Toolbox          player4, player5;
    Crescendo        player6, player7;
    FistfullODollars player8;
    array <Player *, 8> competitors = {&player1, &player2, &player3, &player4, &player5, &player6, &player7, &player8};

    Tournament tour;    
    Player * grandWinner = tour.run(competitors);

    cout << "\n\nGRAND WINNER IS: " + grandWinner->getName();
}