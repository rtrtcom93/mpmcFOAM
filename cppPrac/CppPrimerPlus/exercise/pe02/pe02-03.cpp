// pe02-03.cpp -- main()을 포함하여 세 개의 사용자 정의 함수를 사용한다
#include <iostream>
using namespace std;
void user1();
void user2();
int main()
{
	user1();
	user1();
	user2();
	user2();
	return 0;
}

void user1()
{
	cout << "Three blind mice\n";
}

void user2()
{
	cout << "See how they run \n";
}
