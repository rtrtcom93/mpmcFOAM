// pe04-09.cpp -- 구조체 배열을 동적으로 할당하고, 초기화한 다음, 각 구조체의 내용을 출력한다
#include <iostream>
#include <cstring>	// 또는 string.h
using namespace std;
struct CandyBar		// 구조체 템플릿
{
	char name[20];	// 캔디바의 상표명
	double weight;	// 캔디바의 중량
	int calory;	// 캔디바의 칼로리
};
int main()
{
	CandyBar * pCandyBar = new CandyBar [3];	// 동적 구조체 배열에 메모리 할당

	// 동적 구조체 배열의 초기화
	strcpy(pCandyBar[0].name, "Mocha Munch");
	pCandyBar[0].weight = 2.3;
	pCandyBar[0].calory = 350;
	strcpy(pCandyBar[1].name, "Green Melon");
	pCandyBar[1].weight = 2.7;
	pCandyBar[1].calory = 320;
	strcpy(pCandyBar[2].name, "Sweet Peanut");
	pCandyBar[2].weight = 2.5;
	pCandyBar[2].calory = 330;
	
	cout << "인기 1위 캔디바" << endl;
	cout << "상표명 : " << pCandyBar[0].name << endl;
	cout << "중  량 : " << pCandyBar[0].weight << " g" << endl;
	cout << "칼로리 : " << pCandyBar[0].calory << " cal" << endl;
	cout << "\n";
	cout << "인기 2위 캔디바" << endl;
	cout << "상표명 : " << pCandyBar[1].name << endl;
	cout << "중  량 : " << pCandyBar[1].weight << " g" << endl;
	cout << "칼로리 : " << pCandyBar[1].calory << " cal" << endl;
	cout << "\n";
	cout << "인기 3위 캔디바" << endl;
	cout << "상표명 : " << pCandyBar[2].name << endl;
	cout << "중  량 : " << pCandyBar[2].weight << " g" << endl;
	cout << "칼로리 : " << pCandyBar[2].calory << " cal" << endl;
	delete [] pCandyBar;
	return 0;
}
