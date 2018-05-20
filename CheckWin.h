#ifndef CHECKWIN_H
#define CHECKWIN_H

#include <Console.h>
#include "Board.h"

bool checkWidth(int Board[sizeBoard][sizeBoard], int col, int row);
/*
    Kiểm tra điều kiện thắng hàng ngang
*/
bool checkLength(int Board[sizeBoard][sizeBoard], int col, int row);
/*
    Kiểm tra điều kiện thắng hàng dọc
*/
bool checkUpDiagonal(int Board[sizeBoard][sizeBoard], int col, int row);
/*
    Kiểm tra điều kiện thắng đường chéo lên
*/
bool checkDownDiagonal(int Board[sizeBoard][sizeBoard], int col, int row);
/*
    Kiểm tra điều kiện thắng đường chéo xuống
*/
bool checkWin(int Board[sizeBoard][sizeBoard]);
/*
    Kiểm tra điều kiện thắng thua
*/

//bool checkUpRight(int Board[sizeBoard][sizeBoard], int col, int row);
//bool checkUpLeft(int Board[sizeBoard][sizeBoard], int col, int row);
//bool checkDownLeft(int Board[sizeBoard][sizeBoard], int col, int row);
//bool checkDownRight(int Board[sizeBoard][sizeBoard], int col, int row);
//bool checkWin(int Board[sizeBoard][sizeBoard]);
#endif // CHECKWIN_H
