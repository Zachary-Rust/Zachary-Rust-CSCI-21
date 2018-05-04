#include "gameboard.h"
#include "player.h"
#include "human.h"

#include <cctype>
#include <iostream>
using namespace std;

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
    
    bool loaded = false;
    string name = "";
    
    while (!loaded)
    {
        cout << "Enter board name" << endl;
        cin >> name;
        loaded = Board.LoadBoard(name);
    }
    
    human Human(Board);
    
    //Print game board
    Board.Print();
    
    //start while loop for game
    bool won = false;
    
    //Input variables
    char r = ' ';
    int c = 0;
    
    char result = ' ';
    
    while (!won)
    {
        cout << "Where would you like to attack? (row column) (ex: A 1)\n";
        cin >> r;
        cin >> c;
        
        if (true)
        {
            result = Human.TakeTurn(r,c);
            
            if (result == 'E')
            {
                cout << "Sorry, you have chosen an illegal move.\nPlease try again. (row column)\n";
            }
            else if (result == 'S')
            {
                cout << "You have hit a ship!\n";
            }
            else if (result == 'M')
            {
                cout << "You have missed.\n";
            }
            else if (result == 'H')
            {
                cout << "You already attacked there!" << endl;
            }
            else if (result == 'W')
            {
                cout << "Congradulations! You won." << endl;
                won = true;
            }
        }
    }
}