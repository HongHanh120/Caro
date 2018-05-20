#ifndef BOARD_H
#define BOARD_H
#define sizeBoard 19
#define widthFrame 45
#define lengthFrame 150

#include "Console.h"
#include "Rules.h"
#include <iostream>
using namespace std;

char drawCharacter(char character);
/*
    Vẽ kí tự để in bảng chơi
*/
void drawFrame(int x, int y, int length, int width);
/*
    Vẽ khung
*/
void drawBoard(int x, int y);
/*
    Vẽ ra bảng chơi
*/
void selectBoard(int x, int y, bool yes);
/*
    Vẽ bảng chọn để chọn menu hoặc Vẽ bảng để chỉ ra lượt người chơi
*/
#endif // BOARD_H
