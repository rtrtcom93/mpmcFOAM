// strin.cpp -- char���� �迭�κ��� ������ �����Ͽ� �д´�
#include <iostream>
#include <sstream>
#include <string>
int main()
{
    using namespace std;
    string lit = "�漻 �ε鷹 �ɾ���� ���� ��Ǯ�� "
                 "���� �� ������ ���� ��� "
                 "�Ʊ⾾ �Ǿ� ���� �ٶ� ��ٸ�����."'
    istringstream instr(lit);   // �Է¿� ���۸� ����Ѵ�
    string word;
    while (instr >> word)       // �� ���� �� �ܾ �д´�
        cout << word << endl;
    return 0;
}
