// pe4-2.cpp -- string ��ü�� ���ڿ� �����ϱ�
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string name;
	string dessert;

	cout << "�̸��� �Է��Ͻʽÿ�:\n";
	getline(cin, name);  // ���� ���ڰ� �ִ� ������ �д´�
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�:\n";
	getline(cin, dessert);
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
	return 0;
}