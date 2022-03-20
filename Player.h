# ifndef PLAYER_H
# define PLAYER_H

# include <stdio.h>
# include <stdlib.h>
# include <iostream>

class Player {
    public:
        char getMove (int i);
        void makeMove (char m1, char m2, char m3);
        std::string getName();
        void setName(std::string name);
  
    private:
        char moveMade [3];

    protected:
        std::string className;  // To identify which classes are which
};

# endif