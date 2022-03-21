#include <iostream>

using namespace std;
enum chessBoard {
    Empty = 0,
    King,
    Queen,
    Rook,
    Bishop,
    Knight,
    Pawn,
};

int main()
{
    Square chessBoard[0][0];
    chessBoard [0][0] = chessBoard[0][7] = Rook;
    chessBoard [7][0] = chessBoard[7][7] = Rook;

    return 0;
}