#include <iostream>
#include <cstdio>
#include <Windows.h>
#include <string>

#define rg FOREGROUND_RED
#define gg FOREGROUND_BLUE
#define bg FOREGROUND_BLUE
#define rb BACKGROUND_RED
#define gb BACKGROUND_GREEN
#define bb BACKGROUND_BLUE

void color(int r, int g, int b)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    if (r && !g && !b)
        SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_INTENSITY); // 红
    if (!r && g && !b)
        SetConsoleTextAttribute(handle, FOREGROUND_GREEN | FOREGROUND_INTENSITY); // 绿
    if (!r && !g && b)
        SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 蓝
    if (r && g && !b)
        SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY); // 橙
    if (r && !g && b)
        SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 紫
    if (!r && g && b)
        SetConsoleTextAttribute(handle, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 青
}

// void color_b(int r, int g, int b)
// {
//     HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//     if (r && !g && !b)
//         SetConsoleTextAttribute(handle, BACKGROUND_RED | BACKGROUND_INTENSITY); // 红
//     if (!r && g && !b)
//         SetConsoleTextAttribute(handle, BACKGROUND_GREEN | BACKGROUND_INTENSITY); // 绿
//     if (!r && !g && b)
//         SetConsoleTextAttribute(handle, BACKGROUND_BLUE | BACKGROUND_INTENSITY); // 蓝
//     if (r && g && !b)
//         SetConsoleTextAttribute(handle, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY); // 橙
//     if (r && !g && b)
//         SetConsoleTextAttribute(handle, BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_INTENSITY); // 紫
//     if (!r && g && b)
//         SetConsoleTextAttribute(handle, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY); // 青
// }

void set_color()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE); // 白
    SetConsoleTextAttribute(handle, 0x07);
    SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // 白
}