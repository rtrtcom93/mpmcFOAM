// move.cpp -- Move Ŭ���� �޼��� ����
#include <iostream>
using namespace std;
#include "move.h"
	
// ������: x, y�� a, b�� �����Ѵ�
Move::Move(double a, double b)
{
	x = a;
	y = b;
}

// ������ x, y ���� ����Ѵ�
void Move::showmove() const
{
	cout << "(x, y) = (" << x << ", " << y << ")" << endl;
}

// �� �Լ��� ȣ���� ��ü�� x�� m�� x�� ���Ͽ� ���ο� x�� ��´�
// �׸��� ȣ���� ��ü�� y�� m�� y�� ���Ͽ� ���ο� y�� ��´�
// ���ο� x, y ������ �ʱ�ȭ�� ���ο� Move ��ü�� �����Ͽ� �����Ѵ�
Move Move::add(const Move & m) const
{
	return Move(x + m.x, y + m.y);
}

// x, y�� a, b�� �缳���Ѵ�
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
