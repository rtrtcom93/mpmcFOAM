// stonewt2.cpp -- Stonewt Ŭ������ �޼��� ����
#include <iostream>
using namespace std;
#include "stonewt2.h"

// double�� ������ Stonewt ��ü�� �����Ѵ�
Stonewt::Stonewt(double lbs, char md)
{
	mode = md;
	stone = int(lbs) / Lbs_per_stn;		// ���� ������
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

// int�� ���� double�� ������ Stonewt ��ü�� �����Ѵ�
Stonewt::Stonewt(int stn, double lbs, char md)
{
	mode = md;
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()		// ����Ʈ ������, ���� = 0
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()		// �ı���
{
}

void Stonewt::setmode(char md)
{
	mode = md;
}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
	return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & st) const
{
	return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator*(const Stonewt & st) const
{
	return Stonewt(pounds * st.pounds);
}

ostream & operator<<(ostream & os, const Stonewt & st)
{
	if (st.mode == 's')			// ���� �Ŀ�� ���� ����
		os << st.stone << "���� " << st.pds_left << "�Ŀ��";
	else if (st.mode == 'p')	// ���� �Ŀ�� ����
		os << int(st.pounds) << "�Ŀ��";
	else if (st.mode == 'd')	// �ε��Ҽ��� �Ŀ�� ����
		os << st.pounds << "�Ŀ��";
	else
		os << "Stonewt ��ü�� ��� ������ Ʋ�Ƚ��ϴ�.\n";
	return os;
}
