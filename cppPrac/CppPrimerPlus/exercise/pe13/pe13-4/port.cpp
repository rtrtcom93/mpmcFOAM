// port.cpp -- 13�� ���α׷��� ���� 4�� ���� �޼��� ����
// pe13-04.cpp�� �Բ� �������Ѵ�
#include <iostream>
#include <cstring>
using namespace std;
#include "port.h"

// Port ���� Ŭ����
Port::Port(const char * br, const char * st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strncpy(style, st, 19);
	style[19] = '\0';
	bottles = b;
}

Port::Port(const Port & p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	return *this;
}

Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b)
{
	if (bottles >= b)
		bottles -= b;
	return *this;
}

void Port::Show() const
{
	cout << "�귣��: " << brand << endl;
	cout << "��Ÿ��: " << style << endl;
	cout << "����: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

// VintagePort �Ļ� Ŭ����
VintagePort::VintagePort(const char * br, const char * st, int b, const char * nn, int y)
	: Port(br, st, b)	// style�� �׻� "vintage"�̴�
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp)
	: Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	delete [] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	cout << "����: " << nickname << endl;
	cout << "������Ȯ�⵵: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << (const Port &) vp;
	os << ", " << vp.nickname << ", " << vp.year;
	return os;
}

// (a) �ϼ��� �ڵ带 �����϶�.
//
// (b) BottleCount()�� Port�� VintagePort���� �����ϹǷ� �ٽ� ������ �ʿ䰡 ����.
//     operator+=()�� operator-=()�� �� Ŭ�������� �����ϹǷ� �ٽ� ������ �ʿ䰡 ����.
//     Show()�� �� Ŭ�������� �ٸ� ������ ���ǹǷ� �ٽ� ���ǵǾ�� �Ѵ�.
//
// (c) operator=()�� operator<<()�� ������ �����Ϳ� �����Ͽ� ������ ������ ȣ������ �ʰ�
//     ��ü�� �����Ͽ� ������ ������ ȣ��ǹǷ� �������� �����ϸ� �� �ȴ�.
//
// (d) �ϼ��� �ڵ带 �����϶�.
