// lexcast.cpp -- string���� ��ȯ�ϴ� ������ ����
#include <iostream>
#include <string>
#include "boost/lexical_cast.hpp"
int main()
{
    using namespace std;
    cout << "�����Ը� �Է��ϼ���: ";
    float weight;
    cin >> weight;
    string gain = "10% �����ϸ� ";
    string wt = boost::lexical_cast<string>(weight);
    gain = gain + wt + "�� ";  // ���� ������+()
    weight = 1.1 * weight;
    gain = gain + boost::lexical_cast<string>(weight) + "�� �˴ϴ�.";
    cout << gain << endl;
    return 0;
}
