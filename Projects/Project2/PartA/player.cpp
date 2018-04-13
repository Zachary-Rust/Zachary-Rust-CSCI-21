#include "player.h"

//constructor
player::player()
{
    //Set up tracking board
    for (int i = 0; i < 100; i++)
    {
        track_board_.push_back('o');
    }
}

//This function marks loacations on the tracking board as hits or misses
//Input: integer and character location on the board, character to mark board with
//Output: n/a
void player::MarkBoard(char row, int col, char c)
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

//This function prints the game board in the proper 10x10 format
//Input: n/a
//Output: n/a
void player::Print()
{
    //This variable is used to check when a new line is needed (after 10 chars)
    int n_line = 0;
    
    //This integer will cycle through the array of letters to be displayed on the sides of the rows
    char letters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int letter = 1;
    
    //First we print the first line of numbers to select collumns from
    cout << endl;
    
    cout << "Player Board" << endl;
    
    cout << "  ";
    for (int i = 0; i < 10; i++)
    {
        cout << i << ' ';
    }
    cout << endl;
    
    //Next we print the rows of ships and the Letters to select rows from
    cout << letters[0] << ' ';
    
    //For loop to iterate through entire board vector
    for (int i = 0; i < 100; i++)
    {
        //Check if new line is needed
        if (n_line < 10)
        {
            cout << track_board_[i] << ' ';
            n_line++;
        }
        else
        {
            cout << endl << letters[letter] << ' ' << track_board_[i] << ' ';
            //ASK WHY THIS NEEDS TO BE 1 AND NOT 0
            //resets the new line variable
            n_line = 1;
            
            //Cycles to next letter
            letter++;
        }
    }
    cout << endl;
}

bool player::CheckWin(gameboard b)
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