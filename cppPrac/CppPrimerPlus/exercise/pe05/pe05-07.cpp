// pe05-07.cpp -- new를 사용하여 동적 구조체 배열 만들기
#include <iostream>
using namespace std;
struct car
{
	char Maker[20];		// 제작업체
	int MakeYear;		// 제작연도
};
int main()
{
	int count;

	cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
	(cin >> count).get();

	car * CarList = new car[count];

	for (int i = 0; i < count; i++) 
	{
		cout << "자동차 #" << i + 1 << endl;
		cout << "제작업체: ";
		cin.getline(CarList[i].Maker, 20);
		cout << "제작연도: ";
		(cin >> CarList[i].MakeYear).get();
	}

	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다." << endl;
	for (i = 0; i < count; i++) {
		cout << CarList[i].MakeYear << "년형 " << CarList[i].Maker << endl;
	}

	delete [] CarList;
	return 0;
}
