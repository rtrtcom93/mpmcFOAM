// pe02-07.cpp -- 시간과 분을 입출력한다
#include <iostream>
using namespace std; 

void hourMin(int hour, int min);
void main()
{
	int min, hour;

	cout << "시간 값을 입력하시오: ";
	cin >> hour;
	cout << "분 값을 입력하시오: ";
	cin >> min;

	hourMin(hour, min);
}

void hourMin(int hour, int min)
{
	cout << "시각: " << hour << ":" << min;
}
