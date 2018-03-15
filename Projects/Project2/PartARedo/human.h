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
    
    void TakeTurn(gameboard b);
    
    ~human() {}
};

#endif