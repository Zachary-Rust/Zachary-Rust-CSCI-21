//Zachary Rust
//3/6/18
//Description: This class handles all operations relating to the game board

#ifndef GAMEBOARD
#define GAMEBOARD

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::ifstream;
using std::vector;

using namespace std;

class gameboard {
    
    private:
    vector<char> board_;
    
    public:
    gameboard();
    
    void LoadBoard();
    char GetPos(char row, int col);
    void Print();
    
    ~gameboard() {}
};

#endif