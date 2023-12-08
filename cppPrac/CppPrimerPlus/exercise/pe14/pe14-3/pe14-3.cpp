// pe14-3.cpp -- Queue �������̽��� ����Ѵ�
#include <iostream>
using namespace std;
#include <cstdlib>		// rand()�� srand()�� ����ϱ� ����
#include <ctime>		// time()�� ����ϱ� ����
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);	// �� ���� �����ߴ°�?

template <class Type>

int main()
{
// �ʿ��� ���� ������ �غ��Ѵ�
	srand(time(0));			// rand()�� ������ �ʱ�ȭ

	cout << "��� ����: ���� ������ �ڵ� ���ޱ�\n";
	cout << "ť�� �ִ� ���̸� �Է��Ͻʽÿ�: ";
	int qs;
	cin >> qs;
	Queue<Item> line(qs);			// line ť���� �ִ� qs����� ����� �� �ִ�

	cout << "�ùķ��̼� �ð� ���� �Է��Ͻʽÿ�: ";
	int hours;				// �ùķ��̼� �ð� ��
	cin >> hours;
	// �ùķ��̼��� 1�п� 1�ֱ⸦ �����Ѵ�
	long cyclelimit = MIN_PER_HR * hours;	// �ùķ��̼� �ֱ� ��

	cout << "�ð��� ��� �� ���� �Է��Ͻʽÿ�: ";
	double perhour;			// �ð��� ��� �� ��
	cin >> perhour;
	double min_per_cust; 	// ��� �� ���� ����(�� ����)
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;				// �� �� ������
	long turnaways = 0;		// ť�� ���� ���� �߱��� ���� �� ��
	long customers = 0;		// ť�� ���� �� �� ��
	long served = 0;		// �ùķ��̼ǿ��� �ŷ��� ó���� �� ��
	long sum_line = 0;		// ť�� ���� ����
	int wait_time = 0;		// �ڵ� ���ޱⰡ �� ������ ����ϴ� �ð�
	long line_wait = 0;		// ������ ���� ���� ����� ���� �ð�

// �ùķ��̼��� �����Ѵ�
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
				line.enqueue(temp);		// ť�� �� ���� �߰��Ѵ�
			}
		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);			// ���� ���� �޴´�
			wait_time = temp.ptime();	// wait_time�� �����Ѵ�
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.queuecount();
	}

// �ùķ��̼� ����� ����Ѵ�
	if (customers > 0)
	{
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

	return 0;
}

//  x�� �� ���� ��� �ð� �����̴�(�� ����)
//  �� �ð� ���� ���� �����ϸ� ���ϰ��� true�̴�
bool newcustomer(double x)
{
	return (rand() * x / RAND_MAX < 1);
}