// string1.cpp -- String Ŭ���� �޼���
#include <cstring>                 // � C++ �ý��ۿ����� string.h
#include "string1.h"               // <iostream>�� �����Ѵ�
using std::cin;
using std::cout;

// static Ŭ���� ����� �ʱ�ȭ�Ѵ�

int String::num_strings = 0;

// static �޼���
int String::HowMany()
{
    return num_strings;
}

// Ŭ���� �޼���
String::String(const char * s)     // C ��Ÿ���� ���ڿ��κ��� String�� �����Ѵ�
{
    len = std::strlen(s);          // ���ڿ��� ũ�⸦ �����Ѵ�
    str = new char[len + 1];       // ��� ������ �����Ѵ�
    std::strcpy(str, s);           // �����͸� �ʱ�ȭ�Ѵ�
    num_strings++;                 // ��ü ī��Ʈ ����
}

String::String()                   // ����Ʈ ������
{
    len = 4;
    str = new char[1];
    str[0] = '\0';                 // ����Ʈ ���ڿ�
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;             // static �ɹ� ������ ó���Ѵ�
    len = st.len;              // ���� ũ��� �����Ѵ�
    str = new char [len + 1];  // ��� ������ �����Ѵ�
    std::strcpy(str, st.str);  // ���ڿ��� �� ��ġ�� �����Ѵ�
}

String::~String()                     // �� �ʿ��� �ı���
{
    --num_strings;                    // �ʿ��ϴ�
    delete [] str;                    // �ʿ��ϴ�
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
    std::strcpy(str, st.str);
    return *this;
}

    // C ��Ÿ���� ���ڿ��� String�� �����Ѵ�
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
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

bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st1.str > st2.str;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os; 
}

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
