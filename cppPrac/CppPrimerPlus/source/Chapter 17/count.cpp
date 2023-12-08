// count.cpp -- ����Ʈ�� ������ ���ϵ鿡 �ִ� ���ڵ��� ī��Ʈ�Ѵ�
#include <iostream>
#include <fstream>
#include <cstdlib>          // �Ǵ� stdlib.h
int main(int argc, char * argv[])
{
    using namespace std;
    if (argc == 1)          // �Ű��������� ������ ����
    {
        cerr << "����: " << argv[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }

    ifstream fin;              // ��Ʈ���� ����
    long count;
    long total = 0;
    char ch;

    for (int file = 1; file < argc; file++)
    {
        fin.open(argv[file]);  // ��Ʈ���� argv[file]�� �����Ѵ�
        if (!fin.is_open())
        {
            cerr << argv[file] << " ������ �� �� �����ϴ�.\n";
            fin.clear();
            continue;
        }
        count = 0;
        while (fin.get(ch))
            count++;
        cout << argv[file] << " ���Ͽ� ��� �ִ� ���� ���� " << count << "�Դϴ�.\n";
        total += count;
        fin.clear();           // �Ϻ� �����Ϸ����� �䱸�Ѵ�
        fin.close();           // ���ϰ��� ������ ���´�
    }
    cout << "��ü ���Ͽ� ��� �ִ� ���� ���� " << total << "�Դϴ�.\n";

    return 0; 
}
