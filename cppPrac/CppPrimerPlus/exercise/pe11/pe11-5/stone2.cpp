// stone2.cpp -- 11�� ���α׷��� ���� 5
// stonewt2.h, stonewt2.cpp�� �Բ� �������Ѵ�
#include <iostream>
using namespace std;
#include "stonewt2.h"

int main()
{
	Stonewt stn1(99.2);
	Stonewt stn2(30.9, 's');
	Stonewt stn3(14, 3.5, 'd');

	cout << "��1 ��ü: " << stn1 << "\n";
	cout << "��2 ��ü: " << stn2 << "\n";
	cout << "��3 ��ü: " << stn3 << "\n";

	Stonewt result;
	result = stn1 + stn2;
	result.setmode('s');
	cout << "stn1 + stn2 = " << result << "(���� �Ŀ�� ���� ����)\n";	
	result = stn1 - stn2;
	result.setmode('p');
	cout << "stn1 - stn2 = " << result << "(���� �Ŀ�� ����)\n";
	result = stn1 * stn2;
	result.setmode('d');
	cout << "stn1 * stn2 = " << result << "(�ε��Ҽ��� �Ŀ�� ����)\n";
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
