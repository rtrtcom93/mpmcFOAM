// classic.cpp -- 13�� ���α׷��� ���� 1�� ���� Cd Ŭ������ Classic Ŭ���� �޼��� ����
#include <iostream>
#include <cstring>
using namespace std;
#include "classic.h"

// Cd ���� Ŭ���� �޼����
Cd::Cd(char * s1, char * s2, int n, double x)
{
	strncpy(performers, s1, 49);
	performers[49] = '\0';
	strncpy(label, s2, 19);
	label[19] = '\0';
	selections = n;
	playtime = x;
}

void Cd::Report() const
{
	cout << "������: " << performers << endl;
	cout << "���ݻ�: " << label << endl;
	cout << "��� ��: " << selections << endl;
	cout << "���� �ð�: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;
	strncpy(performers, d.performers, 49);
	performers[49] = '\0';
    strncpy(label, d.label, 19);
	label[19] = '\0';
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

//  Classic �Ļ� Ŭ���� �޼����
Classic::Classic(char * primary, char * s1, char * s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	strncpy(primary_work, primary, 49);
	primary_work[49] = '\0';
}

Classic::Classic(const Cd & d, char * primary)
	: Cd(d)
{
	strncpy(primary_work, primary_work, 49);
	primary_work[49] = '\0';
}

void Classic::Report() const
{
	cout << "��ǥ��: " << primary_work << endl;
	Cd::Report();
}

Classic & Classic::operator=(const Classic & x)
{
	if (this == &x)
		return *this;
	Cd::operator=(x);
	strncpy(primary_work, x.primary_work, 49);
	primary_work[49] = '\0';
	return *this;
}
