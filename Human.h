# ifndef HUMAN_H
# define HUMAN_H

# include <stdlib.h>
# include <iostream>
# include "Player.h"
class Player;

class Human : virtual public Player {
    public:
        Human();
};

# endif