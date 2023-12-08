// pe07-01.cpp
#include <iostream>
using namespace std;

double harmonic_mean(double x, double y);

int main()
{
	double num1, num2;
	double result;

	cout << "(�������� ��� �ϳ��� 0�� �Է�)\n";
	cout << "�� ���� �Է��Ͻʽÿ�: ";
	cin >> num1 >> num2;
	while (num1 && num2)	// �� �� ��� �ϳ��� 0�̸� ������ Ż���Ѵ�
	{
		result = harmonic_mean(num1, num2);
		cout << "(" << num1 << "," << num2 << ")�� ��ȭ����� "
		 	 << result << "�Դϴ�.\n\n";
		cout << "(�������� ��� �ϳ��� 0�� �Է�)\n";
		cout << "�� ���� �Է��Ͻʽÿ�: ";
		cin >> num1 >> num2;
	}
	return 0;
}

double harmonic_mean(double x, double y)
{
	return 2.0 * x * y / (x + y);
}
