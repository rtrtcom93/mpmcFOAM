// tempparm.cpp -- ���ø� �Ű������� ����ϴ� ���ø�
#include <iostream>
#include "stacktp.h"

template <template <typename T> class Thing>
class Crab
{
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Crab() {};
    // Thing Ŭ������ push()�� pop() ����� ������ �ִٰ� �����Ѵ�
    bool push(int a, double x) { return s1.push(a) && s2.push(x); }
    bool pop(int & a, double & x){ return s1.pop(a) && s2.pop(x); }
};
    
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    Crab<Stack> nebula;
// Stack�� template <typename T> class Thing�� ��ġ�ؾ� �Ѵ�
    int ni;
    double nb;
    cout << "4 3.5�� ���� int double ���� �Է��϶� (�������� 0 0):\n";
    while (cin>> ni >> nb && ni > 0 && nb > 0)
    {
        if (!nebula.push(ni, nb))
            break;
    }
   
    while (nebula.pop(ni, nb))
           cout << ni << ", " << nb << endl;
    cout << "���α׷��� �����մϴ�.\n";

    return 0; 
}
