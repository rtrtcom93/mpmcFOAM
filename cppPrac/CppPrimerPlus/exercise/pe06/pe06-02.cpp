// pe06-02.cpp
#include <iostream>
using namespace std;
const int Max = 10;
int main()
{
	double donation[Max];	// ��α��� �����ϴ� double���� �迭

	cout << "��α��� �Է��Ͻʽÿ�.\n"
		 << "(�������� ���ڸ� �Է�)\n";
	cout << "��α� #1: ";
	int i = 0;
	while (i < Max && cin >> donation[i])
	{
		if (++i < Max)
			cout << "��α� #" << i+1 << ": ";
	}

// ��� ��αݰ� ��� �̻� ��α��� ������ �����Ѵ�
	double total = 0.0;		// ��α� �Ѿ�
	double average = 0.0;	// ��� ��α�
	int num_over_avg = 0;	// ��� �̻� ��α� ��

	for (int j = 0; j < i; j++)
		total += donation[j];
	if (i == 0)
		cout << "��α��� �����ϴ�.\n";
	else 
	{
		average = total / i;
		cout << "��� ��α��� " << average << "�Դϴ�.\n";
		for (j = 0; j < i; j++)
		{
			if (donation[j] > average)
				num_over_avg++;
		}
		cout << "��պ��� ū ��α��� ���� " << num_over_avg << "�Դϴ�.\n";
	}
	return 0;
}
