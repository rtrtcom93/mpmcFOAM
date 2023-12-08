// classic1.cpp -- 13�� ���α׷��� ���� 2�� ���� Cd Ŭ������ Classic Ŭ���� �޼��� ����
#include <iostream>
#include <cstring>
using namespace std;
#include "classic1.h"

// Cd ���� Ŭ���� �޼����
Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd(char * s1, char * s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::~Cd()
{
	delete [] performers;
	delete [] label;
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
	delete [] performers;
	delete [] label;
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) +1 ];
	strcpy(performers, d.performers);
    strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

//  Classic �Ļ� Ŭ���� �޼����
Classic::Classic(char * primary, char * s1, char * s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	primary_work = new char[strlen(primary) + 1];
	strcpy(primary_work, primary);
}

Classic::Classic(const Cd & d, char * primary)
	: Cd(d)
{
	primary_work = new char[strlen(primary) + 1];
	strcpy(primary_work, primary);
}

Classic::Classic(const Classic & x) 
	: Cd(x)
{
	primary_work = new char[strlen(x.primary_work) + 1];
	strcpy(primary_work, x.primary_work);
}

Classic::~Classic()
{
	delete [] primary_work;
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
	delete [] primary_work;
	Cd::operator=(x);
	primary_work = new char[strlen(x.primary_work) + 1];
	strcpy(primary_work, x.primary_work);
	return *this;
}