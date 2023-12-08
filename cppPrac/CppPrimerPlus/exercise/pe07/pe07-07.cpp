// pe07-07.cpp
#include <iostream>
using namespace std;
const int Max = 5;

// 함수 원형
double * fill_array(double * begin, double * end);
void show_array(const double * begin, const double * end); 	// 데이터를 보호한다
void revalue(double * begin, double * end);

int main()
{
	double properties[Max];

	double * end = fill_array(properties, properties + Max);
	show_array(properties, end);
	revalue(properties, end);
	show_array(properties, end);
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

double * fill_array(double * begin, double * end)
{
	double temp;
	double * pt;
	int i = 0;
	for (pt = begin; pt < end; pt++)
	{
		cout  << ++i << "번 부동산의 가격: $";
		cin >> temp;
		if (!cin)		// 입력 불량
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "입력 불량; 입력 과정을 끝내겠습니다.\n";
			break;
		}
		else if (temp < 0)	// 루프 탈출을 위한 음수 값
			break;
		*pt = temp;
	}
	return pt;
}

// 다음 함수는 배열을 사용할 수는 있으나, 변경할 수는 없다
void show_array(const double * begin, const double * end)
{
	const double * pt;
	int i = 0;
	for (pt = begin; pt != end; pt++)
	{
		cout << ++i << "번 부동산: $";
		cout << *pt << "\n";
	}
}

// 배열의 각 원소에 재평가율 factor를 곱한다
void revalue(double * begin, double * end)
{
	double * pt;
	cout << "재평가율을 입력하십시오: ";
	double factor;
	cin >> factor;
	for (pt = begin; pt != end; pt++)
		*pt *= factor;
}
