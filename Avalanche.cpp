# include "Computer.h"
# include "Player.h"
# include <string>

class Avalanche : public virtual Computer{
    public:
        std::string className;
        Avalanche(){
            // Rock only
            Avalanche::makeMove('R', 'R', 'R');
            className = "Avalanche";
        }
};

