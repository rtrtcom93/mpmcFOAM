// pe04-05.cpp -- 구조체를 선언하고 초기화한 다음, 구조체의 멤버를 출력한다
#include <iostream>
using namespace std;
struct CandyBar		// 구조체 템플릿
{
	char name[20];	// 캔디바의 상표명
	double weight;	// 캔디바의 중량
	int calory;	// 캔디바의 칼로리
};
int main()
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};	// 구조체 변수의 선언과 멤버 초기화
	cout << "달콤한 캔디바 " << endl;
	cout << "상표명 : " << snack.name << endl;	// 구조체 멤버의 출력
	cout << "중  량 : " << snack.weight << " g" << endl;
	cout << "칼로리 : " << snack.calory << " cal" << endl;
	return 0;
}
