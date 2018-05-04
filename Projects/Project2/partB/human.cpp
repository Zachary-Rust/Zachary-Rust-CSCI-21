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
    
    PrintTurn(row,col);
    
    return ret;
}

void human::PrintTurn(char r, int c)
{
    cout << endl << "Player chose row: " << r << ", collumn: " << c << "." << endl;
}

bool human::CheckWin(gameboard b)
{
    for (int i = 0; i < 100; i++)
    {
        if (b.GetIndex(i) == 'S')
        {
            return false;
        }
    }
    
    return true;
}

//This function marks loacations on the tracking board as hits or misses
//Input: integer and character location on the board, character to mark board with
//Output: n/a
void human::MarkBoard(char row, int col, char c)
{
    
    if (row == 'A' || row == 'a')
    {
        track_board_.at(0 + col) = c;
    }
    else if (row == 'B' || row == 'b')
    {
        track_board_.at(10 + col) = c;
    }
    else if (row == 'C' || row == 'c')
    {
        track_board_.at(20 + col) = c;
    }
    else if (row == 'D' || row == 'd')
    {
        track_board_.at(30 + col) = c;
    }
    else if (row == 'E' || row == 'e')
    {
        track_board_.at(40 + col) = c;
    }
    else if (row == 'F' || row == 'f')
    {
        track_board_.at(50 + col) = c;
    }
    else if (row == 'G' || row == 'g')
    {
        track_board_.at(60 + col) = c;
    }
    else if (row == 'H' || row == 'h')
    {
        track_board_.at(70 + col) = c;
    }
    else if (row == 'I' || row == 'i')
    {
        track_board_.at(80 + col) = c;
    }
    else if (row == 'J' || row == 'j')
    {
        track_board_.at(90 + col) = c;
    }
}
