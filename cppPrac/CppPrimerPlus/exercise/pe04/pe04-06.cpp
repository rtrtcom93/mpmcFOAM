// pe04-06.cpp -- 구조체의 배열을 선언하고 초기화한 다음, 각 구조체의 내용을 출력한다
#include <iostream>
using namespace std;
struct CandyBar		// 구조체 템플릿
{
	char name[20];	// 캔디바의 상표명
	double weight;	// 캔디바의 중량
	int calory;		// 캔디바의 칼로리
};
int main()
{
	CandyBar snack[3] = {{"Mocha Munch", 2.3, 350},		// 구조체 배열의 선언과 초기화
						 {"Green Melon", 2.7, 320},
						 {"Sweet Peanut", 2.5, 330}};
	
	cout << "인기 1위 캔디바" << endl;
	cout << "상표명 : " << snack[0].name << endl;
	cout << "중  량 : " << snack[0].weight << " g" << endl;
	cout << "칼로리 : " << snack[0].calory << " cal" << endl;
	cout << "\n";
	cout << "인기 2위 캔디바" << endl;
	cout << "상표명 : " << snack[1].name << endl;
	cout << "중  량 : " << snack[1].weight << " g" << endl;
	cout << "칼로리 : " << snack[1].calory << " cal" << endl;
	cout << "\n";
	cout << "인기 3위 캔디바" << endl;
	cout << "상표명 : " << snack[2].name << endl;
	cout << "중  량 : " << snack[2].weight << " g" << endl;
	cout << "칼로리 : " << snack[2].calory << " cal" << endl;
	return 0;
}
