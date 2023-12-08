// pe07-04.cpp -- 변형 로토 복권 승률 구하기
#include <iostream>
using namespace std;
// 참고: 어떤 C++에서는 long double형 대신에 double형을 사용해야 한다
long double odds(unsigned numbers, unsigned picks);	// 함수 원형
int main()
{
	double total, choices;
	long double firstodds, secondodds = 0.0;
	cout << "1회차: 전체 수의 개수와 뽑을 수의 개수를 입력하십시오: ";
	if ((cin >> total >> choices) && choices <= total)
	{
		firstodds = odds(total, choices);		// 1회차 승률을 계산한다
		cout << "2회차: 전체 수의 개수와 뽑을 수의 개수를 입력하십시오: ";
		if ((cin >> total >> choices) && choices <= total)
		{
			secondodds = odds(total, choices);	// 2회차 승률을 계산한다
			cout << "당신이 그랑프리를 탈 승률은 " << firstodds * secondodds << "번의 시도에 한 번입니다.\n";
		}
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

// 이 함수는 numbers개의 수 중에서
// picks개의 수를 정확하게 뽑을 확률을 계산한다
long double odds(unsigned numbers, unsigned picks)
{
	long double result = 1.0;	// 이 자리에는 지역 변수들이 온다
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p ;
	return result;
}
