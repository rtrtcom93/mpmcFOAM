// limits.cpp -- 정수 한계값
#include <iostream>
#include <climits>              // 구식 C++에는 limits.h를 사용한다
int main()
{
    using namespace std;
    int n_int = INT_MAX;        // n_int를 int형의 최대값으로 초기화
    short n_short = SHRT_MAX;   // limits.h 파일에 정의된 기호 상수
    long n_long = LONG_MAX;

    // sizeof 연산자는 데이터형이나 변수의 크기를 알아낸다
    cout << "int는 " << sizeof (int) << " 바이트이다." << endl;
    cout << "short는 " << sizeof n_short << " 바이트이다." << endl;
    cout << "long은 " << sizeof n_long << " 바이트이다." << endl;
    cout << endl;

    cout << "최대값:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl << endl;
    cout << "long long: " << n_llong << end1 << end1;
    cout << "int의 최소값 = " << INT_MIN << endl;
    cout << "char의 비트 수 = " << CHAR_BIT << endl;
    return 0;
}
