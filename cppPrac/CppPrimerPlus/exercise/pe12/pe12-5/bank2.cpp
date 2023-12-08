// bank2.cpp -- Queue �������̽��� ����Ѵ�
#include <iostream>
using namespace std;
#include <cstdlib>		// rand()�� srand()�� ����ϱ� ����
#include <ctime>		// time()�� ����ϱ� ����
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);	// �� ���� �����ߴ°�?

int main()
{
// �ʿ��� ���� ������ �غ��Ѵ�
	srand(time(0));			// rand()�� ������ �ʱ�ȭ

	cout << "��� ����: ���� ������ �ڵ� ���ޱ�\n";
	cout << "ť�� �ִ� ���̸� �Է��Ͻʽÿ�: ";
	int qs;
	cin >> qs;

	int hours;			// �ùķ��̼� �ð� ��
	while (1)
	{
		cout << "�ùķ��̼� �ð� ���� �Է��Ͻʽÿ�(>= 100): ";
		cin >> hours;
		if (hours >= 100)
			break;
	}
	// �ùķ��̼��� 1�п� 1�ֱ⸦ �����Ѵ�
	long cyclelimit = MIN_PER_HR * hours;	// �ùķ��̼� �ֱ� ��

	double perhour;		// �ð��� ��� �� ��
	double min_per_cust; 	// ��� �� ���� ����(�� ����)
	double avg_wait_time;	// ��� ��� �ð�(�� ����)

	Item temp;			// �� �� ������
	long turnaways;			// ť�� ���� ���� �߱��� ���� �� ��
	long customers;			// ť�� ���� �� �� ��
	long served;			// �ùķ��̼ǿ��� �ŷ��� ó���� �� ��
	long sum_line;			// ť�� ���� ����
	int wait_time;			// �ڵ� ���ޱⰡ �� ������ ����ϴ� �ð�
	long line_wait;			// ������ ���� ���� ����� ���� �ð�
		
	for (perhour = 1; avg_wait_time < 1; perhour++)		// ��� ��� �ð��� 1�� �̻��� �Ǹ� ������ Ż���Ѵ�
	{
		Queue line(qs);		// line ť���� �ִ� qs����� ����� �� �ִ�

		min_per_cust = MIN_PER_HR / perhour;
		turnaways = 0;
		customers = 0;
		served = 0;
		sum_line = 0;
		wait_time = 0;
		line_wait = 0;

		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))	// �� ���� �����ߴ�
			{
				if (line.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);		// cycle�� ���� �ð��� �ȴ�
					line.enqueue(temp); 	// ť�� �� ���� �߰��Ѵ�
				}
			}
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue(temp); 		// ���� ���� �޴´�
				wait_time = temp.ptime();	// wait_time�� �����Ѵ�
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;
			sum_line += line.queuecount();
		}

		if (customers > 0)
		{
			cout << "-------------------------------\n";
			cout << "  �ð��� ��� �� ��: " << (int)perhour << '\n';
			cout << " ť�� ���� �� �� ��: " << customers << '\n';
			cout << "�ŷ��� ó���� �� ��: " << served << '\n';
			cout << "  �߱��� ���� �� ��: " << turnaways << '\n';
			cout << "       ��� ť�� ����: ";
			cout.precision(2);
			cout.setf(ios_base::fixed, ios_base::floatfield);
			cout.setf(ios_base::showpoint);
			cout << (double) sum_line / cyclelimit << '\n';
			cout << "       ��� ��� �ð�: "
				 << (double) line_wait / served << "��\n";
		}
		else
			cout << "���� �� �� �����ϴ�!\n";
		
		avg_wait_time = (double) line_wait / served;
	}

	cout << "\n" << "�ð��� ��� �� ���� " << (int)perhour - 1 << "�� �̻��� �Ǹ�,\n"
		 << "��� ��� �ð��� 1���� �ʰ��ϰ� �˴ϴ�.\n";

	return 0;
}

//  x�� �� ���� ��� �ð� �����̴�(�� ����)
//  �� �ð� ���� ���� �����ϸ� ���ϰ��� true�̴�
bool newcustomer(double x)
{
	return (rand() * x / RAND_MAX < 1);
}