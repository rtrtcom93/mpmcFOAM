// usecow.cpp -- 12�� ���α׷��� ���� 1
// cow.cpp�� �Բ� �������Ѵ�
#include <iostream>
using namespace std;
#include "cow.h"

void SC(Cow);

int main()
{
	Cow cow1;
	Cow cow2("������", "����", 321.25);

	cow1.ShowCow();
	cow2.ShowCow();
	cow1 = cow2;
	cow1.ShowCow();

	return 0;
}
