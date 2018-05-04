//Zachary Rust
//3/8/18
//Description: This class handles all operations relating to the human player (Sub-Class)

#ifndef HUMAN
#define HUMAN

#include "player.h"
#include "gameboard.h"

class human: public player {
    
    public:
    human();
    human(gameboard b);
    
    void MarkBoard(char row, int col, char c);
    char TakeTurn(char row, int col);
    bool CheckWin(gameboard b);
    void PrintTurn(char r, int c);
    
    ~human() {}
};

#endif