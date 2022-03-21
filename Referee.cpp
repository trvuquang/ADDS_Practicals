# include "Referee.h"
# define game_of_five 5

Player Referee::refGame(Player& p1, Player& p2){
        int points = 0;
    for (int games = 0; games < game_of_five; games++){
        std::cout << "\nGame no: ";
        std::cout << games;

        char c1 = p1.getMove(games % 3);
        std::cout << " -> Player1: ";
        std::cout << c1;
        
        char c2 = p2.getMove(games % 3);
        std::cout << " - Player2: ";
        std::cout << c2;

        if (c1 == c2){
            std::cout << "  ---> Point: ";
            std::cout << points;
        }

        if ((c1 == 'P' && c2 == 'R') || (c1 == 'S' && c2 == 'P') || (c1 == 'R' && c2 == 'S')) {
            points ++;
            std::cout << "  ---> Point: ";
            std::cout << points;
        }

        if ((c1 == 'P' && c2 == 'S') || (c1 == 'S' && c2 == 'R') || (c1 == 'R' && c2 == 'P')){
            points --;
            std::cout << "  ---> Point: ";
            std::cout << points;
        }
    }
    // std::cout << "\nFinal score: " + points;

    if (points > 0){
        // player1_won = 1;
        std::cout << "\n -(Player1 WON)- ";
        return p1;
    }
    
    else if (points == 0){
        std::cout << "\n -(It's a TIE!)- ";
        return p1;
    }

    else{
        // player1_won = 0;
        std::cout << "\n -(Player2 WON)- ";
        return p2;
    }
}

/*
bool Referee::did_player1_won(){
    return player1_won;
}*/