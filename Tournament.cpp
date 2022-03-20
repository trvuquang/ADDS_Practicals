# include "Tournament.h"
# include "Referee.h"

using namespace std;

Player * Tournament::run(std::array <Player *, 8>  competitors){    
    Referee ref1, ref2, ref3, ref4, ref5, ref6, ref7;
    Player winner1, winner2, winner3, winner4, winner5, winner6, winner7;  
    Player * ptr;

    cout << "\n-------------------------- TOURNAMENT BEGINS!!! --------------------------";
    cout << "\n\nRound: 1A";
    winner1 = ref1.refGame(* competitors[0], * competitors[1]);
    cout << winner1.getName ();
        
    cout << "\n\nRound: 1B";
    winner2 = ref2.refGame(* competitors[2], * competitors[3]);
    cout << winner2.getName ();

    cout << "\n\nRound: 1C";
    winner3 = ref3.refGame(* competitors[4], * competitors[5]);
    cout << winner3.getName ();
    
    cout << "\n\nRound: 1D";
    winner4 = ref4.refGame(* competitors[6], * competitors[7]);
    cout << winner4.getName ();

    cout << "\n\n-------------------------- semi - FINAL --------------------------";

    cout << "\n\nRound: 2A";
    winner5 = ref5.refGame(winner1, winner2);
    cout << winner5.getName ();

    cout << "\n\nRound: 2B";
    winner6 = ref6.refGame(winner3, winner4);
    cout << winner6.getName ();

    cout << "\n\n-------------------------- ( FINAL ROUND ) --------------------------";

    cout << "\n\nRound: 3";
    winner7 = ref7.refGame(winner5, winner6);  
    cout << winner7.getName ();  

    // Assign and return pointer value of grand winner 
    ptr = &winner7;

    return ptr;
}