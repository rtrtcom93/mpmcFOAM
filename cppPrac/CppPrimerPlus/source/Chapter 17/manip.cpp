// manip.cpp -- ��� ���� �����ڸ� ����Ѵ�
#include <iostream>
int main()
{
    using namespace std;
    cout << "�ϳ��� ������ �Է��Ͻʽÿ�: ";
    int n;
    cin >> n;

    cout << "n     n*n\n";
    cout << n << "     " << n * n << " (10����)\n";
// 16���� ���� ����
    cout << hex;
    cout << n << "     ";
    cout << n * n << " (16����)\n";

// 8���� ���� ����
    cout << oct << n << "     " << n * n << " (8����)\n";

// �����ڸ� ȣ���ϴ� �ٸ� ���
    dec(cout);
    cout << n << "     " << n * n << " (16����)\n";
    return 0; 
}
