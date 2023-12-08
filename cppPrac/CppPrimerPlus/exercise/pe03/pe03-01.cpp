// pe03-01.cpp -- 센티미터로 입력받아 미터와 센티미터로 출력한다
#include <iostream>
using namespace std;
int main()
{
	int height;
	const int METER = 100;

	cout << "키를 정수형 센티미터 단위로 입력하십시오: ___\b\b\b";
	cin >> height;
	cout << "당신의 키는 " << height/METER << "미터 " << height%METER << "센티미터입니다.\n";
	return 0;
}
