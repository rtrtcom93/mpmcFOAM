// vslice.cpp -- valarray slices�� ����Ѵ�
#include <iostream>
#include <valarray>
#include <cstdlib>

const int SIZE = 12;
typedef std::valarray<int> vint;     // ������ �ܼ�ȭ�Ѵ�
void show(const vint & v, int cols);
int main()
{
    using std::slice;                // <valarray>�κ���
    using std::cout;
    vint valint(SIZE);               // 4�� 3���� �����϶�

    int i;
    for (i = 0; i < SIZE; ++i)
        valint[i] = std::rand() % 10;
    cout << "������ �迭:\n";
    show(valint, 3);                 // 3���� �� ǥ��
    vint vcol(valint[slice(1,4,3)]); // ��2 �� ����
    cout << "��2 ��:\n";
    show(vcol, 1);                   // 1���� �� ǥ��
    vint vrow(valint[slice(3,3,1)]); // ��2 �� ����
    cout << "��2 ��:\n";
    show(vrow, 3);
    valint[slice(2,4,3)]  = 10;      // ��2 ���� ����
    cout << "������ ���� �� 10���� ����:\n";
    show(valint, 3);
    cout << "��1���� �� ���� �� ���� ������ ����:\n";
    // +�� slice�� ���ǵ��� �ʴ´�, �׷��� valarray<int>�� ��ȯ�Ѵ�
    valint[slice(0,4,3)]  = vint(valint[slice(1,4,3)])
                               + vint(valint[slice(2,4,3)]);
    show(valint, 3);
    return 0;
}

void show(const vint & v, int cols)
{
    using std::cout;
    using std::endl;

    int lim = v.size();
    for (int i = 0; i < lim; ++i)
    {
        cout.width(3);
        cout << v[i];
        if (i % cols == cols - 1)
            cout << endl;
        else
            cout << ' ';
    }
    if (lim % cols != 0)
        cout << endl;
}
