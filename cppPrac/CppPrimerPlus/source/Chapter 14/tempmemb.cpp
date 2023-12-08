// tempmemb.cpp -- ���ø� �����
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class beta
{
private:
    template <typename V>  // ������ ���ø� Ŭ���� ���
    class hold
    {
    private:
        V val;
    public:
        hold(V v  = 0) : val(v) {}
        void show() const { cout << val << endl; }
        V Value() const { return val; }
    };
    hold<T> q;             // ���ø� ��ü
    hold<int> n;           // ���ø� ��ü
public:
    beta( T t, int i) : q(t), n(i) {}
    template<typename U>   // ���ø� �޼���
    U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }
    void Show() const { q.show(); n.show();}
};

int main()
{
    beta<double> guy(3.5, 3);
    cout << "T�� double�� �����Ǿ����ϴ�.\n";
    guy.Show();
    cout << "V�� double�� T�� �����Ǿ���, �� ������ V�� int�� �����Ǿ����ϴ�.\n";
    cout << guy.blab(10, 2.3) << endl;
    cout << "U�� int�� �����Ǿ����ϴ�. \n";
    cout << guy.blab(10.0, 2.3) << endl;
    cout << "U�� double�� �����Ǿ����ϴ�. \n";
    cout << "���α׷��� �����մϴ�.\n";
    return 0; 
}
