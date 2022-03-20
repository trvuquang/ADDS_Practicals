# ifndef AVALANCHE_H
# define AVALANCHE_H

# include "Computer.h"
# include "Player.h"

class Avalanche : public virtual Computer{
    public:    
        Avalanche(){
            // Rock only
            Avalanche::makeMove('R', 'R', 'R');
            Avalanche::setName("Avalanche");
        }
};

# endif