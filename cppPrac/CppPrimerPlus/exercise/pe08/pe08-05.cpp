// pe08-05.cpp
#include <iostream>
using namespace std;

template <typename T>
T max5(T arr[], int count);

int main()
{
	int ints[5] = { 123, 431, 231, 560, 323 };
	double dbls[5] = { 3.71, 5.84, 37.8, 5.59, 2.11 };

	cout << "���� ū int ��: " << max5(ints, 5) << endl;
	cout << "���� ū double ��: " << max5(dbls, 5) << endl;
	return 0;
}

template <typename T>
T max5(T arr[], int count)
{
	T max = arr[0];
	
	for (int i = 1; i < count; i++) 
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
