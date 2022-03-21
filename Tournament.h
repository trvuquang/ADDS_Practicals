# ifndef TOURNAMENT_H
# define TOURNAMENT_H

# include <iostream>
# include <string>
# include <random>
# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <array>

# include "Player.h"
# include "Referee.h"

class Tournament {
    public: 
        Player * run(std::array <Player *, 8>  competitors);
};

# endif