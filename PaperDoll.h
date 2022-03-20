# ifndef PAPERDOLL_H
# define PAPERDOLL_H

# include "Computer.h"
# include "Player.h"

class PaperDoll : public virtual Computer{
    public:
        PaperDoll(){
            // Paper, Scissors, Scissors
            PaperDoll::makeMove('P', 'S', 'S');
            PaperDoll::setName("PaperDoll");
        }
};

# endif