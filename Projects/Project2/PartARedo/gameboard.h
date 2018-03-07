//Zachary Rust
//3/6/18
//Description: This class handles all operations relating to the game board

#ifndef GAMEBOARD
#define GAMEBOARD

#include <iostream>
#include <fstream>
using std::cout;
using std::ifstream;

class gameboard {
    
    private:
    vector<char> board_(100);
    vector<char> targ_board_(100);
    
    public:
    gameboard();
    
    char GetPos(int col, char row);
    
    ~gameboard() {}
};

#endif