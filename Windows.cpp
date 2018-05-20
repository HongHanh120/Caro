#include "Windows.h"

int beginFrame(int x, int y)
{
    clrscr();
    drawFrame(0, 0, lengthFrame, widthFrame);
    drawFrame(x, y, 50, 20);
    string str[3] = {"Play", "Direct", "Exit"};
    int distance = 5;
    for(int i = 0; i < 3; i++)
    {
        gotoXY(x + 23, y + distance);
        cout << str[i];
        distance += 4;
    }
    int xnew = x + 15;
    int ynew = y + 4;
    distance = 0;
    selectBoard(xnew, ynew, true);
    while(1)
    {
        if(_kbhit())
        {
            char key = _getch();
            if((key == 72) && (distance > 0))
            {
                selectBoard(xnew, ynew + distance, false);
                distance -= 4;
                selectBoard(xnew, ynew + distance, true);
            }
            else if((key == 80) && (distance < 8))
            {
                selectBoard(xnew, ynew + distance, false);
                distance += 4;
                selectBoard(xnew, ynew + distance, true);
            }
            else if(key == 13)
            {
                if(distance == 0)
                    return 1;
                else if(distance == 4)
                    return 2;
                else if(distance == 8)
                    return 3;
            }
        }
    }
}

int endFrame(int x, int y)
{
    TextColor(7);
    clrscr();
    drawFrame(0, 0, lengthFrame, widthFrame);
    drawFrame(x, y, 50, 15);
    string str[2] = {"Play Again", "Exit"};
    int distance = 5;
    for(int i = 0; i < 2; i++)
    {
        gotoXY(x + 21, y + distance);
        cout << str[i];
        distance += 4;
    }
    int xnew = x + 15;
    int ynew = y + 4;
    distance = 0;
    selectBoard(xnew, ynew, true);
    while(1)
    {
        if(_kbhit())
        {
            char key = _getch();
            if((key == 72) && (distance > 0))
            {
                selectBoard(xnew, ynew + distance, false);
                distance -= 4;
                selectBoard(xnew, ynew + distance, true);
            }
            else if((key == 80) && (distance < 4))
            {
                selectBoard(xnew, ynew + distance, false);
                distance += 4;
                selectBoard(xnew, ynew + distance, true);
            }
            else if(key == 13)
            {
                if(distance == 0)
                    return 1;
                else if(distance == 4)
                    return 2;
            }
        }
    }
}
