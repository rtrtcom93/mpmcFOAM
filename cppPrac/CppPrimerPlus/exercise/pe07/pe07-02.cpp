// pe07-02.cpp
#include <iostream>
using namespace std;
const int Max = 10;

int inputScore(int scores[], int maxcount);
double calcAvg(int scores[], int count);
int outputScore(int scores[], int count);

int main()
{
	int scorearray[Max];

	int count = inputScore(scorearray, Max);	// ���ھ� �Է�
	outputScore(scorearray, count);			// ���ھ� ���

	return 0;
}

int inputScore(int scores[], int maxcount)
{
	cout << "�������� q�� �Է��Ͻʽÿ�.\n";
	
	cout << "���ھ� #1: ";
	int i = 0;
	while (i < maxcount && cin >> scores[i])
	{
		if (++i < maxcount)
			cout << "���ھ� #" << i+1 << ": ";
	}
	return i;
}

double calcAvg(int scores[], int count)
{
	int sum = 0;
	double avg;

	for (int i = 0; i < count; i++)
		sum += scores[i];
	avg = sum / count;
	return avg;
}

int outputScore(int scores[], int count)
{
	if (count == 0)
	{
		cout << "�Էµ� ���ھ �����ϴ�.\n";
		return 0;
	}
		
	for (int i = 0; i < count; i++)
		cout << scores[i] << "\t";
	cout <<endl;
	cout << "��� ���ھ�: " << calcAvg(scores, count) << endl;
	return 0;
}
