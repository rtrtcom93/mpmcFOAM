// tmp2tmp.cpp -- �ϳ��� ���ø� Ŭ������ ���� ���ø� �������
#include <iostream>
using std::cout;
using std::endl;

// ���ø� ����
template <typename T> void counts();
template <typename T> void report(T &);

// ���ø� Ŭ����
template <typename TT>
class HasFriendT
{
private:
    TT item;
    static int ct;
public:
    HasFriendT(const TT & i) : item(i) {ct++;}
    ~HasFriendT() { ct--; }
    friend void counts<TT>();
    friend void report<>(HasFriendT<TT> &);
};

template <typename T>
int HasFriendT<T>::ct = 0;

// ���ø� ������ �Լ����� ����
template <typename T>
void counts()
{
    cout << "���ø� ũ��: " << sizeof(HasFriendT<T>) << "; ";
    cout << "���ø� counts(): " << HasFriendT<T>::ct << endl;
}

template <typename T>
void report(T & hf)
{
    cout << hf.item << endl;
}

int main()
{
    counts<int>();
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);
    report(hfi1);  // report(HasFriendT<int> &)�� �����Ѵ�
    report(hfi2);  // report(HasFriendT<int> &)�� �����Ѵ�
    report(hfdb);  // report(HasFriendT<double> &)�� �����Ѵ�
    cout << "counts<int>() ���:\n";
    counts<int>();
    cout << "counts<double>() ���:\n";
    counts<double>();
    return 0; 
}
