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

	int count = inputScore(scorearray, Max);	// 스코어 입력
	outputScore(scorearray, count);			// 스코어 출력

	return 0;
}

int inputScore(int scores[], int maxcount)
{
	cout << "끝내려면 q를 입력하십시오.\n";
	
	cout << "스코어 #1: ";
	int i = 0;
	while (i < maxcount && cin >> scores[i])
	{
		if (++i < maxcount)
			cout << "스코어 #" << i+1 << ": ";
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
		cout << "입력된 스코어가 없습니다.\n";
		return 0;
	}
		
	for (int i = 0; i < count; i++)
		cout << scores[i] << "\t";
	cout <<endl;
	cout << "평균 스코어: " << calcAvg(scores, count) << endl;
	return 0;
}
