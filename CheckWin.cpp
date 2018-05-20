#include "CheckWin.h"

bool checkWidth(int Board[sizeBoard][sizeBoard], int col, int row)
{
    int assignValue = Board[col][row];
    int col1 = col;
    while(Board[col1][row] == assignValue)
        col1++;
    col1--;
    if(col1 > 3 && col1 < sizeBoard) // Mang bat dau tu phan tu 0
    {
        if(Board[col1][row] == assignValue && Board[col1 - 1][row] == assignValue
            && Board[col1 - 2][row] == assignValue && Board[col1 - 3][row] == assignValue
            && Board[col1 - 4][row] == assignValue
            && ((Board[col1 + 1][row] != -assignValue) || (Board[col1 - 5][row] != -assignValue)))
            return true;
    }
    return false;
}

bool checkLength(int Board[sizeBoard][sizeBoard], int col, int row)
{
    int assignValue = Board[col][row];
    int row1 = row;
    while(Board[col][row1] == assignValue)
        row1++;
    row1--;
    if(row1 > 3 && row1 < sizeBoard)
    {
        if(Board[col][row] == assignValue && Board[col][row + 1] == assignValue
            && Board[col][row + 2] == assignValue && Board[col][row + 3] == assignValue
            && Board[col][row + 4] == assignValue
            && ((Board[col][row1 + 1] != -assignValue) || (Board[col][row1 - 5] != -assignValue)))
            return true;
    }
    return false;
}

bool checkDownDiagonal(int Board[sizeBoard][sizeBoard], int col, int row)
{
    int assignValue = Board[col][row];
    int row1 = row;
    int col1 = col;
    while(Board[col1][row1] == assignValue)
    {
        row1++;
        col1++;
    }
    row1--;
    col1--;
    if(Board[col1][row1] == assignValue && Board[col1 - 1][row1 - 1] == assignValue
           && Board[col1 - 2][row1 - 2] == assignValue && Board[col1 - 3][row1 - 3] == assignValue
           && Board[col1 - 4][row1 - 4] == assignValue
           && ((Board[col1 + 1][row1 + 1] != -assignValue) || (Board[col1 - 5][row1 - 5] != -assignValue)))
        return true;
    return false;
}

bool checkUpDiagonal(int Board[sizeBoard][sizeBoard], int col, int row)
{
    int assignValue = Board[col][row];
    int row1 = row;
    int col1 = col;
    while(Board[col1][row1] == assignValue)
    {
        row1--;
        col1++;
    }
    row1++;
    col1--;
    if(Board[col1][row1] == assignValue && Board[col1 - 1][row1 + 1] == assignValue
           && Board[col1 - 2][row1 + 2] == assignValue && Board[col1 - 3][row1 + 3] == assignValue
           && Board[col1 - 4][row1 + 4] == assignValue
           && ((Board[col1 + 1][row1 - 1] != -assignValue) || (Board[col1 - 5][row1 + 5] != -assignValue)))
        return true;
    return false;
}

//bool checkUpLeft(int Board[sizeBoard][sizeBoard], int col, int row)
//{
//    int assignValue = Board[col][row];
//    if(Board[col][row] == assignValue && Board[col + 1][row] == assignValue
//            && Board[col][row - 1] == assignValue && Board[col - 1][row - 1] == assignValue)
//           return true;
//    return false;
//}
//
//bool checkUpRight(int Board[sizeBoard][sizeBoard], int col, int row)
//{
//    int assignValue = Board[col][row];
//    if(Board[col][row] == assignValue && Board[col - 1][row] == assignValue
//            && Board[col - 1][row + 1] == assignValue && Board[col][row + 1] == assignValue)
//           return true;
//    return false;
//}
//
//bool checkDownLeft(int Board[sizeBoard][sizeBoard], int col, int row)
//{
//    int assignValue = Board[col][row];
//    if(Board[col][row] == assignValue && Board[col][row - 1] == assignValue
//            && Board[col + 1][row] == assignValue && Board[col + 1][row - 1] == assignValue)
//           return true;
//    return false;
//}
//
//bool checkDownRight(int Board[sizeBoard][sizeBoard], int col, int row)
//{
//    int assignValue = Board[col][row];
//    if(Board[col][row] == assignValue && Board[col][row - 1] == assignValue
//            && Board[col - 1][row] == assignValue && Board[col - 1][row - 1] == assignValue)
//           return true;
//    return false;
//}
bool checkWin(int Board[sizeBoard][sizeBoard])
{
    for(int row = 0; row < sizeBoard; row++)
    {
        for(int col = 0; col < sizeBoard; col++)
        {
            if(Board[col][row] == 1 || Board[col][row] == - 1)
            {
                if(checkWidth(Board, col, row))
                    return true;
                if(checkLength(Board, col, row))
                    return true;
                if(checkDownDiagonal(Board, col, row))
                    return true;
                if(checkUpDiagonal(Board, col, row))
                    return true;
//                if(checkUpLeft(Board, col, row))
//                    return true;
//                if(checkUpRight(Board, col, row))
//                    return true;
//                if(checkDownLeft(Board, col, row))
//                    return true;
//                if(checkDownRight(Board, col, row))
//                    return true;

            }
        }
    }
    return false;
}
