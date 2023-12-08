// namesp.cpp
#include <iostream>
using namespace std;
#include "namesp.h"

namespace SALES
{
	Sales::Sales()
	{
		double sales[QUARTERS] = {0.0, 0.0, 0.0, 0.0};
		double average = 0.0;
		double max = 0.0;
		double min = 0.0;
	}
	
	Sales::Sales(Sales & s, const double ar[], int n)
	{
		if (QUARTERS < n)
			n = QUARTERS;
	
		for (int i = 0; i < n; i++)
			this->sales[i] = ar[i];

		if (n < QUARTERS)
		{
			do
			{
				this->sales[n] = 0;
				n++;
			} while (n != QUARTERS);
		}
		
		double temp = 0;
		for (i = 0; i < n; i++)
			temp += this->sales[i];
		this->average = temp / n;
		
		temp = 0;
		for (i = 0; i < n; i++)
			if (temp < this->sales[i])
				temp = this->sales[i];
		this->max = temp;
		
		temp = this->sales[0];
		for (i = 1; i < n; i++)
			if (temp > this->sales[i])
				temp = this->sales[i];
		this->min = temp;
	}

	void Sales::showSales()
	{
		for (int i = 0; i < QUARTERS; i++)
			cout << i+1 << "�б� �Ǹž�: " << this->sales[i] << endl;
		cout << "��հ�: " << this->average << endl;
		cout << "�ִ밪: " << this->max << endl;
		cout << "�ּҰ�: " << this->min << endl;
	}
}
