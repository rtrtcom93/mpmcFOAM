// check_it.cpp -- ������ �Է����� Ȯ���Ѵ�
#include <iostream>

int main()
{
    using namespace std;
    cout << "���� �Է��Ͻʽÿ�: ";

    int sum = 0;
    int input;
    while (cin >> input)
    {
        sum += input;
    }

    cout << "���������� �Է��� �� = " << input << endl;
    cout << "�հ� = " << sum << endl;
    return 0;
}
