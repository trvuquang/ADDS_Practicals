# include "Computer.h"
# include "Player.h"

class FistfullODollars : public virtual Computer{
    public:
        std::string className;
        FistfullODollars(){
            //Rock,Paper,Paper
            FistfullODollars::makeMove('R', 'P', 'P');
            className = "FistfullODollars";
        }
};