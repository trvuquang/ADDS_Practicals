# include "Computer.h"
# include "Player.h"

class Bureaucrat : public virtual Computer{
    public:
        std::string className;
        Bureaucrat(){
            // Paper only
            Bureaucrat::makeMove('P', 'P', 'P');
            className = "Bureaucrat";
        }
};