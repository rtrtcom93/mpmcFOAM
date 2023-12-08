// classic.cpp -- 13장 프로그래밍 연습 1을 위한 Cd 클래스와 Classic 클래스 메서드 구현
#include <iostream>
#include <cstring>
using namespace std;
#include "classic.h"

// Cd 기초 클래스 메서드들
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
	cout << "연주자: " << performers << endl;
	cout << "음반사: " << label << endl;
	cout << "곡목 수: " << selections << endl;
	cout << "연주 시간: " << playtime << endl;
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

//  Classic 파생 클래스 메서드들
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
	cout << "대표곡: " << primary_work << endl;
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
