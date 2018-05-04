//Zachary Rust
//3/8/18
//Description: This class handles all operations relating to the computer player (Sub-Class)

#ifndef COMPUTER_H
#define COMPUTER_H

#include "player.h"
#include "gameboard.h"
#include <cstdlib>
using namespace std;

class computer: public player {
    private:
    //Check if there is a queue
    bool q_;
    vector<int> choices_;
    
    public:
    //constructor
    computer();
    
    //overload constructor with board
    computer(gameboard b);
    
    //Take turn
    void TakeTurn(char &row, int &col);
    
    //Marks board based off an index
    void MarkIndex(int loc, char c);
    
    //Gets computers row and collumn choice based off an index
    void GetRC(char &row, int &col, int index);
    
    //Print results of turn
    void PrintTurn(char r, int c);
    
    ~computer() {};
};

#endif