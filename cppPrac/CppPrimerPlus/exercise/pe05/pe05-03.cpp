// pe05-03.cpp -- 임의로 입력하는 수들의 합을 구한다
#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int number;

	cout << "더할 수(끝내려면 0): ";
	cin >> number;
	while (number != 0)
	{
		sum += number;
		cout << "지금까지의 합: " << sum << endl;
		cout << "더할 수(끝내려면 0): ";
		cin >> number;
	}
	return 0;
}
