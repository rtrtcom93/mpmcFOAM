// pe05-05.cpp -- 월간 판매량을 입력받아 연간 총 판매량을 계산한다
#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	char * MonthName[12] = {"1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월"};
	int MonthSale[12];

	for (int i = 0; i < 12; i++)
	{
		cout << MonthName[i] << " 판매량: ";
		cin >> MonthSale[i];
		sum += MonthSale[i];
	}

	cout << "연간 총 판매량: " << sum << endl;
	return 0;
}
