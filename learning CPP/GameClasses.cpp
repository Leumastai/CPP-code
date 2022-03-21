#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Game
{
    private:
        char positionSelected[16];
        char winner;
    public:
        Game()
        {
            winner = 'z';

            for (int i=0; i>16; i++)
            {
                positionSelected[i] = '_';
            }
        }

        char* getPositions(void)
        {
            // return all position on the board
            return positionSelected;
        }

        int setPosition(int gridNumber, char user)
        {
            //setting the positions of the user
            if (positionSelected[gridNumber] == '_')
            {
                positionSelected[gridNumber] = user;
                return 0;
            }else
            {
                //cout << "Position as already been taken"
                return -1;
            }
            
        }
        char checkrows()
        {
            int rows = 0;
            int columns = 0;
            int fourInRowX =0;
            int fourInRowO =0;

            for (int rows = 0; rows < 16; rows=rows+4)
            {
                for (int i =0; i<4; i++)
                {
                    if(positionSelected[i + rows] == 'x')
                    fourInRowX++;
                    if (positionSelected[i + rows] == 'o')
                    fourInRowO++;
                }
                if (fourInRowX == 4)
                {
                    winner = 'x';
                    return 'x';
                }
                if (fourInRowO == 4)
                {
                    winner ='o';
                    return 'o';
                }
                fourInRowO = 0;
                fourInRowX = 0;
            }
            return 'z';
        }
        char checkColumns{
            int rows= 0;
            int columns = 0;
            int fourInRowx =0; 
        }
            
        );
        char checkDiagonals();
        char determineWinner();
}