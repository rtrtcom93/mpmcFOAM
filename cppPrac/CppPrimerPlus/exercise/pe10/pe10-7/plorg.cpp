// plorg.cpp -- Plorg Ŭ���� �޼������ ����
#include <iostream>
#include <cstring>
using namespace std;
#include "plorg.h"

Plorg::Plorg(char * name, int index)
{
	strncpy(pl_name, name, 19);
	pl_name[20] = '\0';
	ci_index = index;
}

void Plorg::changeCI(int index)
{
	ci_index = index;
}

void Plorg::show() const
{
	 cout << "�÷α� �̸�: " << pl_name << endl;
	 cout << "���� ����(CI): " << ci_index << endl;
}
