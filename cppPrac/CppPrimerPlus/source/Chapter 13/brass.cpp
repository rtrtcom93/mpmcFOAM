// brass.cpp -- ���� ���� Ŭ������ �޼����
#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;

// formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

// Brass �޼����

Brass::Brass(const string & s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt)
{
    if (amt < 0)
        cout << "���̳ʽ� �Ա��� ������ �ʽ��ϴ�.\n"
             << "�׷��� �Ա��� ��ҵǾ����ϴ�.\n";
    else
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    // ###.## �������� �����Ѵ�
    format initialState = setFormat();
    precis prec = cout.precision(2);

    if (amt < 0)
        cout << "���̳ʽ� ������ ������ �ʽ��ϴ�.\n"
             << "�׷��� ������ ��ҵǾ����ϴ�.\n";
    else if (amt <= balance)
        balance -= amt;
    else
        cout << "������ �䱸�� �ݾ� $" << amt
             << "�� ���� �ܾ��� �ʰ��մϴ�.\n"
             << "�׷��� ������ ��ҵǾ����ϴ�.\n";
    restore(initialState, prec);
}
double Brass::Balance() const
{
    return balance;
}

void Brass::ViewAcct() const
{
     // ###.## �������� �����Ѵ�
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "�� �̸�: " << fullName << endl;
    cout << "���� ��ȣ: " << acctNum << endl;
    cout << "���� �ܾ�: $" << balance << endl;
    restore(initialState, prec); // ���� ������ �����Ѵ�
}

// BrassPlus �޼����
BrassPlus::BrassPlus(const string & s, long an, double bal,
           double ml, double r) : Brass(s, an, bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
           : Brass(ba)   // �Ͻ��� ���� �����ڸ� ����Ѵ�
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

// ViewAcct()�� ������ �ٽ� �����Ѵ�
void BrassPlus::ViewAcct() const
{
    // ###.## �������� �����Ѵ�
    format initialState = setFormat();
    precis prec = cout.precision(2);

    Brass::ViewAcct();   // ���� �κ��� ����Ѵ�
    cout << "���� ��� �ѵ���: $" << maxLoan << endl;
    cout << "��ȯ�� ������: $" << owesBank << endl;
    cout.precision(3);  // ###.### ����
    cout << "���� ��� ������: " << 100 * rate << "%\n";
    restore(initialState, prec); 
}

// Withdraw()�� ������ �ٽ� �����Ѵ�
void BrassPlus::Withdraw(double amt)
{
    // ###.## �������� �����Ѵ�
    format initialState = setFormat();
    precis prec = cout.precision(2);

    double bal = Balance();
    if (amt <= bal)
        Brass::Withdraw(amt);
    else if ( amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "���� ��� �ݾ�: $" << advance << endl;
        cout << "���� ��� ����: $" << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
        cout << "���� ��� �ѵ��� �ʰ��Ǿ� �ŷ��� ��ҵǾ����ϴ�.\n";
    restore(initialState, prec); 
}

format setFormat()
{
    // ###.## �������� �����Ѵ�
    return cout.setf(std::ios_base::fixed, 
                std::ios_base::floatfield);
} 

void restore(format f, precis p)
{
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}
