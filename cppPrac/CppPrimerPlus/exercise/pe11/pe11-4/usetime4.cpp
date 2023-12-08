// usetime4.cpp -- Time 클래스의 세 번째 드래프트 버전을 사용한다
// usetime4.cpp와 mytime4.cpp를 함께 컴파일한다
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
	A = B + C;								// 프렌드 operator+()
	cout << "B + C: " << A << endl;
	A = B - C;								// 프렌드 operator-()
	cout << "B - C: " << A << endl;
	A = B * 2.75;				// 프렌드 operator*()
	cout << "B * 2.75: " << A << endl;
	cout << "10 * B: " << 10 * B << endl;	// 프렌드 operator*()
	return 0; 
}
