#include <iostream>
#include <fstream>

using namespace std;

void Intro();
void LoadBoard(int &size);
void PrintBoard(string **b, int size);

int main()
{
    //board parallel arrays
    int board_size = 0;
    
    Intro();
    LoadBoard(board_size);
    cout << "Board Size: " << board_size << endl;
    
    //Now create the game board using two parallel string arrays
    string **board;
    
    //Create arrays for rows and collumns
    board = new string *[board_size];
    
    for (int i = 0; i < board_size; i++)
    {
        board[i] = new string[1];
    }
    
    //Set up board with proper characters
    
    
    //Now print the board
    PrintBoard(board, board_size);
    // delete(rows);
    // delete(cols);
    return 0;
}






//This function outputs the text introducing the player to the game
//Input: n/a
//Output: n/a
void Intro()
{
    cout << "Welcome to Battleship!" << endl;
    cout << "You will first need to enter the name of the file to load the game from." << endl;
    cout << "After that it's up to you to beat the computer and win." << endl;
    cout << "Good Luck!!" << endl;
}

//This function prompts the user for the file to load the game from
//Input: pass by referenced integers representing the numbers of rows and collumns
//Output: n/a
void LoadBoard(int &size)
{
    //Create file object
    ifstream inFS;
    string filename = "";
    
    //bool to be set to true when file is correctly loaded
    bool game_loaded_ = false;
    
    //Prompt user to enter file name
    cout << "Enter the name of the file to load the game from... ";
    cin >> filename;
    filename += ".txt";
    
    //This loop will run until the right file is successfuly loaded
    while (!game_loaded_)
    {
        //Open file
        inFS.open(filename);
        
        //Check to make sure file is opened before continuing
        if (!inFS.is_open())
        {
            cout << "Incorrect file name.\nPlease try again...";
            cin >> filename;
            filename += ".txt";
        }
        else
        {
            //Set condition to exit loop
            game_loaded_ = true;
            cout << "Board loaded!" << endl;
        }
        
        //Now we send the board to the inputs
        inFS >> size;
    }
}

//This function prints the game board
//Input: The arrays for the rows and collumns, and the number of rows and collumns
//Ouptut: n/a
void PrintBoard(string **b, int size)
{
    cout << "Printing Board" << endl;
    
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            cout << b[r][c];
        }
        cout << endl;
    }
}