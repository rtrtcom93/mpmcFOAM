// usett0.cpp -- ���� Ŭ������ ����Ѵ�
#include <iostream>
#include "tabtenn0.h"

int main ( void )
{
    using std::cout;
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if (player1.HasTable())
        cout << ": Ź���밡 �ִ�.\n";
    else
        cout << ": Ź���밡 ����.\n";
    player2.Name();
    if (player2.HasTable())
        cout << ": Ź���밡 �ִ�.\n";
    else
        cout << ": Ź���밡 ����.\n";

    return 0;
}
