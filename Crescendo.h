# ifndef CRESCENDO_H
# define CRESCENDO_H

# include "Computer.h"
# include "Player.h"
# include <string>

class Crescendo : public virtual Computer{
    public:
        Crescendo(){
            // Paper, Scissors, Rock
            Crescendo::makeMove('P', 'S', 'R');
            Crescendo::setName("Crescendo");
        }
};

# endif