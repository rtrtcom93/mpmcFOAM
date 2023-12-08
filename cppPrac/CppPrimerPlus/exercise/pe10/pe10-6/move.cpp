// move.cpp -- Move 클래스 메서드 정의
#include <iostream>
using namespace std;
#include "move.h"
	
// 생성자: x, y를 a, b로 설정한다
Move::Move(double a, double b)
{
	x = a;
	y = b;
}

// 현재의 x, y 값을 출력한다
void Move::showmove() const
{
	cout << "(x, y) = (" << x << ", " << y << ")" << endl;
}

// 이 함수는 호출한 객체의 x에 m의 x를 더하여 새로운 x를 얻는다
// 그리고 호출한 객체의 y에 m의 y를 더하여 새로운 y를 얻는다
// 새로운 x, y 값으로 초기화된 새로운 Move 객체를 생성하여 리턴한다
Move Move::add(const Move & m) const
{
	return Move(x + m.x, y + m.y);
}

// x, y를 a, b로 재설정한다
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
