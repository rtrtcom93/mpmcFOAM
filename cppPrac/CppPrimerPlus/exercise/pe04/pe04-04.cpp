// pe04-04.cpp -- �̸�, ���� �Է¹޾� ����Ѵ�
#include <iostream>
#include <string>
using namespace std; 

void main()
{
	string firstName, lastName, str;

	cout << "�۽�Ʈ ����(�̸�)�� �Է��Ͻÿ�: ";
	getline(cin, firstName);
	cout << "��Ʈ ����(��)�� �Է��Ͻÿ�: ";
	getline(cin, lastName);

	str = lastName;
	str.append(", ");
	str.append(firstName);

	cout << "�ϳ��� ���ڿ��� �����: " << str;
}
