// usett1.cpp -- ���� Ŭ������ �Ļ� Ŭ������ ����Ѵ�
#include <iostream>
#include "tabtenn1.h"

int main ( void )
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    rplayer1.Name();          // �Ļ� ��ü�� ���� �޼��带 ����Ѵ�
    if (rplayer1.HasTable())
        cout << ": Ź���밡 �ִ�.\n";
    else
        cout << ": Ź���밡 ����.\n";
    player1.Name();           // ���� ��ü�� ���� �޼��带 ����Ѵ�
    if (player1.HasTable())
        cout << ": Ź���밡 �ִ�.\n";
    else
        cout << ": Ź���밡 ����.\n";
    cout << "�̸�: ";
    rplayer1.Name();
    cout << "; ��ŷ: " << rplayer1.Rating() << endl;
// TableTennisPlayer ��ü�� ����Ͽ� RatedPlayer�� �ʱ�ȭ�Ѵ�
    RatedPlayer rplayer2(1212, player1);
    cout << "�̸�: ";
    rplayer2.Name();
    cout << "; ��ŷ: " << rplayer2.Rating() << endl;

    return 0;
}
