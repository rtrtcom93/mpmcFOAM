// pe04-08.cpp -- ���� ����ü ����, ��� �Է�, ��� ���
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
	pizza * ppizza = new pizza;	// ���� ����ü�� �����ϴ� ������ ����
	// ����ü ����� ���� �Է��Ѵ�
	cout << "������ ������ cm ������ �Է��Ͻʽÿ�: ";
	cin >> ppizza->diameter;	// ��ġ ����� �Է��Ѵ�
	cin.get();			// ���� ���ڸ� �о� ����� ������
	cout << "���� ȸ���� �̸��� �Է��Ͻʽÿ�: ";
	cin.getline(ppizza->name, 30);	
	cout << "������ �߷��� g ������ �Է��Ͻʽÿ�: ";
	cin >> ppizza->weight;
	cin.get();
	// ���� ����ü ����� ���� ����Ѵ�
	cout << "������ : " << ppizza->name << endl;
	cout << "��  �� : " << ppizza->diameter << " cm" << endl;
	cout << "��  �� : " << ppizza->weight << " g" << endl;
	delete ppizza;
	return 0;
}
