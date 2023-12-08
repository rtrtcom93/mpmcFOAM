// pe05-06.cpp -- 3년 동안의 월간 판매량을 입력받아 2차원 배열에 저장한다
#include <iostream>
using namespace std;
const int Years = 3;
const int Months = 12;
int main()
{
	int TotalSale = 0;
	int sum[Years] = {0, 0, 0};
	char * MonthName[Months] = {"1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월"};
	int MonthSale[Years][Months];

	
	for (int i = 0; i < Years; i++)
	{
		cout << i + 1 << "차 년도" << endl;
		for (int j = 0; j < Months; j++)
		{
			cout << MonthName[j] << " 판매량: ";
			cin >> MonthSale[i][j];
			sum[i] += MonthSale[i][j];
		}
		cout << i + 1 << "차 년도 판매량: " << sum[i] << "\n\n";
	}
	
	for (i = 0; i < Years; i++)
	{
		TotalSale += sum[i];
		cout << i + 1 << "년간 누적 판매량: " << TotalSale << endl;
	}
	return 0;
}
