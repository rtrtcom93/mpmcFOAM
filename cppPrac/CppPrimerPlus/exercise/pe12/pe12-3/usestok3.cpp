// usestok3.cpp -- Stock 클래스를 사용한다
// stock3.cpp와 함께 컴파일한다
#include <iostream>
using namespace std;
#include "stock3.h"

const int STKS = 4;
int main()
{
// 초기화된 객체들의 배열을 생성한다
	Stock stocks[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
    };

	cout.setf(ios_base::fixed, ios_base::floatfield);	// #.## 형식
	cout.precision(2);									// #.## 형식
	cout.setf(ios_base::showpoint);						// #.## 형식

	cout << "보유 주식 리스트:\n";
	int st;
	for (st = 0; st < STKS; st++)
		cout << stocks[st];

	Stock top = stocks[0];
	for (st = 1; st < STKS; st++)
		top = top.topval(stocks[st]);
	cout << "\n최고 가치의 주식:\n";
	cout << top;

	return 0;
}
