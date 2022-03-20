# ifndef FISTFULLODOLLAR_H
# define FISTFULLODOLLAR_H

# include "Computer.h"
# include "Player.h"

class FistfullODollars : public virtual Computer{
    public:
        FistfullODollars(){
            //Rock,Paper,Paper
            FistfullODollars::makeMove('R', 'P', 'P');
            FistfullODollars::setName ("FistfullODollars");
        }
};

# endif
