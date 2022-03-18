# ifndef HUMAN_H
# define HUMAN_H

# include <iostream>
# include <stdlib.h>
# include "Player.h"

class Human : virtual public Player {
    public:
        std::string className;        
};

# endif