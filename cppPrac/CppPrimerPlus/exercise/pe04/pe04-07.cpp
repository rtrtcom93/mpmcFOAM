//  pe04-07.cpp -- ����ü ����, ��� �Է�, ��� ���
#include <iostream>
using namespace std;
struct pizza			// ����ü ���ø�
{
	char name[30];		// ���� ȸ���� �̸�
	double diameter;	// ������ ����
	double weight;		// ������ �߷�
};
int main()
{
	pizza pizza1;		// ����ü ������ ����
	// ����ü ����� ���� �Է��Ѵ�
	cout << "���� ȸ���� �̸��� �Է��Ͻʽÿ�: ";
	cin.getline(pizza1.name, 30);
	cout << "������ ������ cm ������ �Է��Ͻʽÿ�: ";
	cin >> pizza1.diameter;
	cout << "������ �߷��� g ������ �Է��Ͻʽÿ�: ";
	cin >> pizza1.weight;
	// ����ü ����� ���� ����Ѵ�
	cout << "������ : " << pizza1.name << endl;
	cout << "��  �� : " << pizza1.diameter << " cm" << endl;
	cout << "��  �� : " << pizza1.weight << " g" << endl;
	return 0;
}
