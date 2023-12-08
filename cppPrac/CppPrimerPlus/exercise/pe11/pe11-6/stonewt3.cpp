// stonewt3.cpp -- Stonewt Ŭ������ �޼��� ����
#include <iostream>
using namespace std;
#include "stonewt3.h"

// double�� ������ Stonewt ��ü�� �����Ѵ�
Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;		// ���� ������
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

// int�� ���� double�� ������ Stonewt ��ü�� �����Ѵ�
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()		// ����Ʈ ������, ���� = 11����
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()		// �ı���
{
}

// ���Ը� ����� �Ŀ���� ���� �������� ����Ѵ�
void Stonewt::show_stn() const
{
	cout << stone << "����, " << pds_left << "�Ŀ��\n";
}

// ���Ը� �Ŀ�� �������� ����Ѵ�
void Stonewt::show_lbs() const
{
	cout << pounds << "�Ŀ��\n";
}

bool Stonewt::operator<(const Stonewt & st) const
{
	return (pounds < st.pounds);
}

bool Stonewt::operator<=(const Stonewt & st) const
{
	return (pounds <= st.pounds);
}

bool Stonewt::operator==(const Stonewt & st) const
{
	return (pounds == st.pounds);
}
	
bool Stonewt::operator>(const Stonewt & st) const
{
	return (pounds > st.pounds);
}

bool Stonewt::operator>=(const Stonewt & st) const
{
	return (pounds >= st.pounds);
}

bool Stonewt::operator!=(const Stonewt & st) const
{
	return (pounds != st.pounds);
}