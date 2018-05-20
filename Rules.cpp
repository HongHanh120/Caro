#include "Rules.h"

void resetBoard()
{
    for(int row = 0; row < sizeBoard; row++)
        for(int col = 0; col < sizeBoard; col++)
            chessBoard[col][row] = 0;
}

void play()
{
    clrscr();
    drawFrame(0, 0, lengthFrame, widthFrame);
    display();
    resetBoard();
    Player Player1, Player2;
    Player1.drawXO('X');
    Player2.drawXO('O');
    bool isPlaying = true;
    while(isPlaying)
    {
        TextColor(default_ColorCode);
        selectBoard(90, 19, true);
        while(!Player1.inputPlayer())
        {
            Player1.moving();
        }
        if(checkWin(chessBoard))
        {
            gotoXY(110, 15);
            cout << "X WIN!";
            Sleep(2000);
            int Option = endFrame(50, 15);
            if(Option == 1)
                return play();
            else if(Option == 2)
                return exitGame();
        }
        selectBoard(90, 19, false);
        TextColor(default_ColorCode);
        selectBoard(115, 19, true);
        while(!Player2.inputPlayer())
        {
            Player2.moving();
        }
        if(checkWin(chessBoard))
        {
            gotoXY(110, 15);
            cout << "O WIN!";
            Sleep(2000);
            int Option = endFrame(50, 15);
            if(Option == 1)
                return play();
            else if(Option == 2)
                return exitGame();
        }
         selectBoard(115, 19, false);
    }
}

void run()
{
    Sleep(2000);
    clrscr();
    int Option = beginFrame(50, 12);
    if(Option == 1)
        return play();
    else if(Option == 2)
        return readDirect();
    else if(Option == 3)
        return exitGame();
}

void exitGame()
{
    exit(0);
}
