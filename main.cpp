#include "get.h"
#include "ui.h"
#include <string>
#include <iostream>
#include <ctime>
#include <Windows.h>
#include <conio.h>

using namespace std;

void hellopage()
{
    // string s[20] = {"███        ███  ██████████████  ██████████████  █████████████   ██████████████"
    //                 "███        ███  ███             ███        ███  ███        ███        ██      "
    //                 "███        ███  ███             ███        ███  ███        ███        ██      "
    //                 "██████████████  ██████████████  ███        ███  █████████████         ██      "
    //                 "███        ███  ███             ██████████████  ███████               ██      "
    //                 "███        ███  ███             ███        ███  ███   █████           ██      "
    //                 "███        ███  ██████████████  ███        ███  ███       ████        ██      "
    //                 "                                                                              "
    //                 "██████████████  ██████████████  ██████████████  ███         ██  ██████████████"
    //                 "███                   ██        ██          ██  █████       ██  ██            "
    //                 "███                   ██        ██          ██  ██  ███     ██  ██            "
    //                 "██████████████        ██        ██          ██  ██    ███   ██  ██████████████"
    //                 "           ███        ██        ██          ██  ██      ███ ██  ██            "
    //                 "           ███        ██        ██          ██  ██        ████  ██            "
    //                 "██████████████        ██        ██████████████  ██         ███  ██████████████"};
    // for (int i = 0; i < 15; i++)
    // {
    //     color(1, 1, 0);
    //     cout << s[i] << endl;
    // }
    // set_color();
    string s;
    while (getline(cin, s))
    {
        color(1, 1, 0);
        cout << s << endl;
    }
    set_color();
    return;
}

int main(int argc, char const *argv[])
{
    freopen("heartstone.txt", "r", stdin);
    hellopage();
    freopen("CONIN$", "r+t", stdin);
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    system("pause");
    return 0;
}
