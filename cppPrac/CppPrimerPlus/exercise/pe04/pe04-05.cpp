// pe04-05.cpp -- ����ü�� �����ϰ� �ʱ�ȭ�� ����, ����ü�� ����� ����Ѵ�
#include <iostream>
using namespace std;
struct CandyBar		// ����ü ���ø�
{
	char name[20];	// ĵ����� ��ǥ��
	double weight;	// ĵ����� �߷�
	int calory;	// ĵ����� Į�θ�
};
int main()
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};	// ����ü ������ ����� ��� �ʱ�ȭ
	cout << "������ ĵ��� " << endl;
	cout << "��ǥ�� : " << snack.name << endl;	// ����ü ����� ���
	cout << "��  �� : " << snack.weight << " g" << endl;
	cout << "Į�θ� : " << snack.calory << " cal" << endl;
	return 0;
}
