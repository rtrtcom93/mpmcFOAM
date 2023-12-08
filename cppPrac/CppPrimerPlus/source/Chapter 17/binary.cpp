// binary.cpp -- 2�� ���� �����
#include <iostream> // ��κ��� �ý��ۿ��� �ʿ� ����
#include <fstream>
#include <iomanip>
#include <cstdlib>  // (�Ǵ� stdlib.h) exit()�� ����ϱ� ����

inline void eatline() { while (std::cin.get() != '\n') continue; }
struct planet
{
    char name[20];      // �༺�� �̸�
    double population;  // �༺�� �α�
    double g;           // �༺�� �߷°��ӵ�
};

const char * file = "planets.dat";

int main()
{
    using namespace std;
    planet pl;
    cout << fixed << right;

// �ʱ��� ������ ȭ�鿡 ǥ���Ѵ�
    ifstream fin;
    fin.open(file, ios_base::in |ios_base::binary);  // 2�� ����
    // ��: � �����Ϸ��� ios_base::binary ��带 �޾Ƶ����� �ʴ´�
    if (fin.is_open())
    {
    cout << file << " ������ ���� ������ ������ �����ϴ�:\n";
    while (fin.read((char *) &pl, sizeof pl))
    {
        cout << setw(20) << pl.name << ": "
             << setprecision(0) << setw(12) << pl.population
             << setprecision(2) << setw(6) << pl.g << endl;
    }    
    fin.close();
    }

// ���ο� �����͸� �߰��Ѵ�
    ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
    // ��: � �����Ϸ��� ios_base::binary ��带 �޾Ƶ����� �ʴ´�
    if (!fout.is_open())
    {
        cerr << "����� ���� " << file << " ������ �� �� �����ϴ�.\n";
        exit(EXIT_FAILURE);
    }

    cout << "�༺�� �̸��� �Է��Ͻʽÿ�(�������� �� �� �Է�):\n";
    cin.get(pl.name, 20);
    while (pl.name[0] != '\0')
    {
        eatline();
        cout << "�༺�� �α��� �Է��Ͻʽÿ�: ";
        cin >> pl.population;
        cout << "�༺�� �߷°��ӵ��� �Է��Ͻʽÿ�: ";
        cin >> pl.g;
        eatline();
        fout.write((char *) &pl, sizeof pl);
        cout << "�༺�� �̸��� �Է��Ͻʽÿ�(�������� �� �� �Է�):\n";
        cin.get(pl.name, 20);
    }
    fout.close();

// ������ ������ ȭ�鿡 ǥ���Ѵ�
    fin.clear();    // �䱸���� �ʴ� �����Ϸ��� ������, �־ ������
    fin.open(file, ios_base::in | ios_base::binary);
    if (fin.is_open())
    {
        cout << file << " ������ ������ ������ ������ �����ϴ�:\n";
        while (fin.read((char *) &pl, sizeof pl))
        {
            cout << setw(20) << pl.name << ": "
                 << setprecision(0) << setw(12) << pl.population
                 << setprecision(2) << setw(6) << pl.g << endl;
        }
        fin.close();
    }
    cout << "���α׷��� �����մϴ�.\n";
    return 0; 
}
