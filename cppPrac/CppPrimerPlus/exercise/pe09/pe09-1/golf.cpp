// golf.cpp -- 첫 번째 파일
#include <iostream>
#include "pe9-golf.h"
#include <cstring>

// function solicits name and handicap from user
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g)
{
    std::cout << "Please enter golfer's full name: ";
    std::cin.getline(g.fullname, Len);
    if (g.fullname[0] == '\0')
        return 0;                // premature termination
    std::cout << "Please enter handicap for " << g.fullname << ": ";
    while (!(std::cin >> g.handicap))
    {
        std::cin.clear();
        std::cout << "Please enter an integer: ";
    }
    while (std::cin.get() != '\n')
        continue;
    return 1;
}

// function sets golf structure to provided name, handicap
void setgolf(golf & g, const char * name, int hc)
{
    std::strcpy(g.fullname, name);
    g.handicap = hc;
}

// function resets handicap to new value
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

// function displays contents of golf structure
void showgolf(const golf & g)
{
    std::cout << "Golfer:   " << g.fullname << "\n";
    std::cout << "Handicap: " << g.handicap << "\n\n";
}
