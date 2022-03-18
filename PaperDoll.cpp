# include "Computer.h"
# include "Player.h"

class PaperDoll : public virtual Computer{
    public:
        std::string className;
        PaperDoll(){
            // Paper, Scissors, Scissors
            PaperDoll::makeMove('P', 'S', 'S');
            className = "PaperDoll";
        }
};