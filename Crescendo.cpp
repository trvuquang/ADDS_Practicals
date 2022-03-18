# include "Computer.h"
# include "Player.h"

class Crescendo : public virtual Computer{
    public:
        std::string className;
        Crescendo(){
            // Paper, Scissors, Rock
            Crescendo::makeMove('P', 'S', 'R');
            className = "Crescendo";
        }
};