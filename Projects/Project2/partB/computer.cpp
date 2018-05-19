#include "computer.h"

computer::computer()
{
    q_up = false;
    srand(time(0));
}

computer::computer(gameboard b)
{
    board_ = b;
    q_up = false;
    srand(time(0));
}

void computer::TakeTurn(char &row, int &col, char &r)
{
    //Pick random number on board
    int choice = 0;
    
    cout << "Queue empty? " << turns.empty() << endl;
    
    //Check not to repeat a choice
    bool good_choice = false;
        
    if (turns.empty())
    {
        //Runs until a new choice is found
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
    }
    else
    {
        //Runs until a new choice is found
        while (!good_choice)
        {
            if (turns.empty() == false)
            {
                choice = turns.front();
            }
            else
            {
                choice = rand() % 100;
            }
            
            good_choice = true;
            
            //Check to see if choice has already been chosen
            for (int i = 0; i < choices_.size(); i++)
            {
                if (choice == choices_.at(i))
                {
                    good_choice = false;
                    turns.pop();
                }
            }
        }
        
        turns.pop();
        cout << "QUEUE SIZE = " << turns.size() << endl;
    }
    
    //Adds choice to choice list to not repeat
    choices_.push_back(choice);
    
    //Character representing location of choice
    char result = board_.GetIndex(choice);
    
    if (result == 'S')
    {
        //Mark Tracking Board
        MarkIndex(choice, 'H');
        r = 'H';
        
        //Create the queue
        if (choice - 10 >= 0)
        {
            turns.push(choice - 10);
        }
        if (choice + 1 <= 99)
        {
            turns.push(choice + 1);
        }
        if (choice + 10 <= 99)
        {
            turns.push(choice + 10);
        }
        if (choice - 1 >= 0)
        {
            turns.push(choice - 1);
        }
        
        //Mark Reference Board
        board_.MarkBoard(row, col, 'H');
    }
    else
    {
        //Mark Tracking Board
        MarkIndex(choice, 'M');
        r = 'M';
        
        //Mark Reference Board
        board_.MarkBoard(row, col, 'M');
    }
    PrintTrack();
    GetRC(row, col, choice);
    //PrintBoard();
    
    if (CheckWin())
    {
        r = 'W';
    }
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

bool computer::CheckWin()
{
    for (int i = 0; i < 100; i++)
    {
        if (board_.GetIndex(i) == 'S')
        {
            return false;
        }
    }
    
    return true;
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