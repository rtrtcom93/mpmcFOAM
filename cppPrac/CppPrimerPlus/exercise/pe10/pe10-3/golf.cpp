// golf.cpp -- Golf 클래스의 메서드 정의
#include <iostream>
#include <cstring>
using namespace std;
#include "golf.h"

// 디폴트 생성자
Golf::Golf()
{
    strcpy(fullname, "no name");
    handicap = 0;
}

// 비대화식 버전:
// 이 생성자는 전달인자로 전달된 값들을 초기화 값으로 사용하는 객체를 생성한다.
// 객체의 fullname 멤버와 handicap 멤버를 전달인자로 설정한다
Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    sethandicap(hc);
}

// 대화식 버전:
// 이 메서드는 사용자에게 이름과 핸디캡을 묻는다
// 객체의 멤버들을 입력된 값으로 설정한다
// 이름이 입력되면 1을 리턴하고, 이름이 빈 문자열이면 0을 리턴한다
int Golf::setgolf(Golf & g)
{
	cout << "골퍼명: ";
    cin.get(g.fullname, Len);

    if (strcmp(g.fullname, "") == 0)
		return 0;

    cout << "핸디캡: ";
	cin >> g.handicap;
	cin.clear();
	while (cin.get() != '\n')
		continue;
	
	*this = Golf(g.fullname, g.handicap);

	return 1;
}

// 이 메서드는 객체의 handicap 멤버를 전달인자로 설정한다
void Golf::sethandicap(int hc)
{
    handicap = hc;
}

// 이 메서드는 객체의 handicap 멤버를 대화식으로 갱신한다
void Golf::updatehandicap()
{
	int hc;
	cout << this->fullname << "의 핸디캡 변경" << endl;
	cout << "새 핸디캡: ";
	cin >> hc;
	handicap = hc;
	cin.clear();
	while (cin.get() != '\n')
		continue;
}

// 이 메서드는 객체의 데이버 멤버들을 출력한다
void Golf::showgolf() const
{
    cout << "골퍼명: " << fullname << endl;
	cout << "핸디캡: " << handicap << endl;
}
