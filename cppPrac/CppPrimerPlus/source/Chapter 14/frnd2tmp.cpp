// frnd2tmp.cpp -- ���ø��� �ƴ� �����带 ������ ���ø� Ŭ����
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class HasFriend
{
private:
    T item;
    static int ct;
public:
    HasFriend(const T & i) : item(i) {ct++;}
    ~HasFriend()  {ct--; }
    friend void counts();
    friend void reports(HasFriend<T> &); // ���ø� �Ű�����
};

// �� Ư��ȭ�� �ڽŸ��� static ������ ����� ������
template <typename T>
int HasFriend<T>::ct = 0;

// ��� HasFriend<T> Ŭ������ ���� ���ø��� �ƴ� ������
void counts()
{
    cout << "int ī��Ʈ: " << HasFriend<int>::ct << "; ";
    cout << "double ī��Ʈ: " << HasFriend<double>::ct << endl;
}

// HasFriend<int> Ŭ������ ���� ���ø��� �ƴ� ������
void reports(HasFriend<int> & hf)
{
    cout <<"HasFriend<int>: " << hf.item << endl;
}

// HasFriend<double> Ŭ������ ���� ���ø��� �ƴ� ������
void reports(HasFriend<double> & hf)
{
    cout <<"HasFriend<double>: " << hf.item << endl;
}

int main()
{
    cout << "��ü�� ������� �ʾҴ�: ";
    counts();
    HasFriend<int> hfi1(10);
    cout << "hfi1 ���� ��: ";
    counts();
    HasFriend<int> hfi2(20);
    cout << "hfi2 ���� ��: ";
    counts();
    HasFriend<double> hfdb(10.5);
    cout << "hfdb ���� ��: ";
    counts(); 
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);
    return 0; 
}
