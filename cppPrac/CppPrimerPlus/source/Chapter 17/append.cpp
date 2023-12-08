// append.cpp -- ���Ͽ� ������ �����δ�
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>      // (�Ǵ� stdlib.h) exit()�� ����ϱ� ����

const char * file = "guests.txt";
int main()
{
    using namespace std;
    char ch;

// �ʱ� ������ ȭ�鿡 ǥ���Ѵ�
    ifstream fin;
    fin.open(file);

    if (fin.is_open())
    {
        cout << file << "������ ���� ������ ������ �����ϴ�:\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }

// ���ο� �մ� �̸����� �߰��Ѵ�
    ofstream fout(file, ios_base::out | ios_base::app);
    if (!fout.is_open())
    {
        cerr << "����� ���� " << file << " ������ �� �� �����ϴ�.\n";
        exit(EXIT_FAILURE);
    }

    cout << "���ο� �մ� �̸����� �Է��Ͻʽÿ�(�������� �� �� �Է�):\n";
    string name;
    while (getline(cin,name) && name.size() > 0)
    {
          fout << name << endl;
    }
    fout.close();

// ������ ������ ȭ�鿡 ǥ���Ѵ�
    fin.clear();    // � �����Ϸ��� �̰��� �䱸���� �ʴ´�
    fin.open(file);
    if (fin.is_open())
    {
        cout << file << " ������ ������ ������ ������ �����ϴ�:\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
   }
    cout << "���α׷��� �����մϴ�.\n";
    return 0; 
}
