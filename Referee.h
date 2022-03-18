# ifndef REFEREE_H
# define REFEREE_H
# include "Player.h"

class Referee {
    public:
        Player refGame (Player& p1, Player& p2);
        bool did_player1_won ();
    
    private:
        bool player1_won;
};

# endif