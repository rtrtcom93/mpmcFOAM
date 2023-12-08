// usenmsp.cpp -- using namespaces
#include <iostream>
using namespace std;
#include "namesp.h"

int main()
{
	using namespace SALES;
	
	double array[QUARTERS] = {100.11, 200.22, 300.33, 400.44};
	
	Sales tmp;
	
	cout << "�ǸŻ�� A�� �б⺰ �Ǹž�" << endl;
	Sales salesman_a = Sales(tmp, array, 5);
	salesman_a.showSales();
	
	cout << "�ǸŻ�� B�� �б⺰ �Ǹž�" << endl;
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << i+1 << "�б� �Ǹž�: ";
		cin >> array[i];
	}

	Sales salesman_b = Sales(tmp, array, QUARTERS);
	salesman_b.showSales();
	return 0;
}
