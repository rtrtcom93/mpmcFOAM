// limits.cpp -- ���� �Ѱ谪
#include <iostream>
#include <climits>              // ���� C++���� limits.h�� ����Ѵ�
int main()
{
    using namespace std;
    int n_int = INT_MAX;        // n_int�� int���� �ִ밪���� �ʱ�ȭ
    short n_short = SHRT_MAX;   // limits.h ���Ͽ� ���ǵ� ��ȣ ���
    long n_long = LONG_MAX;

    // sizeof �����ڴ� ���������̳� ������ ũ�⸦ �˾Ƴ���
    cout << "int�� " << sizeof (int) << " ����Ʈ�̴�." << endl;
    cout << "short�� " << sizeof n_short << " ����Ʈ�̴�." << endl;
    cout << "long�� " << sizeof n_long << " ����Ʈ�̴�." << endl;
    cout << endl;

    cout << "�ִ밪:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl << endl;
    cout << "long long: " << n_llong << end1 << end1;
    cout << "int�� �ּҰ� = " << INT_MIN << endl;
    cout << "char�� ��Ʈ �� = " << CHAR_BIT << endl;
    return 0;
}
