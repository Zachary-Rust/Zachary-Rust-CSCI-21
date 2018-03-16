#include "human.h"

//Constructor
human::human()
{
    
}

//Overload Constructor
//Input: Gameboard with ships marked on it
//Ouptup: n/a
human::human(gameboard b)
{
    board_ = b;
    cout << "RAN OVERLOAD CONSTRUCTOR" << endl;
}

bool human::TakeTurn()
{
    //Input variables
    char row = ' ';
    int col = 0;
    
    cout << "Where would you like to attack? (row column) (ex: A 1)\n";
    cin >> row;
    cin >> col;
    
    //Check variable for hit status
    char status = ' ';
    
    //Set status to hit status
    status = board_.GetPos(row, col);
    
    if (status == 'E')
    {
        cout << "Sorry, you have chosen an illegal move.\nPlease try again. (row column)\n";
    }
    else if (status == 'S')
    {
        cout << "You have hit a ship!\n";
        MarkBoard(row, col, 'H');
        board_.MarkBoard(row, col, 'H');
    }
    else
    {
        cout << "You have missed.\n";
        MarkBoard(row, col, 'M');
        board_.MarkBoard(row, col, 'M');
    }
    
    if (CheckWin(board_) == true)
    {
        cout << "Congradulations! You won." << endl;
        return true;
    }
    else
    {
        board_.Print();
        Print();
        return false;
    }
}