# ifndef RANDOMCOMPUTER_H
# define RANDOMCOMPUTER_H

# include <iostream>
# include <random>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include "Computer.h"
# include "Player.h"
class Computer;

class RandomComputer : public Computer{
    public:
        RandomComputer(){
        char randomMove [3];    
        for (int i = 0; i < 3; i++) {
            srand (time(NULL));
            // generating random number from 0-2
            int r = rand()%3;
            char mvmt;             
            switch (r){
                case 0:
                    mvmt = 'R';
                    break;
                case 1:
                    mvmt = 'P';
                    break;
                case 2:
                    mvmt = 'S';
                    break;
            }       
            randomMove[i] = mvmt;
        }
        RandomComputer::makeMove(randomMove[0], randomMove[1], randomMove[2]);
        RandomComputer::setName ("RandomComputer");
    }    
};


# endif