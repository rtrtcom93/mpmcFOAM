// strout.cpp -- ���ھ� ������ ����(���)
#include <iostream>
#include <sstream>
#include <string>
int main()
{
    using namespace std;
    ostringstream outstr;   // string ��Ʈ���� �����Ѵ�

    string hdisk;
    cout << "�ϵ��ũ�� �𵨸��� �����Դϱ�? ";
    getline(cin, hdisk);
    int cap;
    cout << "�ϵ��ũ�� �뷮�� �� GB�Դϱ�? ";
    cin >> cap;
    // ������ ������ ������ string ��Ʈ���� �� �ִ´�
    outstr << hdisk << " �ϵ��ũ�� �뷮�� "
           << cap << " GB�Դϴ�.\n";
    string result = outstr.str();   // ����� �����Ѵ�
    cout << result;                 // ������ ȭ�鿡 ǥ���Ѵ�

    return 0; 
}
