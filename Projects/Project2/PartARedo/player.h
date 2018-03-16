//Zachary Rust
//3/8/18
//Description: This class handles all operations relating to the player overall (Base Class)

#ifndef PLAYER
#define PLAYER

#include <vector>
#include <iostream>
#include "gameboard.h"
using std::cout;
using std::cin;
using std::vector;

using namespace std;
class player {
    
    protected:
    vector<char>track_board_;
    
    public:
    player();
    
    void MarkBoard(char row, int col, char c);
    bool CheckWin(gameboard b);
    void Print();
    
    virtual ~player() {}
};

#endif