// pe4-2.cpp -- string 객체에 문자열 저장하기
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string name;
	string dessert;

	cout << "이름을 입력하십시오:\n";
	getline(cin, name);  // 개행 문자가 있는 곳까지 읽는다
	cout << "좋아하는 디저트를 입력하십시오:\n";
	getline(cin, dessert);
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
	return 0;
}
