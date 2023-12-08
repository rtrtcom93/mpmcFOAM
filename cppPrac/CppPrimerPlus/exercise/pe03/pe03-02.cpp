// pe03-02.cpp -- 비만 지수 BMI를 구한다
#include <iostream>
using namespace std;
int main()
{
	double height_feet;		// 키에서 인치 단위를 뺀 피트 단위 부분
	double height_remainder_inches;		// 키에서 나머지 인치 단위 부분
	double weight_pounds;			// 파운드 단위의 체중
	const double INCHES_FEET = 12;		// 피트당 인치
	const double METERS_INCH = 0.0254;	// 인치당 미터
	const double KILOGRAMS_POUND = 2.2;	// 파운드당 킬로그램
	
	cout << "키를 인치 단위는 빼고 피트 단위만 입력하십시오: ";
	cin >> height_feet;
	cout << "키의 나머지를 인치 단위로 입력하십시오: ";
	cin >> height_remainder_inches;
	cout << "체중을 파운드 단위로 입력하십시오: ";
	cin >> weight_pounds;
	double height_meter = (height_feet * INCHES_FEET + height_remainder_inches) * METERS_INCH;	// 미터 단위의 키
	double mass_kilogram = weight_pounds * KILOGRAMS_POUND;									// 킬로그램 단위의 질량
	double bmi = mass_kilogram / (height_meter * height_meter);								// 비만 지수 공식
	cout << "당신의 비만 지수(BMI)는 " << bmi << "입니다.\n";
	return 0;
}
