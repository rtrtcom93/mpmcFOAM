// pe08-06.cpp
#include <iostream>
using namespace std;
#include <cstring>		// strlen()을 사용하기 위해

template <typename T>
T maxn(T arr[], int count);

template <> char * maxn(char * pstr[], int count);	// 특수화

int main()
{
	int ints[6] = { 123, 431, 231, 560, 323, 212 };
	double dbls[4] = { 3.71, 5.84, 37.8, 5.59 };
	char * pstr[5] = 
	{
		"Seong-il Yoon",
		"Technical Communication Laboratory",
		"Technical Editor",
		"C++ Primer Plus Fourth Edition",
		"Correctness is another name of TCL"
	};
	cout << "가장 큰 int 값: " << maxn(ints, 6) << endl;
	cout << "가장 큰 double 값: " << maxn(dbls, 4) << endl;
	cout << "가장 긴 문자열: " << maxn(pstr, 5) << endl;
	return 0;
}

template <typename T>
T maxn(T arr[], int count)
{
	T max = arr[0];
	for (int i = 1; i < count; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

template <> char * maxn(char * pstr[], int count)
{
	char * maxpt = pstr[0];
	for (int i = 1; i < count; i++)
	{
		if (strlen(pstr[i]) > strlen(maxpt))
			maxpt = pstr[i];
	}
	return maxpt;
}
