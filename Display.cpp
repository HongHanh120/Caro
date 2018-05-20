#include "Display.h"
void drawGraphics()
{
    drawFrame(0, 0, 150, 45);
    TextColor(ColorCode_Blue);
    int x = 35;
    int y = 12, count = 0;
    gotoXY(x, y + count); count++;
    cout << "      cccccccccccccccc                                    oooooooooooooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "    cccccccccccccccccccc                                oooooooooooooooooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccccccccccccccccccccc                            oooooooooooooooooooooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc            cccccc       rrrrrrrrrrrrrrrr     oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc            cccccc       rrrrrr          rr   oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc                 aaaaaaa rrrrrr           rr  oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc               aaa aaaaa rrrrrr            rr oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc             aaa   aaaaa rrrrrr           rr  oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc           aaa     aaaaa rrrrrr          rr   oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc         aaaaaaaaaaaaaaa rrrrrrrrrrrrrrrr     oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc       aaaaaaaaaaaaaaaaa rrrrrrrrrrr          oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc     aaa           aaaaa rrrrrr    rrr        oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc   aaa             aaaaa rrrrrr      rrr      oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc aaa        cccccc       rrrrrr        rrr    oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccc            cccccc       rrrrrr          rrr  oooooo            oooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "  cccccccccccccccccccccccc                            oooooooooooooooooooooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "    cccccccccccccccccccc                                oooooooooooooooooooo" << endl; Sleep(50);
    gotoXY(x, y + count); count++;
    cout << "      cccccccccccccccc                                    oooooooooooooooo" << endl;
    TextColor(7);
}

void readDirect()
{
    clrscr();
    drawFrame(0, 0, lengthFrame, widthFrame);
    gotoXY(45, 8);
    cout << "HUONG DAN LUAT TRO CHOI" << endl;
    gotoXY(10, 10);
    cout << "Tren ban co 20 x 20 o vuong. Mot nguoi di X, mot nguoi di O." << endl; Sleep(200);
    gotoXY(10, 11);
    cout << "Khi den luot minh, nguoi choi phai tich vao mot o tren ban co." << endl; Sleep(200);
    gotoXY(10, 12);
    cout << "Nguoi choi phai tim cach tich du 5 o thoi chieu ngang hoac chieu doc hoac duong cheo ma khong bi chan hai dau thi chien thang." << endl; Sleep(200);
    gotoXY(10, 13);
    cout << "Su dung cac phim mui ten hoac cac phim W, S, A, D tren ban phim de lan luot di chuyen len xuong trai phai." << endl; Sleep(200);
    gotoXY(10, 14);
    cout << "Su dung phim Space tren ban phim de choi." << endl; Sleep(200);
    gotoXY(10, 15);
    cout << "Man choi ket thuc khi mot trong hai nguoi choi tich du 5 o lien tiep ma khong bi chan hai dau." << endl; Sleep(200);
    gotoXY(10, 16);
    cout << "Khi di het ban co ma hai nguoi choi van chua phan thang bai thi coi nhu hoa." << endl;

    while(1)
    {
        if(_kbhit())
        {
            char key = _getch();
            if(key == 13)
            {
                break;
            }
        }
    }
    return run();
}

void display()
{
    drawFrame(0, 0, lengthFrame, widthFrame);
    Player Player1, Player2;
    gotoXY(95, 20);
    cout << "Player1: X";
    gotoXY(120, 20);
    cout << "Player2: O";
    gotoXY(95, 30);
    cout << "F2: New Game";
    gotoXY(120, 30);
    cout << "Esc: Exit";
    drawBoard(4, 2);
}
