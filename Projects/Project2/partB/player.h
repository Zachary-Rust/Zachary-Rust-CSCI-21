//Zachary Rust
//3/8/18
//Description: This class handles all operations relating to the player overall (Base Class)

#ifndef PLAYER
#define PLAYER

#include <vector>
#include <iostream>
#include <sstream>
#include "gameboard.h"
using std::cout;
using std::cin;
using std::vector;

using namespace std;
class player {
    
    protected:
    vector<char>track_board_;
    gameboard board_;
    
    public:
    player();
    
    void PrintTrack();
    void PrintBoard();
    
    virtual ~player() {}
};

#endif