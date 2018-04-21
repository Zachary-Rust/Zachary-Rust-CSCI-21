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
}

//Human Takes Turn
//Input: n/a
//Output: bool T if ship is hit, F if missed
char human::TakeTurn(char row, int col)
{
    //Check variable for hit status
    char status = ' ';
    char ret = ' ';
    
    cout << "ROW " << row << " COL " << col << endl;
    //Set status to hit status
    status = board_.GetPos(row, col);
    
    if (status == 'E')
    {
        ret = 'E';
    }
    else if (status == 'S')
    {
        MarkBoard(row, col, 'H');
        board_.MarkBoard(row, col, 'H');
        ret = 'S';
    }
    else if (status == 'H')
    {
        ret = 'H';
    }
    else
    {
        MarkBoard(row, col, 'M');
        board_.MarkBoard(row, col, 'M');
        ret = 'M';
    }
    
    if (CheckWin(board_) == true)
    {
        ret = 'W';
    }
    
    board_.Print();
    Print();
    
    return ret;
}