// strngbad.h -- ������ �ִ� string Ŭ���� ����
#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
class StringBad
{
private:
    char * str;                // ���ڿ��� �����ϴ� ������
    int len;                   // ���ڿ��� ����
    static int num_strings;    // ��ü�� ��
public:
    StringBad(const char * s); // ������
    StringBad();               // ����Ʈ ������
    ~StringBad();              // �ı���
// ������ �Լ�
    friend std::ostream & operator<<(std::ostream & os, 
                       const StringBad & st);
};
#endif
