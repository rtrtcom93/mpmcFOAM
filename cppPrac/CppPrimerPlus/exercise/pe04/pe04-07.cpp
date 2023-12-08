//  pe04-07.cpp -- 구조체 선언, 멤버 입력, 멤버 출력
#include <iostream>
using namespace std;
struct pizza			// 구조체 템플릿
{
	char name[30];		// 피자 회사의 이름
	double diameter;	// 피자의 지름
	double weight;		// 피자의 중량
};
int main()
{
	pizza pizza1;		// 구조체 변수의 선언
	// 구조체 멤버의 값을 입력한다
	cout << "피자 회사의 이름을 입력하십시오: ";
	cin.getline(pizza1.name, 30);
	cout << "피자의 지름을 cm 단위로 입력하십시오: ";
	cin >> pizza1.diameter;
	cout << "피자의 중량을 g 단위로 입력하십시오: ";
	cin >> pizza1.weight;
	// 구조체 멤버의 값을 출력한다
	cout << "제조사 : " << pizza1.name << endl;
	cout << "지  름 : " << pizza1.diameter << " cm" << endl;
	cout << "중  량 : " << pizza1.weight << " g" << endl;
	return 0;
}
