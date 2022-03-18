# ifndef PLAYER_H
# define PLAYER_H

# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <string>

class Player {
    public:
        char getMove (int i);
        void makeMove (char m1, char m2, char m3);
        std::string className;
  
    private:
        char moveMade [3];
    
};

# endif