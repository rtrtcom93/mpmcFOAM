// pe07-06.cpp
#include <iostream>
using namespace std;
const int Max = 9;

int Fill_array(double array[], int maxcount);
void Show_array(double array[], int count);
void Reverse_array(double array[], int count);

int main()
{
	double array[Max];
	int count = Fill_array(array, Max);
	Show_array(array, count);
	Reverse_array(array, count);
	Show_array(array, count);
	Reverse_array(array + 1, count - 2);
	Show_array(array, count);
	return 0;
}

int Fill_array(double array[], int maxcount)
{
	int count = 0;
	for (int i = 0; i < maxcount; i++) {
		cout << i + 1 << "번째 원소: ";
		if (!(cin >> array[i]))
			break;
		count++;
	}
	return count;
}

void Show_array(double array[], int count)
{
	for (int i = 0; i < count; i++)
		cout << array[i] << "\t";
	cout << endl;
}

void Reverse_array(double array[], int count)
{
	int i, j, temp;
	for (i = 0, j = count - 1; i < j; i++, j--) {
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}
