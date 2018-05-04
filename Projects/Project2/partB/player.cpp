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

//This function prints the game board in the proper 10x10 format
//Input: n/a
//Output: n/a
void player::PrintTrack()
{
    //This variable is used to check when a new line is needed (after 10 chars)
    int n_line = 0;
    
    //This integer will cycle through the array of letters to be displayed on the sides of the rows
    char letters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int letter = 1;
    
    //First we print the first line of numbers to select collumns from
    cout << endl;
    
    cout << "Tracking Board" << endl;
    
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

void player::PrintBoard()
{
    board_.Print();
}