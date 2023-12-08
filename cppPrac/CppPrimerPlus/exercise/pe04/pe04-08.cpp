// pe04-08.cpp -- 동적 구조체 선언, 멤버 입력, 멤버 출력
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
	pizza * ppizza = new pizza;	// 동적 구조체를 지시하는 포인터 선언
	// 구조체 멤버의 값을 입력한다
	cout << "피자의 지름을 cm 단위로 입력하십시오: ";
	cin >> ppizza->diameter;	// 수치 멤버를 입력한다
	cin.get();			// 개행 문자를 읽어 허공에 버린다
	cout << "피자 회사의 이름을 입력하십시오: ";
	cin.getline(ppizza->name, 30);	
	cout << "피자의 중량을 g 단위로 입력하십시오: ";
	cin >> ppizza->weight;
	cin.get();
	// 동적 구조체 멤버의 값을 출력한다
	cout << "제조사 : " << ppizza->name << endl;
	cout << "지  름 : " << ppizza->diameter << " cm" << endl;
	cout << "중  량 : " << ppizza->weight << " g" << endl;
	delete ppizza;
	return 0;
}
