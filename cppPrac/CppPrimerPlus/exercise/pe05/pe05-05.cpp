// pe05-05.cpp -- ���� �Ǹŷ��� �Է¹޾� ���� �� �Ǹŷ��� ����Ѵ�
#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	char * MonthName[12] = {"1��", "2��", "3��", "4��", "5��", "6��", "7��", "8��", "9��", "10��", "11��", "12��"};
	int MonthSale[12];

	for (int i = 0; i < 12; i++)
	{
		cout << MonthName[i] << " �Ǹŷ�: ";
		cin >> MonthSale[i];
		sum += MonthSale[i];
	}

	cout << "���� �� �Ǹŷ�: " << sum << endl;
	return 0;
}
