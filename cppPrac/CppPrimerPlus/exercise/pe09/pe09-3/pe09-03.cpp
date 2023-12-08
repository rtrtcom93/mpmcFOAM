// pe09-03.cpp -- 위치 지정 new 사용하기
#include <iostream>
#include <new>
#include <cstring>
struct chaff
{
    char dross[20];
    int slag;
};

// char buffer[500]; // 옵션 1
int main()
{
    using std::cout;
    using std::endl;
    chaff *p1;
    int i;
    char * buffer = new char [500];	// 옵션 2
    p1 = new (buffer) chaff[2];		// 구조체들을 buffer에 넣는다
    std::strcpy(p1[0].dross, "Horse Feathers");
    p1[0].slag = 13;
    std::strcpy(p1[1].dross, "Piffle");
    p1[1].slag = -39;

    for (i = 0; i < 2; i++)
        cout << p1[i].dross << ": " << p1[i].slag << endl;
    delete [] buffer;	// 옵션 2

    return 0;
}
