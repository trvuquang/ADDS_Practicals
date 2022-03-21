# include "Player.h"

char Player::getMove(int i){
    return moveMade[i];
}

// Make 3 moves - initializers to create new classes
void Player::makeMove(char m1, char m2, char m3){
    moveMade[0] = m1;
    moveMade[1] = m2;
    moveMade[2] = m3;
}

std::string Player::getName(){
    return className;
}

void Player::setName(std::string name){
    className = name;
}