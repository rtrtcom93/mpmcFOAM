// pe08-02.cpp
#include <iostream>
#include <cstring>		// strcpy() 함수를 사용하기 위해
using namespace std;

struct CandyBar			// 구조체 템플릿
{
	char name[100];		// 캔디바의 상표명
	double weight;		// 캔디바의 중량
	int calory;		// 캔디바의 칼로리
};

void Set(CandyBar & MyBar, char * bname = "Millennium Munch", double wt = 2.85, int cal = 350);
void Show(const CandyBar & MyBar);

int main()
{
	CandyBar MyBar;
	Set(MyBar);
	Show(MyBar);
	Set(MyBar, "Green Melon");
	Show(MyBar);
	Set(MyBar, "Sweet Peanut", 2.5);
	Show(MyBar);
	Set(MyBar, "Mocha Munch", 2.3, 320);
	Show(MyBar);
	return 0;
}

void Set(CandyBar & MyBar, char * bname, double wt, int cal)
{
	strcpy(MyBar.name, bname);
	MyBar.weight = wt;
	MyBar.calory = cal;
}

void Show(const CandyBar & MyBar)
{
	cout << "상표명 : " << MyBar.name << endl;
	cout << "중  량 : " << MyBar.weight << endl;
	cout << "칼로리 : " << MyBar.calory << endl;
	cout << endl;
}
