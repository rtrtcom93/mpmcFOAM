// string2.cpp -- 12�� ���α׷��� ���� 2�� ���� String Ŭ���� �޼��� ���� ����
#include <iostream>
#include <cstring>				// � C++ �ý��ۿ����� string.h
#include <cctype>
#include "string2.h"
using namespace std;

// static Ŭ���� ����� �ʱ�ȭ�Ѵ�
int String::num_strings = 0;

// Ŭ���� �޼���

	// C ��Ÿ���� ���ڿ��κ��� String�� �����Ѵ�
String::String(const char * s)
{
	len = strlen(s);		// ���ڿ��� ũ�⸦ �����Ѵ�
	str = new char[len + 1];	// ��� ������ �Ҵ��Ѵ�
	strcpy(str, s);			// �����͸� �ʱ�ȭ�Ѵ�
}

String::String()			// ����Ʈ ������
{
	len = 4;
	str = new char[1];
	str[0] = '\0';			// ����Ʈ ���ڿ�
	num_strings++;
}

String::String(const String & st)	// ���� ������
{
	num_strings++;			// static ��� ������ ó���Ѵ�
	len = st.len;			// ���� ũ��� �����Ѵ�
	str = new char[len + 1];	// ��� ������ �Ҵ��Ѵ�
	strcpy(str, st.str);		// ���ڿ��� �� ��ġ�� �����Ѵ�
}

String::~String()			// �ı���
{
	--num_strings;			// �ʿ��ϴ�
	delete [] str;			// �ʿ��ϴ�
}

// �����ε� ������ �޼���

	// String�� String�� �����Ѵ�
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

	// C ��Ÿ���� ���ڿ��� String�� �����Ѵ�
String & String::operator=(const char * s)
{
	delete [] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}

	// const�� �ƴ� String�� �б�-���� ���� ���� ����
char & String::operator[](int i)
{
	return str[i];
}

	// const String�� �б� ���� ���� ���� ����
const char & String::operator[](int i) const
{
	return str[i];
}

// �����ε� ������ ������

	// st1�� st2���� �տ� ���� true�� �����Ѵ�
bool operator<(const String & st1, const String & st2)
{
	return (strcmp(st1.str, st2.str) < 0);
}

	// st1�� st2���� �ڿ� ���� true�� �����Ѵ�
bool operator>(const String & st1, const String & st2)
{
	return (strcmp(st1.str, st2.str) > 0);
}

	// st1�� st2�� ������ true�� �����Ѵ�
bool operator==(const String & st1, const String & st2)
{
	return (strcmp(st1.str, st2.str) == 0);
}

	// String�� �����ϰ� ����Ѵ�
ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

	// String�� �����ϰ� �Է��Ѵ�
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

	// �� ���� String�� ���Ѵ�
String operator+(const String & st1, const String & st2)
{
	int tlen = st1.len + st2.len;
	char * tstr = new char[tlen + 1];
	strcpy(tstr, st1.str);
	strcat(tstr, st2.str);
	String tString(tstr);
	return tString;
}

	// String�� �ҹ��ڷ� ��ȯ�Ѵ�
void String::stringlow()
{
	for (int i = 0; i < len; i++) 
	{
		str[i] = tolower(str[i]);
	}
}

	// String�� �빮�ڷ� ��ȯ�Ѵ�
void String::stringup()
{
	for (int i = 0; i < len; i++) 
	{
		str[i] = toupper(str[i]);
	}
}

	// String�� ���� ch�� �� �� ��� �ִ��� ī��Ʈ�Ѵ�
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

// static �޼���
int String::HowMany()
{
	return num_strings;
}
