// numstr.cpp -- ��ġ �Է� �ڿ� ���� ���ڿ� �Է�
#include <iostream>
int main()
{
    using namespace std;
    cout << "���� ��ô� ����Ʈ�� ���� �����ϼ̽��ϱ�?\n";
    int year;
    cin >> year;
    cout << "�ּҸ� ������ �ֽðڽ��ϱ�?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "����Ʈ ���� ����: " << year << endl;
    cout << "����: " << address << endl;
    cout << "����� �Ϸ�Ǿ����ϴ�!\n";
    return 0;
}
