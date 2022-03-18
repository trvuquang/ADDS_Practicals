# include "Player.h"

char Player::getMove(int i){
    return moveMade[i];
}

void Player::makeMove(char m1, char m2, char m3){
    moveMade[0] = m1;
    moveMade[1] = m2;
    moveMade[2] = m3;
}
