#include "computer.h"

computer::computer()
{
    srand(time(NULL));
}

computer::computer(gameboard b)
{
    board_ = b;
}

void computer::TakeTurn(char &row, int &col)
{
    //Pick random number on board
    int choice = 0;
    
    //Check not to repeat a choice
    bool good_choice = false;
    
    while (!good_choice)
    {
        choice = rand() % 100;
        
        good_choice = true;
        
        //Check to see if choice has already been chosen
        for (int i = 0; i < choices_.size(); i++)
        {
            if (choice == choices_.at(i))
            {
                good_choice = false;
            }
        }
    }
    
    //Adds choice to choice list to not repeat
    choices_.push_back(choice);
    
    //Character representing location of choice
    char result = board_.GetIndex(choice);
    
    if (result == 'S')
    {
        //Mark Tracking Board
        MarkIndex(choice, 'H');
        //board_.MarkBoard(row, col, 'H');
    }
    else
    {
        //Mark Tracking Board
        MarkIndex(choice, 'M');
        //board_.MarkBoard(row, col, 'M');
    }
    PrintTrack();
    GetRC(row, col, choice);
    //PrintBoard();
}

void computer::PrintTurn(char r, int c)
{
    cout << endl << "Computer chose row: " << r << ", collumn: " << c << "." << endl;
}

//This function marks locations on the tracking board as hits or misses
//Input: integer location on the board, character to mark board with
//Output: n/a
void computer::MarkIndex(int loc, char c)
{
    track_board_.at(loc) = c;
}

void computer::GetRC(char &row, int &col, int index)
{
    stringstream ss;
    string temp;
        
    ss << index;
    ss >> temp;
    
    if (temp.length() == 1)
    {
        row = 'A';
        col = index;
    }
    else
    {
        if (temp.at(0) == '1')
        {
            row = 'B';
        }
        else if (temp.at(0) == '2')
        {
            row = 'C';
        }
        else if (temp.at(0) == '3')
        {
            row = 'D';
        }
        else if (temp.at(0) == '4')
        {
            row = 'E';
        }
        else if (temp.at(0) == '5')
        {
            row = 'F';
        }
        else if (temp.at(0) == '6')
        {
            row = 'G';
        }
        else if (temp.at(0) == '7')
        {
            row = 'H';
        }
        else if (temp.at(0) == '8')
        {
            row = 'I';
        }
        else if (temp.at(0) == '9')
        {
            row = 'J';
        }
        
        ss.clear();
        ss << temp.at(1);
        ss >> col;
    }
}