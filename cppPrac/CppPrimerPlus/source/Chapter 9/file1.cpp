// file1.cpp -- �� ���� ���Ϸ� ������ ���α׷��� ��
#include <iostream>
#include "coordin.h"				// ����ü ���ø�, �Լ� ����
using namespace std;
int main()
{
	rect rplace;
	polar pplace;

	cout << "x���� y���� �Է��Ͻʽÿ�: ";
	while (cin >> rplace.x >> rplace.y)	// ��ġ �ִ� cin ���
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x���� y���� �Է��Ͻʽÿ�(�������� q�� �Է�): ";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
