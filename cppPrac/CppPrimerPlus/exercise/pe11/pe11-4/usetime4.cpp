// usetime4.cpp -- Time Ŭ������ �� ��° �巡��Ʈ ������ ����Ѵ�
// usetime4.cpp�� mytime4.cpp�� �Բ� �������Ѵ�
#include <iostream>
#include "mytime4.h"
using namespace std;

int main()
{
	Time A;
	Time B(5, 40);
	Time C(2, 55);

	cout << "A, B, C:\n";
	cout << A <<"; " << B << "; " << C << endl;
	A = B + C;								// ������ operator+()
	cout << "B + C: " << A << endl;
	A = B - C;								// ������ operator-()
	cout << "B - C: " << A << endl;
	A = B * 2.75;				// ������ operator*()
	cout << "B * 2.75: " << A << endl;
	cout << "10 * B: " << 10 * B << endl;	// ������ operator*()
	return 0; 
}
