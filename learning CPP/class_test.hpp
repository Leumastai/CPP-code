#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class GameBoard
{
    private:
        char space[4][4];
    public:GameBoard(); //Initialize GameBoard class constructor
        void setGameSpace(int row, int col, char value);
        char getGameSpace(int row, int col);
        void printInfo();
        int checkGame();
};


GameBoard::GameBoard()
{
    //Setting initial value for gameboard
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            space[i][j] = '-';
        }
        
    }
    
}

void GameBoard::setGameSpace(int row, int col, char value)
{
    space[row][col] = value;
}

char GameBoard::getGameSpace(int row, int col)
{
    return space[row][col];
}

void GameBoard::printInfo()
{
    cout << setw(5);
    cout << '\n';
    int count = 4;
    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < count; j++)
        {
            /* code */
            cout << space[i][j] << endl;
        }
        cout <<'\n';
    }
    
}

int GameBoard::checkGame()
{
    int count = 4;
    int vcount = 0;
    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < count; j++)
        {
            /* code */
            if (space[i][j] == 'x')
            {
                vcount++;
            }
        }    
        
        if (vcount == 4)
        {
            return 1;
        }  
    }
    
    return 0;
}