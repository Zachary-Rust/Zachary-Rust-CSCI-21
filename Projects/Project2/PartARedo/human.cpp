#include "human.h"

//Constructor
human::human()
{
    
}

void human::TakeTurn(gameboard b)
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
    status = b.GetPos(row, col);
    
    if (status == 'E')
    {
        cout << "Sorry, you have chosen an illegal move.\nPlease try again. (row column)\n";
    }
    else if (status == 'S')
    {
        cout << "You have hit a ship!\n";
        MarkBoard(row, col, 'H');
    }
    else
    {
        cout << "You have missed.\n";
        MarkBoard(row, col, 'M');
    }
    
    b.Print();
    Print();
}