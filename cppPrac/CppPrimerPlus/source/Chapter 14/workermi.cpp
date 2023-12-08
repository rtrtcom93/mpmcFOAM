// workermi.cpp -- ���� ����� ����ϴ� working Ŭ���� �޼����
#include "workermi.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Worker �޼����
Worker::~Worker() { }

// protected �޼����
void Worker::Data() const
{
    cout << "��� �̸�: " << fullname << endl;
    cout << "��� ��ȣ: " << id << endl;
}

void Worker::Get()
{
    getline(cin, fullname);
    cout << "��� ��ȣ�� �Է��Ͻʽÿ�: ";
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

// Waiter �޼����
void Waiter::Set()
{
    cout << "�������� �̸��� �Է��Ͻʽÿ�: ";
    Worker::Get();
    Get();
}

void Waiter::Show() const
{
    cout << "����: ������\n";
    Worker::Data();
    Data();
}

// protected �޼����
void Waiter::Data() const
{
    cout << "������ ���: " << panache << endl;
}

void Waiter::Get()
{
    cout << "������ ����� �Է��Ͻʽÿ�: ";
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}

// Singer �޼����

char * Singer::pv[Singer::Vtypes] = {"other", "alto", "contralto",
            "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    cout << "������ �̸��� �Է��Ͻʽÿ�: ";
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    cout << "����: ����\n";
    Worker::Data();
    Data();
}

// protected �޼����
void Singer::Data() const
{
    cout << "��Ҹ� ����: " << pv[voice] << endl;
}

void Singer::Get()
{
    cout << "������ ��Ҹ� ���� ��ȣ�� �Է��Ͻʽÿ�:\n";
    int i;
    for (i = 0; i < Vtypes; i++)
    {
        cout << i << ": " << pv[i] << "   ";
        if ( i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << '\n';
    cin >> voice;
    while (cin.get() != '\n')
        continue;
}

// SingingWaiter �޼����
void SingingWaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get()
{
    Waiter::Get();
    Singer::Get();
}

void SingingWaiter::Set()
{
    cout << "���� �� �������� �̸��� �Է��Ͻʽÿ�: ";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const
{
    cout << "����: ���� �� ������\n";
    Worker::Data();
    Data();
}
