// pe04-06.cpp -- ����ü�� �迭�� �����ϰ� �ʱ�ȭ�� ����, �� ����ü�� ������ ����Ѵ�
#include <iostream>
using namespace std;
struct CandyBar		// ����ü ���ø�
{
	char name[20];	// ĵ����� ��ǥ��
	double weight;	// ĵ����� �߷�
	int calory;		// ĵ����� Į�θ�
};
int main()
{
	CandyBar snack[3] = {{"Mocha Munch", 2.3, 350},		// ����ü �迭�� ����� �ʱ�ȭ
						 {"Green Melon", 2.7, 320},
						 {"Sweet Peanut", 2.5, 330}};
	
	cout << "�α� 1�� ĵ���" << endl;
	cout << "��ǥ�� : " << snack[0].name << endl;
	cout << "��  �� : " << snack[0].weight << " g" << endl;
	cout << "Į�θ� : " << snack[0].calory << " cal" << endl;
	cout << "\n";
	cout << "�α� 2�� ĵ���" << endl;
	cout << "��ǥ�� : " << snack[1].name << endl;
	cout << "��  �� : " << snack[1].weight << " g" << endl;
	cout << "Į�θ� : " << snack[1].calory << " cal" << endl;
	cout << "\n";
	cout << "�α� 3�� ĵ���" << endl;
	cout << "��ǥ�� : " << snack[2].name << endl;
	cout << "��  �� : " << snack[2].weight << " g" << endl;
	cout << "Į�θ� : " << snack[2].calory << " cal" << endl;
	return 0;
}
