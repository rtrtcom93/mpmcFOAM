// usevector.cpp -- 11�� ���α׷��� ����
// vector.h, vector.cpp ���ϰ� �Բ� �������Ѵ�
#include <iostream>
#include <cstdlib>		// rand(), srand()�� ����
#include <ctime>		// time()�� ����
using namespace std;
#include "vector.h"
int main()
{
	using VECTOR::Vector;
	srand(time(0));		// ���� �߻��⿡ ���� �Ѹ���
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int trial_num;
	unsigned long min;
	unsigned long max;
	unsigned long total = 0;
	cout << "�õ��� ȸ���� �Է��Ͻʽÿ�: ";
	cin >> trial_num;
	cout << "��ǥ �Ÿ��� �Է��Ͻʽÿ�: ";
	cin >> target;
	cout << "������ �Է��Ͻʽÿ�: ";
	cin >> dstep;
	for (int i = 0; i < trial_num; i++)
	{
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;
		}
		cout << "\n" << i + 1 << "�� ° �õ�\n";
		cout << steps << " ���� ���� �� ������ ���� ��ġ:\n";
		cout << result << "\n";
		result.polar_mode();
		cout << " �Ǵ�\n" << result << "\n";
		cout << "������ ��տ��� ��� ��� �Ÿ� = "
			 << result.magval()/steps << "\n";
		if (i == 0)
			min = max = steps;
		else	// �ּ� ���� ���� �ִ� ���� �� �����ϱ�
		{
			if (min > steps)
				min = steps;
			if (max < steps)
				max = steps;
		}
		total += steps;
		steps = 0;
		result.set(0.0, 0.0);
	}

	cout << "\n" << trial_num << "�� �õ����� ��\n";
	cout << "�ּ� ���� ��: " << min << "\n"
		 << "�ִ� ���� ��: " << max << "\n";
	cout << "��� ���� ��: " << total / trial_num << "\n";

	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
