// newexcp.cpp -- bad_alloc ���� ó��
#include <iostream>
#include <new>
#include <cstdlib>  // exit()�� EXIT_FAILURE�� ���� ����
using namespace std;

struct Big
{
    double stuff[20000];
};

int main()
{
    Big * pb;
    try {
        cout << "ū �޸� ��� ������ ��û�ϰ� �ֽ��ϴ�.\n";
        pb = new Big[10000]; 	// 1,600,000,000 ����Ʈ�� ����
        cout << "�޸� ��� ���� ��û�� �źεǾ����ϴ�.\n";
    }
    catch (bad_alloc & ba)
    {
        cout << "���ܰ� �����Ǿ����ϴ�!\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }
    cout << "�޸� ����� ���������� ���ԵǾ����ϴ�.\n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete [] pb;
    return 0; 
}
