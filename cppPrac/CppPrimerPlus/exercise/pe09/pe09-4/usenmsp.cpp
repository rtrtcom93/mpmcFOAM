// usenmsp.cpp -- using namespaces
#include <iostream>
using namespace std;
#include "namesp.h"

int main()
{
	using namespace SALES;
	
	Sales salesman_a, salesman_b;
	double array[QUARTERS] = {100.11, 200.22, 300.33, 400.44};
	
	
	cout << "판매사원 A의 분기별 판매액" << endl;
	setSales(salesman_a, array, 5);
	showSales(salesman_a);
	
	cout << "판매사원 B의 분기별 판매액(입력)" << endl;
	setSales(salesman_b);
	showSales(salesman_b);
	return 0;
}
