// namesp.cpp
#include <iostream>
using namespace std;
#include "namesp.h"

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		double temp;
		
		if (QUARTERS < n)
			n = QUARTERS;
	
		for (int i = 0; i < n; i++)
			s.sales[i] = ar[i];

		if (n < QUARTERS)
		{
			do
			{
				s.sales[n] = 0;
				n++;
			} while (n != QUARTERS);
		}
		
		temp = 0;
		for (i = 0; i < n; i++)
			temp += s.sales[i];
		s.average = temp / n;
		
		temp = 0;
		for (i = 0; i < n; i++)
			if (temp < s.sales[i])
				temp = s.sales[i];
		s.max = temp;
		
		temp = s.sales[0];
		for (i = 1; i < n; i++)
			if (temp > s.sales[i])
				temp = s.sales[i];
		s.min = temp;
	}

	void setSales(Sales & s)
	{
		double temp;

		for (int i = 0; i < QUARTERS; i++)
		{
			cout << i+1 << "분기 판매액: ";
			cin >> s.sales[i];
		}

		temp = 0;
		for (i = 0; i < QUARTERS; i++)
			temp += s.sales[i];
		s.average = temp / QUARTERS;
		
		temp = 0;
		for (i = 0; i < QUARTERS; i++)
			if (temp < s.sales[i])
				temp = s.sales[i];
		s.max = temp;
		
		temp = s.sales[0];
		for (i = 1; i < QUARTERS; i++)
			if (temp > s.sales[i])
				temp = s.sales[i];
		s.min = temp;
	}

	void showSales(const Sales & s)
	{
		for (int i = 0; i < QUARTERS; i++)
			cout << i+1 << "분기 판매액: " << s.sales[i] << endl;
		cout << "평균값: " << s.average << endl;
		cout << "최대값: " << s.max << endl;
		cout << "최소값: " << s.min << endl;
	}
}
