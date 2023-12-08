// pe9-1.cpp
#include <iostream>
#include "pe9-golf.h"
// link with pe9-golf.cpp
const int Mems = 5;
int main(void)
{
    using namespace std;
    golf team[Mems];

    cout << "Enter up to " << Mems << " golf team members:\n";
    int i;
    for (i = 0; i < Mems; i++)
        if (setgolf(team[i]) == 0)
            break;
    for (int j = 0; j < i; j++)
        showgolf(team[j]);
    setgolf(team[0], "Fred Norman", 5);
    showgolf(team[0]);
    handicap(team[0], 3);
    showgolf(team[0]);

    return 0;
}
