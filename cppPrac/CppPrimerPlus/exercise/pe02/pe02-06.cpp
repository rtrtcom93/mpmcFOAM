// pe02-06.cpp -- 광년을 천문 단위로 변환한다
#include <iostream>
using namespace std; 
double convert(double);
int main()
{
	double light_years, astronomical_unit;
	cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
	cin >> light_years;
	astronomical_unit = convert(light_years);
	cout << light_years << " 광년은 " << astronomical_unit << " 천문 단위입니다.\n";
    return 0;
}

double convert(double light_yr)
{
	double astro_unit;			// 천문 단위
	astro_unit = light_yr * 63240;		// 환산 공식
	return astro_unit;
}
