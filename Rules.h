#ifndef LOGICGAME_H
#define LOGICGAME_H

#include "Console.h"
#include "Board.h"
#include "Display.h"
#include "Windows.h"
#include "Player.h"
#include "CheckWin.h"
#include "Rules.h"

extern int chessBoard[sizeBoard][sizeBoard];

void resetBoard();
/*
    Khởi tạo toàn bộ giá trị phần tử của mảng 2 chiều = 0
*/
void play();
/*
    Kiểm soát toàn bộ quá trình chơi
*/
void run();
/*
    Chạy hàm tương ứng sau khi chọn Menu
*/
void exitGame();
/*
    Thoát khỏi trò chơi
*/

#endif // LOGICGAME_H


