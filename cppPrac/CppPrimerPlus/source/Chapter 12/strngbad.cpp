// strngbad.cpp -- StringBad Ŭ������ �޼���
#include <cstring>                    // � C++ �ý��ۿ����� string.h
#include "strngbad.h"
using std::cout;

// static Ŭ���� ����� �ʱ�ȭ�Ѵ�
int StringBad::num_strings = 0;

// Ŭ���� �޼���

// C ��Ÿ���� ���ڿ��κ��� StringBad�� �����Ѵ�
StringBad::StringBad(const char * s)
{
    len = std::strlen(s);             // ���ڿ��� ũ�⸦ �����Ѵ�
    str = new char[len + 1];          // ��� ������ �����Ѵ�
    std::strcpy(str, s);              // �����͸� �ʱ�ȭ�Ѵ�
    num_strings++;                    // ������ ��ü ���� ī��Ʈ�Ѵ�
    cout << num_strings << ": \"" << str
         << "\" ��ü ����\n";   	// ������ �޽���
}

StringBad::StringBad()                // ����Ʈ ������
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");          // ����Ʈ ���ڿ�
    num_strings++;
    cout << num_strings << ": \"" << str
         << "\" ����Ʈ ��ü ����\n";  // ������ �޽���
}

StringBad::~StringBad()               // �� �ʿ��� �ı���
{
    cout << "\"" << str << "\" ��ü �ı�, ";    	// ������ �޽���
    --num_strings;                    			// �ʿ��ϴ�
    cout << "���� ��ü ��:" << num_strings << "\n";	//������ �޽���
    delete [] str;                    // �ʿ��ϴ�
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os; 
}
