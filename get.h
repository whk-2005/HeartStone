#include <cstdio>
#include <iostream>
#include <string>
#include <conio.h>
#include <cstring>
#include <sstream>

struct Node
{
    int v1, v2, v3; //费用，血量，攻击
    std::string name;
};
struct Card
{
    int size;
    Node ca[210];
    Card()
    {
        size = 0;
        memset(ca, 0, sizeof(ca));
    }
};

Card input_file()
{
    Card card;
    freopen("Card.data", "r", stdin);
    int i = 1;
    std::string s;
    std::stringstream ss;
    while (std::getline(std::cin, s))
    {
        ss.str(s);
        ss >> card.ca[i].name >> card.ca[i].v1 >> card.ca[i].v2 >> card.ca[i].v3;
        card.size++;
    }
    return card;
}

int get_char()
{
    char c = getch();
    return c;
}