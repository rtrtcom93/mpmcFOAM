// pe13-03.cpp -- �߻�ȭ ���� Ŭ������ �����ϴ� ����
// dmaabc.cpp�� �Բ� �������Ѵ�
#include <iostream>
using namespace std;
#include "dmaabc.h"
const int GOODS = 4;
const int LEN = 40;
const int COLORS = 20;
const int STYLES = 20;

int main()
{
	dmaABC * p_goods[GOODS];
   
	int i;
	for (i = 0; i < GOODS; i++)
	{
		char tlabel[LEN];
		int trating;
		char tcolor[COLORS];
		char tstyle[STYLES];
		char kind;

		cout << "��ǥ�� �Է��Ͻʽÿ�: ";
		cin.getline(tlabel, LEN);
		cout << "����� �Է��Ͻʽÿ�: ";
		cin >> trating;
		cout << "baseDMA ��ü�� 1, "
			 << "lacksDMA ��ü�� 2, hasDMA ��ü�� 3�� �Է��Ͻʽÿ�: ";
		while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
			cout <<"1, 2, 3 �߿��� �ϳ��� �Է��Ͻʽÿ�: ";
		while (cin.get() != '\n')
			continue;
		if (kind == '1')
		{
			p_goods[i] = new baseDMA(tlabel, trating);
		}
		else if (kind == '2')
		{
			cout << "������ �Է��Ͻʽÿ�: ";
			cin.getline(tcolor, COLORS);
			p_goods[i] = new lacksDMA(tcolor, tlabel, trating);
		}
		else
		{
			cout << "��Ÿ���� �Է��Ͻʽÿ�: ";
			cin.getline(tstyle, STYLES);
			p_goods[i] = new hasDMA(tstyle, tlabel, trating);
		}
	}
	cout << endl;
	for (i = 0; i < GOODS; i++)
	{
		p_goods[i]->ViewGoods();
		cout << endl;
	}
              
	for (i = 0; i < GOODS; i++)
	{
		delete p_goods[i];	// �޸𸮸� �����Ѵ�
	}
	cout << "���α׷��� �����մϴ�.\n";         
 
	return 0; 
}
