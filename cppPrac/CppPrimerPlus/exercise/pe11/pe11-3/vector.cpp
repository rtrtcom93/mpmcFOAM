// vector.cpp -- Vector Ŭ������ ���� �޼���
#include <iostream>
#include <cmath>
using namespace std;
#include "vector.h"

namespace VECTOR
{
	const double Rad_to_deg = 57.2957795130823;

	// private �޼����
	// x���� y������ ũ�⸦ ����Ѵ�
	void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}

	void Vector::set_ang()
	{
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}

	// �� ��ǥ�� ����Ͽ� x�� �����Ѵ�
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}

	// �� ��ǥ�� ����Ͽ� y�� �����Ѵ�
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	// public �޼����
	Vector::Vector()		// ����Ʈ ������
	{
		x = y = mag = ang = 0.0;
		mode = 'r';
	}

	// form�� r�̸� ���� ��ǥ�κ��� ���͸� �����Ѵ�
	// form�� p�̸� ����ǥ�κ��� ���͸� �����Ѵ�
	Vector::Vector(double n1, double n2, char form)
	{
		mode = form;
		if (form == 'r')
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == 'p')
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Vector()�� ���޵� ��3�� �������ڰ� �߸��Ǿ���.\n";
			cout << "�׷��� ���͸� 0���� �����Ͽ���.\n";
			x = y = mag = ang = 0.0;
			mode = 'r';
		}
	}

	// form�� r�̸� ���� ��ǥ�κ��� ���͸� �����Ѵ�(����Ʈ)
	// form�� p�̸� ����ǥ�κ��� ���͸� �����Ѵ�
	void Vector::set(double n1, double n2, char form)
	{
		mode = form;
		if (form == 'r')
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == 'p')
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Vector()�� ���޵� ��3�� �������ڰ� �߸��Ǿ���.\n";
			cout << "�׷��� ���͸� 0���� �����Ͽ���.\n";
			x = y = mag = ang = 0.0;
			mode = 'r';
		}
	}

	Vector::~Vector()			// �ı���
	{
	}

	void Vector::polar_mode()		// �� ��ǥ ���� �����Ѵ�
	{
		mode = 'p';
	}

	void Vector::rect_mode()		// ���� ��ǥ ���� �����Ѵ�
	{
		mode = 'r';
	}

	// ������ �����ε�
	// �� Vector ��ü�� ���Ѵ�
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	// Vector ��ü a���� Vector ��ü b�� ����
	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	// Vector ��ü�� ��ȣ�� �ٲ۴�
	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	// Vector ��ü�� n�� ���Ѵ�
	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	// ������ �޼����
	// n�� Vector ��ü a�� ���Ѵ�
	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}

	// mode�� r�̸� ���� ��ǥ�� ����Ѵ�
	// mode�� p�̸� �� ��ǥ�� ����Ѵ�
	ostream & operator<<(ostream & os, const Vector & v)
	{
		if (v.mode == 'r')
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == 'p')
		{
			os << "(m,a) = (" << v.mag << ", "
			   << v.ang * Rad_to_deg << ")";
		}
		else
			os << "Vector ��ü�� ��� ������ Ʋ�Ƚ��ϴ�.\n";
		return os;
	}

}	// namespace VECTOR�� ��
