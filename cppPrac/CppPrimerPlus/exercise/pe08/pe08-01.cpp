// pe08-01.cpp
#include <iostream>
using namespace std;
void print_str(char * str, int count = 0);
const int ArSize = 20;
int main()
{
	char myStr[ArSize];

	cout << "출력할 문자열을 입력하십시오:\n";
	cin.getline(myStr, ArSize);

	print_str(myStr);			// 1번 째 호출
	print_str(myStr, 0);			// 2번 째 호출
	print_str(myStr, 100);			// 3번 째 호출

	cout << "for문으로 함수를 세 번 호출한다:\n";
	for (int i = 0; i < 3; i++)
		print_str(myStr);		// 4, 5, 6번 째 호출

	print_str(myStr);			// 7번 째 호출
	print_str(myStr, 300);			// 8번 째 호출
	return 0;
}

void print_str(char * str, int count)
{
	static int called = 0;

	if (count == 0)		// 두 번째 전달인자가 0이면 평상시처럼 문자열을 한 번만 출력한다
	{
		called++;
		cout << called << "번 째 호출: " << str << endl;
	}
	else			// 이 시점까지 함수가 호출된 횟수만큼 출력한다
	{
		called++;
		for (int i = 0; i < called; i++)
			cout << called << "번 째 호출: " << str << endl;
	}
}
