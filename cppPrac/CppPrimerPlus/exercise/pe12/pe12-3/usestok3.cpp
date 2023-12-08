// usestok3.cpp -- Stock Ŭ������ ����Ѵ�
// stock3.cpp�� �Բ� �������Ѵ�
#include <iostream>
using namespace std;
#include "stock3.h"

const int STKS = 4;
int main()
{
// �ʱ�ȭ�� ��ü���� �迭�� �����Ѵ�
	Stock stocks[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
    };

	cout.setf(ios_base::fixed, ios_base::floatfield);	// #.## ����
	cout.precision(2);									// #.## ����
	cout.setf(ios_base::showpoint);						// #.## ����

	cout << "���� �ֽ� ����Ʈ:\n";
	int st;
	for (st = 0; st < STKS; st++)
		cout << stocks[st];

	Stock top = stocks[0];
	for (st = 1; st < STKS; st++)
		top = top.topval(stocks[st]);
	cout << "\n�ְ� ��ġ�� �ֽ�:\n";
	cout << top;

	return 0;
}
