// uselist.cpp -- List 클래스 사용
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
		cout << "현재 리스트가 비어 있습니다.\n";
		cout << "리스트에 항목을 입력하십시오.\n";
		while (1)
		{
			if (myList.isfull())
			{
				cout << "리스트가 가득 차서 더 이상 항목을 입력할 수 없습니다.\n";
				break;
			}
			else
			{
				cout << "항목" << ++cnt << " = ";
				cin >> it;
				myList.add(it);
			}
		}
	}
	cout << "현재의 리스트입니다.\n";
	myList.show();

	myList.visit(square);
	cout << "제곱한 후의 리스트입니다.\n";
	myList.show();

	myList.visit(cube);
	cout << "세제곱한 후의 리스트입니다.\n";
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
