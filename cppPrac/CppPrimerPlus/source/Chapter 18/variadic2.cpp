// variadic2.cpp
#include <iostream>
#include <string>

// �Ű������� 0�� ��� ����
void show_list() {}

// �Ű������� 1���� ��� ����
template<typename T>
void show_list(const T& value)
{
    std::cout << value << '\n';
}

// �Ű������� 2�� �̻��� ��� ����
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