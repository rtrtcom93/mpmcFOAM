// usecow.cpp -- 12장 프로그래밍 연습 1
// cow.cpp와 함께 컴파일한다
#include <iostream>
using namespace std;
#include "cow.h"

void SC(Cow);

int main()
{
	Cow cow1;
	Cow cow2("느림보", "낮잠", 321.25);

	cow1.ShowCow();
	cow2.ShowCow();
	cow1 = cow2;
	cow1.ShowCow();

	return 0;
}
