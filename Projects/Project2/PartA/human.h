//Zachary Rust
//3/8/18
//Description: This class handles all operations relating to the human player (Sub-Class)

#ifndef HUMAN
#define HUMAN

#include "player.h"
#include "gameboard.h"

class human: public player {
    private:
    gameboard board_;
    
    public:
    human();
    human(gameboard b);
    
    char TakeTurn(char row, int col);
    
    ~human() {}
};

#endif