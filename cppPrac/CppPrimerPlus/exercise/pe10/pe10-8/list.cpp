// list.cpp -- List 클래스 메서드 정의
#include <iostream>
using namespace std;
#include "list.h"

List::List(int num)
{
	if (num > MAX)
		max = MAX;
	else
		max = num;
	items = new Item[max];
	top = 0;
}

List::~List()
{
	delete [] items;
}

bool List::add(Item & it)
{
	if (top < max)
	{
		items[top++] = it;
		return true;
	}
	else
		return false;
}

bool List::isempty() const
{
	return top == 0;
}

bool List::isfull() const
{
	return top == max;
}

void List::visit(void (*pf)(Item &))
{
	for (int i = 0; i < top; i++)
		pf(items[i]);
}

void List::show()
{
	for (int i = 0; i < top; i++)
		cout << "항목" << i+1 << " = " << items[i] << endl;
}
