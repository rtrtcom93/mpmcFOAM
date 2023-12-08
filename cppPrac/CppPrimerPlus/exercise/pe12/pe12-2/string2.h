// string2.h -- 12�� ���α׷��� ���� 2�� ���� String Ŭ���� ���� ��� ����
#include <iostream>
using namespace std;
#ifndef STRING2_H_
#define STRING2_H_
class String
{
private:
	char * str;				// ���ڿ��� �����ϴ� ������
	int len;				// ���ڿ��� ����
	static int num_strings;			// ��ü�� ��
	static enum {CINLIM = 80};		// �Ǵ� static const int CINLIM = 80;
public:
// �����ڿ� ��Ÿ �޼���
	String(const char * s);			// ������
	String();				// ����Ʈ ������
	String(const String & st);		// ���� ������
	~String();				// �ı���
	int length() const { return len; }
// �����ε� ������ �޼���
	String & operator=(const String & st);
	String & operator=(const char * s);
	char & operator[](int i);
	const char & operator[](int i) const;
// �����ε� ������ ������
	friend bool operator<(const String & st1, const String & st2);
	friend bool operator>(const String & st1, const String & st2);
	friend bool operator==(const String & st1, const String & st2);
	friend ostream & operator<<(ostream & os, const String & st);
	friend istream & operator>>(istream & is, String & st);
	friend String operator+(const String & st1, const String & st2);
	void stringlow();
	void stringup();
	int has(char ch);
	// static �Լ�
	static int HowMany();
};
#endif
