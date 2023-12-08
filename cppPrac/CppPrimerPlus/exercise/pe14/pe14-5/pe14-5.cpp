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

    cout << "다음 출력을 위해 아무 키나 누르십시오:\n";
    cin.get();

    fink mo("Matt", "Oggs", "Oiler", "Debbie Bolt");
    cout << mo << '\n';
    mo.ShowAll();
    highfink hf(db, "Curly Kew");
    hf.ShowAll();

    cout << "employee * 포인터의 사용:\n";
    employee  * tri[4] = { &th, &db, &mo, &hf };
    for (int i = 0; i < 4; i++)
        tri[i]->ShowAll();

    return 0;;
}
