// pe14-5.cpp
#include <iostream>
using namespace std;
#include "emp.h"

int main()
{
    employee th("Trip", "Harris", "Thumper");
    cout << th << '\n';
    th.ShowAll();


    manager db("Debbie", "Bolt", "Twigger", 5);
    cout << db << '\n';
    db.ShowAll();

    cout << "���� ����� ���� �ƹ� Ű�� �����ʽÿ�:\n";
    cin.get();

    fink mo("Matt", "Oggs", "Oiler", "Debbie Bolt");
    cout << mo << '\n';
    mo.ShowAll();
    highfink hf(db, "Curly Kew");
    hf.ShowAll();

    cout << "employee * �������� ���:\n";
    employee  * tri[4] = { &th, &db, &mo, &hf };
    for (int i = 0; i < 4; i++)
        tri[i]->ShowAll();

    return 0;;
}
