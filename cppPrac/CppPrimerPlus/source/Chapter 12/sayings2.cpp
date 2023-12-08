// sayings2.cpp -- ��ü�� �����ϴ� �����͸� ����Ѵ�
// string1.cpp�� �Բ� �������Ѵ�
#include <iostream>
#include <cstdlib>      // (�Ǵ� stdlib.h ���) rand(), srand()�� ����
#include <ctime>        // (�Ǵ� time.h ���) time()�� ����
#include "string1.h"
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
    using namespace std;
    String name;
    cout <<"�ȳ��Ͻʴϱ�? ������ ��� �ǽʴϱ�?\n>> ";
    cin >> name;

    cout << name << " ��! ������ �츮 �Ӵ� " << ArSize
         << "���� �Է��� �ֽʽÿ�(�������� Enter):\n";
    String sayings[ArSize];
    char temp[MaxLen];               // ���ڿ� ������ ���� �ӽ� ����
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i+1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0') // �� �� �Է��̸�
            break;                   // i�� ������Ű�� �ʴ´�
        else
            sayings[i] = temp;       // �����ε� ���� �����ڸ� ����Ѵ�
    }
    int total = i;                   // �о���� �� �� ��

    if (total > 0)
    {
        cout << "(������ ���� �Ӵ���� �Է��ϼ̽��ϴ�.)\n";
        for (i = 0; i < total; i++)
            cout << sayings[i] << "\n";

    // ���� ª�� ���ڿ���, ���������� ���� �տ� ������ ���ڿ��� �����ϴ� ������
        String * shortest = &sayings[0]; // ù ��° ��ü�� �ʱ�ȭ�Ѵ�
        String * first = &sayings[0];	 // ù ��° ��ü�� �ʱ�ȭ�Ѵ�
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)     // ������ ���Ѵ�
                first = &sayings[i];     // �ּҸ� �����Ѵ�
        }
        cout << "���� ª�� �Ӵ�:\n" << * shortest << endl;
        cout << "���������� ���� �տ� ������ �Ӵ�:\n" << * first << endl;

        srand(time(0));
        int choice = rand() % total; // �迭 �ε����� �������� �����Ѵ�
    // new�� ����Ͽ�, ���ο� String ��ü�� �����ϰ� �ʱ�ȭ�Ѵ�
        String * favorite = new String(sayings[choice]);
        cout << "My favorite saying:\n" << *favorite << endl;
        delete favorite;
    }
    else
        cout << "�˰� �ִ� �Ӵ��� �ϳ��� �����?\n";
    cout << "���α׷��� �����մϴ�.\n";
    return 0; 
}