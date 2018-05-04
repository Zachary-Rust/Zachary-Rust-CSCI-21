#include "gameboard.h"
#include "player.h"
#include "human.h"
#include "computer.h"

#include <cctype>
#include <iostream>
#include <cstdlib>
using namespace std;

void Border();
void Play(string p_board, string c_board, string turn = "r");
int Random();

int main(int argc, char* argv[])
{
    //Check to see if first player will be random
    if (argc == 3)
    {
        //Set randomness for who goes first
        srand(time(0));
        
        Play(argv[1], argv[2]);
    }
    else if (argc == 4)
    {
        Play(argv[1], argv[2], argv[3]);
    }
    else
    {
        cout << "Please enter the correct cmd arguments." << endl;
    }
    
    return 0;
}

void Play(string p_board, string c_board, string turn)
{
    //Intro
    cout << "Welcome to Battleship!" << endl;
    cout << "You will first need to enter the name of the file to load the game from." << endl;
    cout << "After that it's up to you to beat the computer and win." << endl;
    cout << "Good Luck!!" << endl;
    
    //Set up objects and load board
    gameboard P_Board;
    gameboard C_Board;
    
    //Load player board
    P_Board.LoadBoard(p_board);
    C_Board.LoadBoard(c_board);
    
    //Create Player Objects
    human Human(C_Board);
    computer Computer(P_Board);
    
    //start while loop for game
    bool won = false;
    
    //Input variables
    char r = ' ';
    int c = 0;
    
    //computer choices
    char c_r = 'P';
    int c_c = 0;
    
    //Player turn result
    char result = ' ';
    
    //Determine who goes first
    bool p_first = false;
    
    if (turn == "HUMAN" || turn == "COMPUTER")
    {
        if ( turn == "HUMAN")
        {
            p_first = true;
        }
        else
        {
            p_first = false;
        }
    }
    else
    {
        int r = Random();
        
        if (r == 1)
        {
            p_first = true;
        }
        else
        {
            p_first = false;
        }
    }
    
    //Copmuter goes first or player goes first
    if (p_first == false)
    {
        Computer.TakeTurn(c_r, c_c);
    }
    
    while (!won)
    {
        //Player Turn
        //Human.PrintBoard();
        Human.PrintTrack();
        
        cout << "Where would you like to attack? (row column) (ex: A 1)\n";
        cin >> r;
        cin >> c;
        
        result = Human.TakeTurn(r,c);
        cout << endl;
        
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
        
        //Computer Turn
        Border();
        Computer.TakeTurn(c_r, c_c);
        cout << endl << "Computer chose row: " << c_r << ", collumn: " << c_c << "." << endl;
        Border();
    }
}

int Random()
{
    return rand() % 2;
}

void Border()
{
    for (int i = 0; i < 15; i++)
    {
        cout << '-';
    }
    cout << endl;
}