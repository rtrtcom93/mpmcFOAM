// pe04-03.cpp -- char�� �迭�� ���ڿ� �����ϱ�
#include <iostream>
#include <cstring>
const int SIZE = 20;
int main()
{
	using namespace std;
	char firstName[SIZE];
	char lastName[SIZE];
	char fullName[2*SIZE + 1];

	cout << "�۽�Ʈ ����(�̸�)�� �Է��Ͻÿ�: ";
	cin.getline(firstName,SIZE);
	cout << "��Ʈ ����(��)�� �Է��Ͻÿ�: ";
	cin.getline(lastName,SIZE);
	strncpy(fullName,lastName,SIZE);
	strcat(fullName, ", ");
	strncat(fullName,firstName,SIZE);
	fullName[2*SIZE] = '\0';
	cout << "�ϳ��� ���ڿ��� �����: "
		 << fullName << endl;
	return 0;
}
