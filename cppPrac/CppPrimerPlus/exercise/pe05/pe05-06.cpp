// pe05-06.cpp -- 3�� ������ ���� �Ǹŷ��� �Է¹޾� 2���� �迭�� �����Ѵ�
#include <iostream>
using namespace std;
const int Years = 3;
const int Months = 12;
int main()
{
	int TotalSale = 0;
	int sum[Years] = {0, 0, 0};
	char * MonthName[Months] = {"1��", "2��", "3��", "4��", "5��", "6��", "7��", "8��", "9��", "10��", "11��", "12��"};
	int MonthSale[Years][Months];

	
	for (int i = 0; i < Years; i++)
	{
		cout << i + 1 << "�� �⵵" << endl;
		for (int j = 0; j < Months; j++)
		{
			cout << MonthName[j] << " �Ǹŷ�: ";
			cin >> MonthSale[i][j];
			sum[i] += MonthSale[i][j];
		}
		cout << i + 1 << "�� �⵵ �Ǹŷ�: " << sum[i] << "\n\n";
	}
	
	for (i = 0; i < Years; i++)
	{
		TotalSale += sum[i];
		cout << i + 1 << "�Ⱓ ���� �Ǹŷ�: " << TotalSale << endl;
	}
	return 0;
}
