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
        else if (result == 'W')
        {
            cout << "Congradulations! You won." << endl;
            won = true;
        }
    }
}

/*

__TEST REPORT__

OUTPUT:

Welcome to Battleship!
You will first need to enter the name of the file to load the game from.
After that it's up to you to beat the computer and win.
Good Luck!!
Enter board name
board.txt

Reference Board
  0 1 2 3 4 5 6 7 8 9 
A o S o o o o o o o o 
B o o o o o o o o o o 
C o o o o o o o o o o 
D o o o o o o o o o o 
E o o o o o o o o o o 
F o o o o o o o o o o 
G o o o o o o o o o o 
H o o o o o o o o o o 
I o o o o o o o o o o 
J S o o o o o o o o o 
Where would you like to attack? (row column) (ex: A 1)
a 0
ROW a COL 0

Reference Board
  0 1 2 3 4 5 6 7 8 9 
A M S o o o o o o o o 
B o o o o o o o o o o 
C o o o o o o o o o o 
D o o o o o o o o o o 
E o o o o o o o o o o 
F o o o o o o o o o o 
G o o o o o o o o o o 
H o o o o o o o o o o 
I o o o o o o o o o o 
J S o o o o o o o o o 

Player Board
  0 1 2 3 4 5 6 7 8 9 
A M o o o o o o o o o 
B o o o o o o o o o o 
C o o o o o o o o o o 
D o o o o o o o o o o 
E o o o o o o o o o o 
F o o o o o o o o o o 
G o o o o o o o o o o 
H o o o o o o o o o o 
I o o o o o o o o o o 
J o o o o o o o o o o 
You have missed.
Where would you like to attack? (row column) (ex: A 1)
a 1
ROW a COL 1

Reference Board
  0 1 2 3 4 5 6 7 8 9 
A M H o o o o o o o o 
B o o o o o o o o o o 
C o o o o o o o o o o 
D o o o o o o o o o o 
E o o o o o o o o o o 
F o o o o o o o o o o 
G o o o o o o o o o o 
H o o o o o o o o o o 
I o o o o o o o o o o 
J S o o o o o o o o o 

Player Board
  0 1 2 3 4 5 6 7 8 9 
A M H o o o o o o o o 
B o o o o o o o o o o 
C o o o o o o o o o o 
D o o o o o o o o o o 
E o o o o o o o o o o 
F o o o o o o o o o o 
G o o o o o o o o o o 
H o o o o o o o o o o 
I o o o o o o o o o o 
J o o o o o o o o o o 
You have hit a ship!
Where would you like to attack? (row column) (ex: A 1)
j 2
ROW j COL 2

Reference Board
  0 1 2 3 4 5 6 7 8 9 
A M H o o o o o o o o 
B o o o o o o o o o o 
C o o o o o o o o o o 
D o o o o o o o o o o 
E o o o o o o o o o o 
F o o o o o o o o o o 
G o o o o o o o o o o 
H o o o o o o o o o o 
I o o o o o o o o o o 
J S o M o o o o o o o 

Player Board
  0 1 2 3 4 5 6 7 8 9 
A M H o o o o o o o o 
B o o o o o o o o o o 
C o o o o o o o o o o 
D o o o o o o o o o o 
E o o o o o o o o o o 
F o o o o o o o o o o 
G o o o o o o o o o o 
H o o o o o o o o o o 
I o o o o o o o o o o 
J o o M o o o o o o o 
You have missed.
Where would you like to attack? (row column) (ex: A 1)
j 0
ROW j COL 0

Reference Board
  0 1 2 3 4 5 6 7 8 9 
A M H o o o o o o o o 
B o o o o o o o o o o 
C o o o o o o o o o o 
D o o o o o o o o o o 
E o o o o o o o o o o 
F o o o o o o o o o o 
G o o o o o o o o o o 
H o o o o o o o o o o 
I o o o o o o o o o o 
J H o M o o o o o o o 

Player Board
  0 1 2 3 4 5 6 7 8 9 
A M H o o o o o o o o 
B o o o o o o o o o o 
C o o o o o o o o o o 
D o o o o o o o o o o 
E o o o o o o o o o o 
F o o o o o o o o o o 
G o o o o o o o o o o 
H o o o o o o o o o o 
I o o o o o o o o o o 
J H o M o o o o o o o 
Congradulations! You won.

Input:

    board.txt
    a 0
    a 1
    j 2
    j 0
*/