// error3.cpp -- ���ܸ� ����Ѵ�
#include <iostream>
double hmean(double a, double b);

int main()
{
    double x, y, z;

    std::cout << "�� ���� �Է��Ͻʽÿ�: ";
    while (std::cin >> x >> y)
    {
        try {                   // try ����� ����
            z = hmean(x,y);
        }                       // try ����� ��
        catch (const char * s)  // ���� �ڵ鷯�� ����
        {
            std::cout << s << std::endl;
            std::cout << "�� ���� ���� �Է��Ͻʽÿ�: ";
            continue;
        }                       // ���� �ڵ鷯�� ��
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
        throw "�߸��� hmean() �Ű�����: a = -b�� ������ �ʽ��ϴ�.";
    return 2.0 * a * b / (a + b); 
}
