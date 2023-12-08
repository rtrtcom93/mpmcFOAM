// string2.cpp -- 12장 프로그래밍 연습 2를 위한 String 클래스 메서드 구현 파일
#include <iostream>
#include <cstring>				// 어떤 C++ 시스템에서는 string.h
#include <cctype>
#include "string2.h"
using namespace std;

// static 클래스 멤버를 초기화한다
int String::num_strings = 0;

// 클래스 메서드

	// C 스타일의 문자열로부터 String을 생성한다
String::String(const char * s)
{
	len = strlen(s);		// 문자열의 크기를 설정한다
	str = new char[len + 1];	// 기억 공간을 할당한다
	strcpy(str, s);			// 포인터를 초기화한다
}

String::String()			// 디폴트 생성자
{
	len = 4;
	str = new char[1];
	str[0] = '\0';			// 디폴트 문자열
	num_strings++;
}

String::String(const String & st)	// 복사 생성자
{
	num_strings++;			// static 멤버 갱신을 처리한다
	len = st.len;			// 같은 크기로 설정한다
	str = new char[len + 1];	// 기억 공간을 할당한다
	strcpy(str, st.str);		// 문자열을 새 위치에 복사한다
}

String::~String()			// 파괴자
{
	--num_strings;			// 필요하다
	delete [] str;			// 필요하다
}

// 오버로드 연산자 메서드

	// String을 String에 대입한다
String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	delete [] str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return *this;
}

	// C 스타일의 문자열을 String에 대입한다
String & String::operator=(const char * s)
{
	delete [] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}

	// const가 아닌 String에 읽기-쓰기 개별 문자 접근
char & String::operator[](int i)
{
	return str[i];
}

	// const String에 읽기 전용 개별 문자 접근
const char & String::operator[](int i) const
{
	return str[i];
}

// 오버로드 연산자 프렌드

	// st1이 st2보다 앞에 오면 true를 리턴한다
bool operator<(const String & st1, const String & st2)
{
	return (strcmp(st1.str, st2.str) < 0);
}

	// st1이 st2보다 뒤에 오면 true를 리턴한다
bool operator>(const String & st1, const String & st2)
{
	return (strcmp(st1.str, st2.str) > 0);
}

	// st1과 st2가 같으면 true를 리턴한다
bool operator==(const String & st1, const String & st2)
{
	return (strcmp(st1.str, st2.str) == 0);
}

	// String을 간단하게 출력한다
ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

	// String을 간단하게 입력한다
istream & operator>>(istream & is, String & st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}

	// 두 개의 String을 더한다
String operator+(const String & st1, const String & st2)
{
	int tlen = st1.len + st2.len;
	char * tstr = new char[tlen + 1];
	strcpy(tstr, st1.str);
	strcat(tstr, st2.str);
	String tString(tstr);
	return tString;
}

	// String을 소문자로 변환한다
void String::stringlow()
{
	for (int i = 0; i < len; i++) 
	{
		str[i] = tolower(str[i]);
	}
}

	// String을 대문자로 변환한다
void String::stringup()
{
	for (int i = 0; i < len; i++) 
	{
		str[i] = toupper(str[i]);
	}
}

	// String에 문자 ch가 몇 개 들어 있는지 카운트한다
int String::has(char ch)
{
	int count = 0;
	for (int i = 0; i < len; i++) 
	{
		if (str[i] == ch)
			count++;
	}
	return count;
}

// static 메서드
int String::HowMany()
{
	return num_strings;
}
