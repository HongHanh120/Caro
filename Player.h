#ifndef PLAYER_H
#define PLAYER_H

#include <conio.h>
#include "Console.h"
#include "Rules.h"

#define Left 6
#define Right 78
#define Top 3
#define Bottom 39
#define centerBoardX 38
#define centerBoardY 21

class Player
{
    public:
        Player();
        ~ Player();
        bool inputPlayer();
        /*
            Vẽ kí tự X hoặc O lên bảng chơi
        */
        void moving();
        /*
            Người chơi di chuyển
        */
        void drawXO(char c)
        {
            character = c;
        }
    private:
        int x;
        int y;
        char character;
};



#endif // PLAYER_H
