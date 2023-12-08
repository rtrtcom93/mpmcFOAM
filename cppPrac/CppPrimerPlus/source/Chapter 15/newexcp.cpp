// newexcp.cpp -- bad_alloc 예외 처리
#include <iostream>
#include <new>
#include <cstdlib>  // exit()과 EXIT_FAILURE를 위해 선언
using namespace std;

struct Big
{
    double stuff[20000];
};

int main()
{
    Big * pb;
    try {
        cout << "큰 메모리 블록 대입을 요청하고 있습니다.\n";
        pb = new Big[10000]; 	// 1,600,000,000 바이트를 대입
        cout << "메모리 블록 대입 요청이 거부되었습니다.\n";
    }
    catch (bad_alloc & ba)
    {
        cout << "예외가 감지되었습니다!\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }
    cout << "메모리 블록이 성공적으로 대입되었습니다.\n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete [] pb;
    return 0; 
}
