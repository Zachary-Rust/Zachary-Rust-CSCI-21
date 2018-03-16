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
    
    //Set up objects and load board
    gameboard Board;
    Board.LoadBoard();
    human Human(Board);
    
    //Print game board
    Board.Print();
    
    //start while loop for game
    bool won = false;
    
    while (!won)
    {
        if (Human.TakeTurn())
        {
            won = true;
        }
    }
}