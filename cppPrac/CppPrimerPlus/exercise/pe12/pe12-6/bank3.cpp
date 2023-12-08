// bank3.cpp -- Queue �������̽��� ����Ѵ�
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

	double perhour;			// �ð��� ��� �� ��
	double min_per_cust; 	// ��� �� ���� ����(�� ����)
	double avg_wait_time;	// ��� ��� �ð�(�� ����)

	Item temp;					// �� �� ������
	long turnaways;					// ť�� ���� ���� �߱��� ���� �� ��
	long customers;					// ť�� ���� �� �� ��
	long served1, served2;			// ��1 ť, ��2 ť���� �ŷ��� ó���� �� ��
	long sum_line1, sum_line2;		// ��1 ť, ��2 ť�� ���� ����
	int wait_time1, wait_time2;		// ��1 �ڵ� ���ޱ�, ��2 �ڵ� ���ޱⰡ �� ������ ����ϴ� �ð�
	long line_wait1, line_wait2;	// ��1 ť, ��2 ť���� ������ ���� ���� ����ϴ� ���� �ð�
		
	for (perhour = 1; avg_wait_time < 1; perhour++)		// ��� ��� �ð��� 1�� �̻��� �Ǹ� ������ Ż���Ѵ�
	{
		Queue line1(qs);	// line1, line2 ť���� �ִ� qs����� ����� �� �ִ�
		Queue line2(qs);

		min_per_cust = MIN_PER_HR / perhour;
		turnaways = 0;
		customers = 0;
		served1 = served2 = 0;
		sum_line1 = sum_line2 = 0;
		wait_time1 = wait_time2 = 0;
		line_wait1 = line_wait2 = 0;

		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))		// �� ���� �����ߴ�
			{
				if (line1.isfull() && line2.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);			// cycle�� ���� �ð��� �ȴ�
					if (line1.queuecount() < line2.queuecount())
						line1.enqueue(temp); 	// ��1 ť�� �� ���� �߰��Ѵ�
					else
						line2.enqueue(temp);	// ��2 ť�� �� ���� �߰��Ѵ�
				}
			}
			if (wait_time1 <= 0 && !line1.isempty())
			{
				line1.dequeue(temp); 			// ��1 ť���� ���� ���� �޴´�
				wait_time1 = temp.ptime();		// wait_time1�� �����Ѵ�
				line_wait1 += cycle - temp.when();
				served1++;
			}
			if (wait_time2 <= 0 && !line2.isempty())
			{
				line2.dequeue(temp); 			// ��2 ť���� ���� ���� �޴´�
				wait_time2 = temp.ptime();		// wait_time2�� �����Ѵ�
				line_wait2 += cycle - temp.when();
				served2++;
			}

			if (wait_time1 > 0)
				wait_time1--;
			if (wait_time2 > 0)
				wait_time2--;

			sum_line1 += line1.queuecount();
			sum_line2 += line1.queuecount();
		}

		if (customers > 0)
		{
			cout << "-------------------------------\n";
			cout << "  �ð��� ��� �� ��: " << (int) perhour << '\n';
			cout << " ť�� ���� �� �� ��: " << customers << '\n';
			cout << "�ŷ��� ó���� �� ��: " << served1 + served2 << '\n';
			cout << "  �߱��� ���� �� ��: " << turnaways << '\n';
			cout << "       ��� ť�� ����: ";
			cout.precision(2);
			cout.setf(ios_base::fixed, ios_base::floatfield);
			cout.setf(ios_base::showpoint);
			cout << (double) ((sum_line1 + sum_line2) / 2) / cyclelimit << '\n';
			cout << "       ��� ��� �ð�: "
				 << (double) ((line_wait1 + line_wait2) / 2) / (served1 + served2) << "��\n";
		}
		else
			cout << "���� �� �� �����ϴ�!\n";
		
		avg_wait_time = (double) ((line_wait1 + line_wait2) / 2) / (served1 + served2);
	}

	cout << "\n" << "�ڵ� ���ޱ⸦ 2�� ��ġ���� ��쿡,\n"
		 << "�ð��� ��� �� ���� " << (int)perhour - 1 << "�� �̻��� �Ǹ�,\n"
		 << "��� ��� �ð��� 1���� �ʰ��ϰ� �˴ϴ�.\n";

	return 0;
}

//  x�� �� ���� ��� �ð� �����̴�(�� ����)
//  �� �ð� ���� ���� �����ϸ� ���ϰ��� true�̴�
bool newcustomer(double x)
{
	return (rand() * x / RAND_MAX < 1);
}