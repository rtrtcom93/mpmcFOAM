// pe05-01.cpp -- �� ���� ������ �Է¹޾� �� ������ ���� ��� ���� ���� ���Ѵ�
#include <iostream>
using namespace std;
int main()
{
	int sum = 0;		// ��
	int input1,		// ���۰�
		input2;		// ���ᰪ

	cout << "���۰��� ���ᰪ���� ����� �� ������ �Է��Ͻʽÿ�: ";
	cin >> input1 >> input2;

	// ���۰����� ���ᰪ������ ���� ���ϴ� ����
	for (int i = input1; i <= input2; i++)
		sum += i;

	cout << input1 << "���� " << input2 << "������ ���� " << sum << "�Դϴ�.\n";
	return 0;
}
