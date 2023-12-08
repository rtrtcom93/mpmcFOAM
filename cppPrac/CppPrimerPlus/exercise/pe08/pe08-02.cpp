// pe08-02.cpp
#include <iostream>
#include <cstring>		// strcpy() �Լ��� ����ϱ� ����
using namespace std;

struct CandyBar			// ����ü ���ø�
{
	char name[100];		// ĵ����� ��ǥ��
	double weight;		// ĵ����� �߷�
	int calory;		// ĵ����� Į�θ�
};

void Set(CandyBar & MyBar, char * bname = "Millennium Munch", double wt = 2.85, int cal = 350);
void Show(const CandyBar & MyBar);

int main()
{
	CandyBar MyBar;
	Set(MyBar);
	Show(MyBar);
	Set(MyBar, "Green Melon");
	Show(MyBar);
	Set(MyBar, "Sweet Peanut", 2.5);
	Show(MyBar);
	Set(MyBar, "Mocha Munch", 2.3, 320);
	Show(MyBar);
	return 0;
}

void Set(CandyBar & MyBar, char * bname, double wt, int cal)
{
	strcpy(MyBar.name, bname);
	MyBar.weight = wt;
	MyBar.calory = cal;
}

void Show(const CandyBar & MyBar)
{
	cout << "��ǥ�� : " << MyBar.name << endl;
	cout << "��  �� : " << MyBar.weight << endl;
	cout << "Į�θ� : " << MyBar.calory << endl;
	cout << endl;
}
