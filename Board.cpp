#include "Board.h"

char drawCharacter(char character)
{
    return character;
}

void drawFrame(int x, int y, int length, int width)
{
    char square = 219;
    for(int row = y; row < width + y; row++)
    {
        for(int col = x; col < length + x; col++)
        {
            if(row == y || row == width - 1 + y)
            {
                gotoXY(col, row);
                cout << drawCharacter(square);
            }
            else if(col == x || col == x + 1 || col == length - 2 + x|| col == length - 1 + x)
            {
                gotoXY(col, row);
                cout << drawCharacter(square);
            }
        }
    }
}

void drawBoard(int x, int y)
{
    TextColor(ColorCode_White);
    for(int row = y ; row <= sizeBoard * 2 + y; row++)
    {
        if(row == y)
        {
            for(int col = x; col <= sizeBoard * 4 + x; col++)
            {
                if(col == x)
                {
                    gotoXY(col, row);
                    cout << drawCharacter(201); // leftTopCorner = 201
                }
                else if(col == sizeBoard * 4 + x)
                {
                    gotoXY(col, row);
                    cout << drawCharacter(187); // rightTopCorner = 187
                }
                else
                {
                    if(col % 4 == 0)
                    {
                        gotoXY(col, row);
                        cout << drawCharacter(209); // upT = 209
                    }
                    else
                    {
                        gotoXY(col, row);
                        cout << drawCharacter(205); // twoLineCross = 205
                    }
                }
            }
        }
        else if(row == sizeBoard * 2 + y)
        {
            for(int col = x; col <= sizeBoard * 4 + x; col++)
            {
                if(col == x)
                {
                    gotoXY(col, row);
                    cout << drawCharacter(200); // leftBotCorner = 200
                }
                else if(col == sizeBoard * 4 + x)
                {
                    gotoXY(col, row);
                    cout << drawCharacter(188); // rightBotCorner = 188
                }
                else
                {
                    if(col % 4 == 0)
                    {
                        gotoXY(col, row);
                        cout << drawCharacter(207); // downT = 207
                    }
                    else
                    {
                        gotoXY(col, row);
                        cout << drawCharacter(205); // twoLineCross = 205
                    }
                }
            }
        }
        else if(row % 2 == 0)
        {
            for(int col = x; col <= sizeBoard * 4 + x; col++)
            {
                if(col == x)
                {
                    gotoXY(col, row);
                    cout << drawCharacter(199); // leftT = 199
                }
                else if(col == sizeBoard * 4 + x)
                {
                    gotoXY(col, row);
                    cout << drawCharacter(182); // rightT = 182
                }
                else if(col % 4 == 0)
                {
                    gotoXY(col, row);
                    cout << drawCharacter(197); // cross = 197
                }
                else
                {
                    gotoXY(col, row);
                    cout << drawCharacter(196); // oneLineCross = 196
                }
            }
        }
        else
        {
            for(int col = x; col <= sizeBoard * 4 + x; col++)
            {
                if(col == x || col == sizeBoard * 4 + x)
                {
                    gotoXY(col, row);
                    cout << drawCharacter(186); //twoLineStraight = 186
                }
                else if(col % 4 == 0)
                {
                    gotoXY(col, row);
                    cout << drawCharacter(179); // oneLineStraight = 179
                }
                else
                {
                    gotoXY(col, row);
                    cout << drawCharacter(32); // space = 32
                }
            }
        }
    }
    TextColor(default_ColorCode);
}

void selectBoard(int x, int y, bool select)
{
    char leftTopCorner    =    201;
    char rightTopCorner   =    187;
    char leftBotCorner    =    200;
    char rightBotCorner   =    188;
    char twoLineCross     =    205;
    char twoLineStraight  =    186;
    char space            =    32;
    TextColor(ColorCode_Yellow);
    if(!select)
    {
        leftTopCorner = rightTopCorner
        = leftBotCorner = rightBotCorner
        = twoLineCross = twoLineStraight
        = space;
    }
    for(int row = y; row <= y + 2; row++)
    {
        for(int col = x; col <= x + 20; col++)
        {
            if(row == y && col == x)
            {
                gotoXY(col, row);
                cout << drawCharacter(leftTopCorner);
            }
            else if(row == y && col == x + 20)
            {
                gotoXY(col, row);
                cout << drawCharacter(rightTopCorner);
            }
            else if(row == y + 2 && col == x)
            {
                gotoXY(col, row);
                cout << drawCharacter(leftBotCorner);
            }
            else if(row == y + 2 && col == x + 20)
            {
                gotoXY(col, row);
                cout << drawCharacter(rightBotCorner);
            }
            else if(row == y || row == y + 2)
            {
                gotoXY(col, row);
                cout << drawCharacter(twoLineCross);
            }
            else if(col == x || col == x + 20)
            {
                gotoXY(col, row);
                cout << drawCharacter(twoLineStraight);
            }
        }
    }
    TextColor(default_ColorCode);
}
