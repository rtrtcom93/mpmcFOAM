// pe09-03.cpp -- ��ġ ���� new ����ϱ�
#include <iostream>
#include <new>
#include <cstring>
struct chaff
{
    char dross[20];
    int slag;
};

// char buffer[500]; // �ɼ� 1
int main()
{
    using std::cout;
    using std::endl;
    chaff *p1;
    int i;
    char * buffer = new char [500];	// �ɼ� 2
    p1 = new (buffer) chaff[2];		// ����ü���� buffer�� �ִ´�
    std::strcpy(p1[0].dross, "Horse Feathers");
    p1[0].slag = 13;
    std::strcpy(p1[1].dross, "Piffle");
    p1[1].slag = -39;

    for (i = 0; i < 2; i++)
        cout << p1[i].dross << ": " << p1[i].slag << endl;
    delete [] buffer;	// �ɼ� 2

    return 0;
}
