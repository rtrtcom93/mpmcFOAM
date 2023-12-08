// pe05-01.cpp -- 두 개의 정수를 입력받아 그 구간에 속한 모든 수의 합을 구한다
#include <iostream>
using namespace std;
int main()
{
	int sum = 0;		// 합
	int input1,		// 시작값
		input2;		// 종료값

	cout << "시작값과 종료값으로 사용할 두 정수를 입력하십시오: ";
	cin >> input1 >> input2;

	// 시작값부터 종료값까지의 합을 구하는 루프
	for (int i = input1; i <= input2; i++)
		sum += i;

	cout << input1 << "부터 " << input2 << "까지의 합은 " << sum << "입니다.\n";
	return 0;
}
