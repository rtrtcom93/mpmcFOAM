// pe07-05.cpp -- 재귀 함수
#include <iostream>
using namespace std;
double factorial(unsigned int num);
int main()
{
	unsigned int num;
	cout << "계승을 구할 수를 입력하십시오(끝내려면 q를 입력): ";
	while (cin >> num)
	{
		cout << num << "!은 " << factorial(num) << "입니다.\n";
		cout << "계승을 구할 수를 입력하십시오(끝내려면 q를 입력): ";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

double factorial(unsigned int num)
{
	if (num == 0)
		return 1;
	return num * factorial(num-1);
}
