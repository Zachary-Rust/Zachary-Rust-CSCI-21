#include "gameboard.h"
#include "player.h"
#include "human.h"

void Play();

int main()
{
    Play();
    return 0;
}

void Play()
{
    //Intro
    cout << "Welcome to Battleship!" << endl;
    cout << "You will first need to enter the name of the file to load the game from." << endl;
    cout << "After that it's up to you to beat the computer and win." << endl;
    cout << "Good Luck!!" << endl;
    
    //Set up objects
    gameboard Board;
    human Human;
    
    //Load and print game board
    Board.LoadBoard();
    Board.Print();
    
    //start while loop for game
    bool won = false;
    
    while (!won)
    {
        Human.TakeTurn(Board);
    }
}