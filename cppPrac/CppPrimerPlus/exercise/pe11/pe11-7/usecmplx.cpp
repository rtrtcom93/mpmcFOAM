// usecmplx.cpp
#include <iostream>
using namespace std;
#include "complex0.h"		// complex.h�� ȥ���� ���ϱ� ����
int main()
{
	complex a(3.0, 4.0);	// (3,4i)�� �ʱ�ȭ
	complex c;
	cout << "�ϳ��� ���Ҽ��� �Է��Ͻʽÿ�(�������� q):\n";
	while (cin >> c)
	{
		cout << "c = " << c << '\n';
		cout << "���׺��Ҽ� = " << ~c << '\n';
		cout << "a = " << a << '\n';
		cout << "a + c = " << a + c << '\n';
		cout << "a - c = " << a - c << '\n';
		cout << "a * c = " << a * c << '\n';
		cout << "2 * c = " << 2 * c << '\n';
		cout << "�ϳ��� ���Ҽ��� �Է��Ͻʽÿ�(�������� q):\n";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
