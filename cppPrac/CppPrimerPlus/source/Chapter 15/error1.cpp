//error1.cpp -- abort() �Լ��� ����Ѵ�
#include <iostream>
#include <cstdlib>
double hmean(double a, double b);

int main()
{
    double x, y, z;

    std::cout << "�� ���� �Է��Ͻʽÿ�: ";
    while (std::cin >> x >> y)
    {
        z = hmean(x,y);
        std::cout << x << ", " << y << "�� ��ȭ����� "
                  << z << "�Դϴ�.\n";
        std::cout << "�ٸ� �� ���� �Է��Ͻʽÿ�(�������� q): ";
    }
    std::cout << "���α׷��� �����մϴ�.\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
    {
        std::cout << "�Ű��������� hmean()�� ������ �� �����ϴ�.\n";
        std::abort();
    }
    return 2.0 * a * b / (a + b); 
}
