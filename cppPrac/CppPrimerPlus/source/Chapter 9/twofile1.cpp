// twofile1.cpp -- �ܺ� ��ũ�� ���� ��ũ�� ������ ����
#include <iostream>		// twofile2.cpp�� �Բ� �������ؾ� �Ѵ�
int tom = 3;			// �ܺ� ������ �����Ѵ�
int dick = 30;			// �ܺ� ������ �����Ѵ�
static int harry = 300;		// ���� ����, ���� ��ũ

// �Լ� ����
void remote_access();

int main()
{
	using namespace std;
	cout << "main()�� �����ϴ� �� ������ �ּ�:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();
	return 0;
}
