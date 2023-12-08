// pe11-01.cpp -- randwalk.cpp ���α׷� ����� ���Ϸ� �����Ѵ�.
// randwalk1.cpp -- Vector Ŭ������ ����Ѵ�
// vect.cpp ���ϰ� �Բ� �������Ѵ�
#include <iostream>
#include <cstdlib>		// rand(), srand()�� ����
#include <ctime>		// time()�� ����
#include <fstream>
#include <cstdlib>
#include "vect.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));		// ���� �߻��⿡ ���� �Ѹ���
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream fout("randwalk.txt");

	if(!fout.is_open())
	{
		cerr << "����� ���� randwalk.txt ������ �� �� �����ϴ�.\n";
		exit(1);
	}

	cout << "��ǥ �Ÿ��� �Է��Ͻʽÿ�(�������� q): ";
	while (cin >> target)
	{
		cout << "������ �Է��Ͻʽÿ�: ";
		if (!(cin >> dstep))
			break;
		fout << "��ǥ�Ÿ�: " << target << ", ����: " << dstep << endl;
		fout << steps << ": " << result << endl;

		while (result.magval() < target)
		{			
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;			

			fout << steps << ": " << result << endl;
		}
		fout << steps << " ���� �� ������ �� �ִ� ��ġ\n";
		fout << result << endl;
		result.polar_mode();
		fout << " �Ǵ�\n" << result << endl;
		fout << "������ ��տ��� ��� ��� �Ÿ� = "
			 << result.magval()/steps << endl;
		steps = 0;
		result.set(0.0, 0.0);
		cout << "��ǥ �Ÿ��� �Է��Ͻʽÿ�(�������� q): ";
	}
	cout << "���α׷��� �����մϴ�.\n";

	fout.close();
	return 0;
}
