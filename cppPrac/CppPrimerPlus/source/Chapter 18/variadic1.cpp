//variadic1.cpp -- 매개변수 팩을 언팩하는 재귀 이용
#include <iostream>
#include <string>
// definition for 0 parameters -- terminating call 매개변수가 없을 때 정의 -- 호출 종료
void show_list3() {}

// 1개 이상일 때 정의
template<typename T, typename... Args>
void show_list3( T value, Args... args)
{
    std::cout << value << ", ";
    show_list3(args...); 
}

int main()
{
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mr. String objects!";
    show_list3(n, x);
    show_list3(x*x, '!', 7, mr);
    return 0;
}