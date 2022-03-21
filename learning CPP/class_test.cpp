#include "class_test.hpp"

int main()
{
    GameBoard game1;
    game1.setGameSpace(0, 0, 't');
    game1.setGameSpace(0, 1, 'y');
    game1.setGameSpace(0, 2, 'x');
    game1.setGameSpace(0, 3, 'x');
    game1.setGameSpace(1, 0, 'x');
    game1.setGameSpace(1, 1, 'x');
    game1.setGameSpace(1, 2, 'y');
    game1.setGameSpace(1, 3, 'r');
    game1.setGameSpace(2, 0, 'g');
    game1.setGameSpace(2, 1, 'r');
    game1.setGameSpace(2, 2, 'e');
    game1.setGameSpace(2, 3, 'x');
    game1.setGameSpace(3, 0, 'x');
    game1.setGameSpace(3, 1, 'x');
    game1.setGameSpace(3, 2, 'x');
    game1.setGameSpace(3, 3, 'x');
    
    cout << game1.getGameSpace(3,1);
    if (game1.checkGame() == 1)
    {
        cout << "X is present in the rows";
    } else
    {
        cout << "Sorry man x in not present in the row";
    }

    game1.printInfo();
    
    //game1.checkGame();
    return 0;
}