// random.cpp -- 2�� ���Ͽ� ���� ����
#include <iostream>     // ��κ��� �ý��ۿ��� �ʿ� ����
#include <fstream>
#include <iomanip>
#include <cstdlib>      // (�Ǵ� stdlib.h) exit()�� ����ϱ� ����
const int LIM = 20;
struct planet
{
    char name[LIM];     // �༺�� �̸�
    double population;  // �༺�� �α�
    double g;           // �༺�� �߷°��ӵ�
};

const char * file = "planets.dat";  // �ִٰ� ���� (binary.cpp ����)
inline void eatline() { while (std::cin.get() != '\n') continue; }

int main()
{
    using namespace std;
    planet pl;
    cout << fixed;

// �ʱ��� ������ ȭ�鿡 ǥ���Ѵ�
    fstream finout;     // �б�/���� ��Ʈ��
    finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
    // ��: � �����Ϸ��� | ios_base::binary�� ������ ���� �䱸�Ѵ�
    int ct = 0;
    if (finout.is_open())
    {
        finout.seekg(0);    // ���� ��ġ�� ����
        cout << file << " ������ ���� ������ ������ �����ϴ�:\n";
        while (finout.read((char *) &pl, sizeof pl))
        {
            cout << ct++ << ": " << setw(LIM) << pl.name << ": "
                 << setprecision(0) << setw(12) << pl.population
                 << setprecision(2) << setw(6) << pl.g << endl;
        }
        if (finout.eof())
            finout.clear(); // eof �÷��׸� �����Ѵ�
        else
        {
            cerr << file << " ������ �дٰ� ���� �߻�.\n";
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        cerr << file << " ������ �� �� �����ϴ�. ����.\n";
        exit(EXIT_FAILURE);
    }

// ���ڵ带 �����Ѵ�
    cout << "������ ���ڵ� ��ȣ�� �Է��Ͻʽÿ�: ";
    long rec;
    cin >> rec;
    eatline();              // ���� ���ڸ� ���ش�
    if (rec < 0 || rec >= ct)
    {
        cerr << "�߸��� ���ڵ� ��ȣ�Դϴ�. ����.\n";
        exit(EXIT_FAILURE);
    }
    streampos place = rec * sizeof pl;  // streampos������ ��ȯ�Ѵ�
    finout.seekg(place);    // ���� ����
    if (finout.fail())
    {
        cerr << "���ڵ带 ã�ٰ� ���� �߻�.\n";
        exit(EXIT_FAILURE);
    }

    finout.read((char *) &pl, sizeof pl);
    cout << "���� ���ڵ��� ����:\n";
    cout << rec << ": " << setw(LIM) << pl.name << ": "
         << setprecision(0) << setw(12) << pl.population
         << setprecision(2) << setw(6) << pl.g << endl;
    if (finout.eof())
        finout.clear();     // eof �÷��׸� �����Ѵ�

    cout << "�༺�� �̸��� �Է��Ͻʽÿ�: ";
    cin.get(pl.name, LIM);
    eatline();
    cout << "�༺�� �α��� �Է��Ͻʽÿ�: ";
    cin >> pl.population;
    cout << "�༺�� �߷°��ӵ��� �Է��Ͻʽÿ�: ";
    cin >> pl.g;
    finout.seekp(place);    // ������ ���ڵ��� ���� ����Ʈ�� �ٽ� ����
    finout.write((char *) &pl, sizeof pl) << flush;
    if (finout.fail())
    {
        cerr << "���ٰ� ���� �߻�.\n";
        exit(EXIT_FAILURE);
    }

// ������ ������ ȭ�鿡 ǥ���Ѵ�
    ct = 0;
    finout.seekg(0);            // ������ ���� ��ġ�� ����
    cout << file << " ������ ������ ������ ������ �����ϴ�:\n";
    while (finout.read((char *) &pl, sizeof pl))
    {
        cout << ct++ << ": " << setw(LIM) << pl.name << ": "
             << setprecision(0) << setw(12) << pl.population
             << setprecision(2) << setw(6) << pl.g << endl;
    }
    finout.close();
    cout << "���α׷��� �����մϴ�.\n";
    return 0; 
}
