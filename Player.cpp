#include "Player.h"

int chessBoard[sizeBoard][sizeBoard];

Player :: Player()
{
    x = centerBoardX;
    y = centerBoardY;
}

Player :: ~Player()
{
}

bool Player :: inputPlayer()
{
    int xnew = (x - Left)/4;
    int ynew = (y - Top)/2;
    if(_kbhit())
    {
        char key = _getch();
        if((key == 75 || key == 'a' || key == 'A') && x > Left)
            x -= 4;
        else if((key == 77 || key == 'd' || key == 'D') && x < Right)
            x += 4;
        else if((key == 72 || key == 'w' || key == 'W') && y > Top)
            y -= 2;
        else if((key == 80 || key == 's' || key == 'S') && y < Bottom)
            y += 2;
        else if(key == 32)
        {
            int assignValue = 1;
            if(chessBoard[xnew][ynew] != assignValue && chessBoard[xnew][ynew] != -assignValue)
            {

                if(character == 'X')
                {
                    TextColor(ColorCode_Blue);
                    chessBoard[xnew][ynew] = assignValue;
                }
                else if(character == 'O')
                {
                    TextColor(ColorCode_Red);
                    chessBoard[xnew][ynew] = -assignValue;
                }
                cout << character;
                return true;
            }
            else
            {
                gotoXY(33, 42);
                cout << "Invalid move!";
                Sleep(700);
                gotoXY(32, 42);
                cout << "               ";
            }
        }
        else if(key == 60)
            play();
        else if(key == 27)
            exitGame();
    }
    return false;
}

void Player :: moving()
{
    gotoXY(x, y);
}
