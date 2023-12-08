// variadic2.cpp
#include <iostream>
#include <string>

// 매개변수가 0인 경우 정의
void show_list() {}

// 매개변수가 1개인 경우 정의
template<typename T>
void show_list(const T& value)
{
    std::cout << value << '\n';
}

// 매개변수가 2개 이상인 경우 정의
template<typename T, typename... Args>
void show_list(const T& value, const Args&... args)
{
    std::cout << value << ", ";
    show_list(args...); 
}

int main()
{
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mr. String objects!";
    show_list(n, x);
    show_list(x*x, '!', 7, mr);
    return 0;
}