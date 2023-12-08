// pe08-07a.cpp
#include <iostream>
using namespace std;

int ShowArray(int arr[], int n);
double ShowArray(double * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	int things[6] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400},
		{"Ura Foxe", 1300},
		{"Iby Stout", 1800}
	};
	double * pd[3];
	
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	
	cout << "Mr. E�� ��� �հ�: " << ShowArray(things, 6) << endl;	// ���ø� A�� ����Ѵ�
	cout << "Mr. E�� ä�� �հ�: " << ShowArray(pd, 3) << endl;		// ���ø� B�� ����Ѵ�
	
	return 0;
}

int ShowArray(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total += arr[i];
	return total;
}

double ShowArray(double * arr[], int n)
{
	double total = 0;
	for (int i = 0; i < n; i++)
		total += *arr[i];
	return total;
}
