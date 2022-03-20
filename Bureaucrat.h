# ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include "Computer.h"
# include "Player.h"
# include <string>

class Bureaucrat : public virtual Player{
    public:    
        Bureaucrat(){
            // Rock only
            Bureaucrat::makeMove('P', 'P', 'P');
            Bureaucrat::setName("Bureaucrat");
        }
};

# endif
