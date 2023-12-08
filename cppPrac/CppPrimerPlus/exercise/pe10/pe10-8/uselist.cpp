// uselist.cpp -- List Ŭ���� ���
#include <iostream>
#include "list.h"
using namespace std;

void square(Item & it);
void cube(Item & it);

int main()
{
	List myList(5);
	Item it;
	int cnt = 0;

	if (myList.isempty())
	{
		cout << "���� ����Ʈ�� ��� �ֽ��ϴ�.\n";
		cout << "����Ʈ�� �׸��� �Է��Ͻʽÿ�.\n";
		while (1)
		{
			if (myList.isfull())
			{
				cout << "����Ʈ�� ���� ���� �� �̻� �׸��� �Է��� �� �����ϴ�.\n";
				break;
			}
			else
			{
				cout << "�׸�" << ++cnt << " = ";
				cin >> it;
				myList.add(it);
			}
		}
	}
	cout << "������ ����Ʈ�Դϴ�.\n";
	myList.show();

	myList.visit(square);
	cout << "������ ���� ����Ʈ�Դϴ�.\n";
	myList.show();

	myList.visit(cube);
	cout << "�������� ���� ����Ʈ�Դϴ�.\n";
	myList.show();

	return 0;
}

void square(Item & it)
{
	it = it * it;
}

void cube(Item & it)
{
	it = it * it * it;
}
