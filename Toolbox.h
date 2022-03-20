# ifndef TOOLBOX_H
# define TOOLBOX_H

# include "Computer.h"
# include "Player.h"

class Toolbox : public virtual Computer{
    public:
        Toolbox(){
            // Scissors on;l
            Toolbox::makeMove('S', 'S', 'S');
            Toolbox::setName ("Toolbox");
        }
};

# endif