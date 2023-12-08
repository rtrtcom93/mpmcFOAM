// pe03-07.cpp -- 유럽 스타일(100킬로미터당 리터 수)로 묻고, 미국 스타일(갤런당 마일 수)로 변환한다
#include<iostream>
using namespace std;
int main()
{
	const double MILES_100KM = 62.14;
	const double LITERS_GALLON = 3.875;
	double liters_100km, mpg;
	cout << "유럽 스타일인 100킬로미터당 리터 수로 주행 거리를 입력하십시오: ";
	cin >> liters_100km;
	mpg = MILES_100KM * LITERS_GALLON / liters_100km;
	cout << "미국 스타일로 주행 거리는 갤런당 " << mpg << "마일입니다\n";
	return 0;
}
