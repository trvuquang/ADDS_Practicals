# include "Tournament.h"
# include "Referee.h"

using namespace std;

Player * Tournament::run(std::array <Player *, 8>  competitors){
    Referee ref1, ref2, ref3, ref4, ref5, ref6, ref7;
    Player winner1, winner2, winner3, winner4, winner5, winner6, winner7;  

    cout << "\n-------------------------- TOURNAMENT BEGINS!!! --------------------------";
        
    cout << "\n\nRound: 1A";
    winner1 = ref1.refGame(* competitors[0], * competitors[1]);
        
    cout << "\n\nRound: 1B";
    winner2 = ref2.refGame(* competitors[2], * competitors[3]);

    cout << "\n\nRound: 1C";
    winner3 = ref3.refGame(* competitors[4], * competitors[5]);
    
    cout << "\n\nRound: 1D";
    winner4 = ref4.refGame(* competitors[6], * competitors[7]);

    cout << "\n\n-------------------------- semi - FINAL --------------------------";

    cout << "\n\nRound: 2A";
    winner5 = ref5.refGame(winner1, winner2);

    cout << "\n\nRound: 2B";
    winner6 = ref6.refGame(winner3, winner4);

    cout << "\n\n-------------------------- ( FINAL ROUND ) --------------------------";

    cout << "\n\nRound: 3";
    winner7 = ref7.refGame(winner5, winner6);    

    return competitors[1];
}