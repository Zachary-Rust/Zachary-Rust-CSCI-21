#include "gameboard.h"

//Constructor
//Input: n/a
//Ouptut: n/a
gameboard::gameboard()
{
    for (int i = 0; i < 100; i ++)
    {
        board_.push_back('o');
    }
}

//This function prompts the user to enter the name of the game board, the loads
//the board
//Input: n/a
//Ouptu: n/a
bool gameboard::LoadBoard(string filename)
{
    //Clear board from constructor
    board_.clear();
    
    //Input stream
    ifstream inFS;
    
    //Attempt to load board
    inFS.open(filename.c_str());
    
    if (!inFS.is_open())
    {
        return false;
    }
    
    //Now set gameboard vector according to the input file
    //iteration variable
    int i = 0;
    
    //Used for getting input from file before pushing to end of vector
    char temp = ' ';
    
    //Loads the 10x10 board into board and sets the target board to null spaces
    //to be later marked as hits or misses
    for (i = 0; i < 100; i++)
    {
        inFS >> temp;
        cout << temp << endl;
        board_.push_back(temp);
    }
    
    return true;
}

//This function is used to check the status of a board position (is a ship there?)
//Input: int col - the collumn to check
//       char row - the row to check
//Output: char - S for ship, o for water
char gameboard::GetPos(char row, int col)
{
    if (col < 0 || col > 9)
    {
        return 'E';
    }
    else if (row == 'A' || row == 'a')
    {
        return board_.at(0 + col);
    }
    else if (row == 'B' || row == 'b')
    {
        return board_.at(10 + col);
    }
    else if (row == 'C' || row == 'c')
    {
        return board_.at(20 + col);
    }
    else if (row == 'D' || row == 'd')
    {
        return board_.at(30 + col);
    }
    else if (row == 'E' || row == 'e')
    {
        return board_.at(40 + col);
    }
    else if (row == 'F' || row == 'f')
    {
        return board_.at(50 + col);
    }
    else if (row == 'G' || row == 'g')
    {
        return board_.at(60 + col);
    }
    else if (row == 'H' || row == 'h')
    {
        return board_.at(70 + col);
    }
    else if (row == 'I' || row == 'i')
    {
        return board_.at(80 + col);
    }
    else if (row == 'J' || row == 'j')
    {
        return board_.at(90 + col);
    }
    else
    {
        return 'E';
    }
}

//This funcitons returns the character on the board at a certain index
//Input: The index
//Output: Char at the index
char gameboard::GetIndex(int num)
{
    return board_.at(num);
}
//This function prints the game board in the proper 10x10 format
//Input: n/a
//Output: n/a
void gameboard::Print()
{
    //This variable is used to check when a new line is needed (after 10 chars)
    int n_line = 0;
    
    //This integer will cycle through the array of letters to be displayed on the sides of the rows
    char letters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int letter = 1;
    
    //First we print the first line of numbers to select collumns from
    cout << endl;
    
    cout << "Reference Board" << endl;
    
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
            cout << board_[i] << ' ';
            n_line++;
        }
        else
        {
            cout << endl << letters[letter] << ' ' << board_[i] << ' ';
            //ASK WHY THIS NEEDS TO BE 1 AND NOT 0
            //resets the new line variable
            n_line = 1;
            
            //Cycles to next letter
            letter++;
        }
    }
    cout << endl;
}

//This function marks loacations on the tracking board as hits or misses
//Input: integer and character location on the board, character to mark board with
//Output: n/a
void gameboard::MarkBoard(char row, int col, char c)
{
    
    if (row == 'A' || row == 'a')
    {
        board_.at(0 + col) = c;
    }
    else if (row == 'B' || row == 'b')
    {
        board_.at(10 + col) = c;
    }
    else if (row == 'C' || row == 'c')
    {
        board_.at(20 + col) = c;
    }
    else if (row == 'D' || row == 'd')
    {
        board_.at(30 + col) = c;
    }
    else if (row == 'E' || row == 'e')
    {
        board_.at(40 + col) = c;
    }
    else if (row == 'F' || row == 'f')
    {
        board_.at(50 + col) = c;
    }
    else if (row == 'G' || row == 'g')
    {
        board_.at(60 + col) = c;
    }
    else if (row == 'H' || row == 'h')
    {
        board_.at(70 + col) = c;
    }
    else if (row == 'I' || row == 'i')
    {
        board_.at(80 + col) = c;
    }
    else if (row == 'J' || row == 'j')
    {
        board_.at(90 + col) = c;
    }
}