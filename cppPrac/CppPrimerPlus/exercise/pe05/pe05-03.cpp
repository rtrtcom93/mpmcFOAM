// pe05-03.cpp -- ���Ƿ� �Է��ϴ� ������ ���� ���Ѵ�
#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int number;

	cout << "���� ��(�������� 0): ";
	cin >> number;
	while (number != 0)
	{
		sum += number;
		cout << "���ݱ����� ��: " << sum << endl;
		cout << "���� ��(�������� 0): ";
		cin >> number;
	}
	return 0;
}
