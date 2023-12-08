// write.cpp -- cout.write()�� ����Ѵ�
#include <iostream>
#include <cstring>  // �Ǵ� string.h

int main()
{
    using std::cout;
    using std::endl;
    const char * state1 = "Florida";
    const char * state2 = "Kansas";
    const char * state3 = "Euphoria";
    int len = std::strlen(state2);
    cout << "���� �ε��� ����:\n";
    int i;
    for (i = 1; i <= len; i++)
    {
        cout.write(state2,i);
        cout << endl;
    }

// ���̾� ����Ѵ�
    cout << "���� �ε��� ����:\n";
    for (i = len; i > 0; i--)
        cout.write(state2,i) << endl;

// ���ڿ� ���̸� �ʰ��Ѵ�
    cout << "���ڿ� ���� �ʰ�:\n";
    cout.write(state2, len + 5) << endl;
    return 0; 
}
