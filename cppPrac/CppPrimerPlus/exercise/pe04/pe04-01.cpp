// pe04-01.cpp -- �̸�, ����, ���̸� Ű����κ��� �о�鿩 �ٽ� ����Ѵ�
#include <iostream>
using namespace std;
struct student
{
	char firstName[20];
	char lastName[20];
	char grade;
	int age;
};
int main()
{
	student Std;
	cout << "���� �۽�Ʈ ����(�̸�): ";
	cin.getline(Std.firstName, 20);
	cout << "���� ��Ʈ ����(��): ";
	cin.getline(Std.lastName, 20);
	cout << "�л��� ���ϴ� ����: ";
	cin  >> Std.grade;
	cout << "����: ";
	cin  >> Std.age;

	cout << "����: " << Std.lastName << ", " << Std.firstName << endl;
	cout << "����: " << (char) (Std.grade + 1) << endl;
	cout << "����: " << Std.age << endl;

	return 0;
}
