// pe04-09.cpp -- ����ü �迭�� �������� �Ҵ��ϰ�, �ʱ�ȭ�� ����, �� ����ü�� ������ ����Ѵ�
#include <iostream>
#include <cstring>	// �Ǵ� string.h
using namespace std;
struct CandyBar		// ����ü ���ø�
{
	char name[20];	// ĵ����� ��ǥ��
	double weight;	// ĵ����� �߷�
	int calory;	// ĵ����� Į�θ�
};
int main()
{
	CandyBar * pCandyBar = new CandyBar [3];	// ���� ����ü �迭�� �޸� �Ҵ�

	// ���� ����ü �迭�� �ʱ�ȭ
	strcpy(pCandyBar[0].name, "Mocha Munch");
	pCandyBar[0].weight = 2.3;
	pCandyBar[0].calory = 350;
	strcpy(pCandyBar[1].name, "Green Melon");
	pCandyBar[1].weight = 2.7;
	pCandyBar[1].calory = 320;
	strcpy(pCandyBar[2].name, "Sweet Peanut");
	pCandyBar[2].weight = 2.5;
	pCandyBar[2].calory = 330;
	
	cout << "�α� 1�� ĵ���" << endl;
	cout << "��ǥ�� : " << pCandyBar[0].name << endl;
	cout << "��  �� : " << pCandyBar[0].weight << " g" << endl;
	cout << "Į�θ� : " << pCandyBar[0].calory << " cal" << endl;
	cout << "\n";
	cout << "�α� 2�� ĵ���" << endl;
	cout << "��ǥ�� : " << pCandyBar[1].name << endl;
	cout << "��  �� : " << pCandyBar[1].weight << " g" << endl;
	cout << "Į�θ� : " << pCandyBar[1].calory << " cal" << endl;
	cout << "\n";
	cout << "�α� 3�� ĵ���" << endl;
	cout << "��ǥ�� : " << pCandyBar[2].name << endl;
	cout << "��  �� : " << pCandyBar[2].weight << " g" << endl;
	cout << "Į�θ� : " << pCandyBar[2].calory << " cal" << endl;
	delete [] pCandyBar;
	return 0;
}
