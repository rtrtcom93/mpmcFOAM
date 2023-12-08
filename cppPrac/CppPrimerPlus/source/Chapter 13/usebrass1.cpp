// usebrass1.cpp -- ���� ���� Ŭ������ �׽�Ʈ�Ѵ�
// brass.cpp�� �Բ� �������Ѵ�
#include <iostream>
#include "brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
    Piggy.ViewAcct();
    cout << endl;
    Hoggy.ViewAcct();
    cout << endl;
    cout << "Hogg ���� ���¿� $1000 �Ա�:\n";
    Hoggy.Deposit(1000.00);
    cout << "Hogg ���� ���� �ܾ�: $" << Hoggy.Balance() << endl;
    cout << "Pigg ���� ���¿��� $4200 ����:\n";
    Piggy.Withdraw(4200.00);
    cout << "Pigg ���� ���� �ܾ�: $" << Piggy.Balance() << endl;
    cout << "Hogg ���� ���¿��� $4200 ����:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();

    return 0; 
}
