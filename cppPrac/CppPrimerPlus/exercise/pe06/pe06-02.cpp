// pe06-02.cpp
#include <iostream>
using namespace std;
const int Max = 10;
int main()
{
	double donation[Max];	// 기부금을 저장하는 double형의 배열

	cout << "기부금을 입력하십시오.\n"
		 << "(끝내려면 문자를 입력)\n";
	cout << "기부금 #1: ";
	int i = 0;
	while (i < Max && cin >> donation[i])
	{
		if (++i < Max)
			cout << "기부금 #" << i+1 << ": ";
	}

// 평균 기부금과 평균 이상 기부금의 개수를 보고한다
	double total = 0.0;		// 기부금 총액
	double average = 0.0;	// 평균 기부금
	int num_over_avg = 0;	// 평균 이상 기부금 수

	for (int j = 0; j < i; j++)
		total += donation[j];
	if (i == 0)
		cout << "기부금이 없습니다.\n";
	else 
	{
		average = total / i;
		cout << "평균 기부금은 " << average << "입니다.\n";
		for (j = 0; j < i; j++)
		{
			if (donation[j] > average)
				num_over_avg++;
		}
		cout << "평균보다 큰 기부금의 수는 " << num_over_avg << "입니다.\n";
	}
	return 0;
}
