# include "Avalanche.h"

Avalanche::Avalanche(){
    // Rock only
    Avalanche::makeMove('R', 'R', 'R');
    Avalanche::setName("Avalanche");
}