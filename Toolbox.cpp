# include "Computer.h"
# include "Player.h"

class Toolbox : public virtual Computer{
    public:
        std::string className;
        Toolbox(){
            // Scissors on;l
            Toolbox::makeMove('S', 'S', 'S');
            className = "Toolbox";
        }
};