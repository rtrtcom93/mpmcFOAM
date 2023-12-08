// callable.cpp -- ȣ�� ������ Ÿ�԰� ���ø�
#include <iostream>
#include <math.h>

double dub(double x) {return 2.0*x;}
double square(double x) {return x*x;}

int main()
{
    using std::cout;
    using std::endl;

    double y = 1.21;
    cout << "�Լ� ������ dub:\n";
    cout << "  " << use_f(y, dub) << endl;
    cout << "�Լ� ������ square:\n";
    cout << "  " << use_f(y, sqrt) << endl;
    cout << "�Լ� ��ü Fp:\n";
    cout << "  " << use_f(y, Fp(5.0)) << endl;
    cout << "�Լ� ��ü Fq:\n";
    cout << "  " << use_f(y, Fq(5.0)) << endl;
    cout << "���� ǥ���� 1:\n";
    cout << "  " << use_f(y, [](double u) {return u*u;}) << endl;
    cout << "���� ǥ���� 2:\n";
    cout << "  " << use_f(y, [](double u) {return u+u/2.0;}) << endl;
    return 0;
}
