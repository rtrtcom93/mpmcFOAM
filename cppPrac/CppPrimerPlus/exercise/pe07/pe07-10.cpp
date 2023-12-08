// pe07-10.cpp
#include <iostream>
using namespace std;

double add(double x, double y);		// 더하기
double sub(double x, double y);		// 빼기
double mul(double x, double y);		// 곱하기
double div(double x, double y);		// 나누기
double calculate(double x, double y, double (*pf)(double, double));

int main()
{
	double (*pf[4]) (double, double) = {add, sub, mul, div};
	double x, y;
	double array[4];

	cout << "x와 y를 입력하십시오(끝내려면 q를 입력): ";
	while (cin >> x && cin >> y)
	{
		for (int i = 0; i < 4; i++)
			array[i] = calculate(x, y, pf[i]);
		
		cout << "x + y = " << array[0] << endl;
		cout << "x - y = " << array[1] << endl;
		cout << "x * y = " << array[2] << endl;
		cout << "x / y = " << array[3] << endl;
		cout << endl;
		
		cout << "x와 y를 입력하십시오(끝내려면 q를 입력): ";
	}
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double mul(double x, double y)
{
	return x * y;
}

double div(double x, double y)
{
	return x / y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
	return (pf(x,y));
}
