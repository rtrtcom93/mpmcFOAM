// stone3.cpp -- 11�� ���α׷��� ���� 6
// stonewt3.h, stonewt3.cpp�� �Բ� �������Ѵ�
#include <iostream>
using namespace std;
#include "stonewt3.h"
const int ArSize = 6;
int main()
{
	Stonewt stones[ArSize] = { Stonewt(12, 4), Stonewt(3, 8), Stonewt(27, 6) };
	double input_by_pounds;
	cout << "ó�� 3���� �迭 ���Ҵ� �迭 ���𿡼� �ʱ�ȭ�Ͽ����ϴ�.\n";
	cout << "��� �ִ� ������ �迭 ���ҵ��� �Ŀ�� ������ �����Ͻʽÿ�:\n";
	for (int i = 3; i < ArSize; i++)
	{
		cout << i + 1 << "��° ����: ";
		cin >> input_by_pounds;
		stones[i] = Stonewt(input_by_pounds);
	}
	Stonewt Max = stones[0];
	Stonewt Min = stones[0];
	Stonewt Stone11(11, 0);
	int over11 = 0;
	for (i = 0; i < ArSize; i++)
	{
		if (stones[i] > Max)
			Max = stones[i];
		if (stones[i] < Min)
			Min = stones[i];
		if (stones[i] >= Stone11)
			over11++;
	}
	cout << "�迭�� ��� �ִ� ��� ��ü�� ǥ���մϴ�.\n";
	for (i = 0; i < ArSize; i++)
	{
		cout << "��ü #" << i + 1 << ": ";
		stones[i].show_stn();
	}
	cout << "�ִ� ����: ";
	Max.show_stn();
	cout << "�ּ� ����: ";
	Min.show_stn();
	cout << "11���溸�� ũ�ų� ���� ������ ����: " << over11 << "\n";
	return 0;
}
