// golf.cpp -- Golf Ŭ������ �޼��� ����
#include <iostream>
#include <cstring>
using namespace std;
#include "golf.h"

// ����Ʈ ������
Golf::Golf()
{
    strcpy(fullname, "no name");
    handicap = 0;
}

// ���ȭ�� ����:
// �� �����ڴ� �������ڷ� ���޵� ������ �ʱ�ȭ ������ ����ϴ� ��ü�� �����Ѵ�.
// ��ü�� fullname ����� handicap ����� �������ڷ� �����Ѵ�
Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    sethandicap(hc);
}

// ��ȭ�� ����:
// �� �޼���� ����ڿ��� �̸��� �ڵ�ĸ�� ���´�
// ��ü�� ������� �Էµ� ������ �����Ѵ�
// �̸��� �ԷµǸ� 1�� �����ϰ�, �̸��� �� ���ڿ��̸� 0�� �����Ѵ�
int Golf::setgolf(Golf & g)
{
	cout << "���۸�: ";
    cin.get(g.fullname, Len);

    if (strcmp(g.fullname, "") == 0)
		return 0;

    cout << "�ڵ�ĸ: ";
	cin >> g.handicap;
	cin.clear();
	while (cin.get() != '\n')
		continue;
	
	*this = Golf(g.fullname, g.handicap);

	return 1;
}

// �� �޼���� ��ü�� handicap ����� �������ڷ� �����Ѵ�
void Golf::sethandicap(int hc)
{
    handicap = hc;
}

// �� �޼���� ��ü�� handicap ����� ��ȭ������ �����Ѵ�
void Golf::updatehandicap()
{
	int hc;
	cout << this->fullname << "�� �ڵ�ĸ ����" << endl;
	cout << "�� �ڵ�ĸ: ";
	cin >> hc;
	handicap = hc;
	cin.clear();
	while (cin.get() != '\n')
		continue;
}

// �� �޼���� ��ü�� ���̹� ������� ����Ѵ�
void Golf::showgolf() const
{
    cout << "���۸�: " << fullname << endl;
	cout << "�ڵ�ĸ: " << handicap << endl;
}
