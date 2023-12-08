// mytime4.h -- 프렌드를 사용하는 Time 클래스
#ifndef MYTIME4_H_
#define MYTIME4_H_
#include <iostream>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	friend Time operator+(const Time & t1, const Time & t2);
	friend Time operator-(const Time & t1, const Time & t2);
	friend Time operator*(const Time & t, double mult);
	friend Time operator*(double mult, const Time & t)
		{ return t * mult; }   // 인라인 정의
	friend ostream & operator<<(ostream & os, const Time & t);
};
#endif
