// stdmove.cpp -- std::move() ���
#include <iostream>
#include <utility>

// �������̽�
class Useless
{
private:
    int n;          // �Ű����� ��
    char * pc;      // �����Ϳ� ���� ������
    static int ct;  // ��ü ��
    void ShowObject() const;
public:
    Useless();
    explicit Useless(int k);
    Useless(int k, char ch);
    Useless(const Useless & f); // �Ϲ����� ���� ������
    Useless(Useless && f);      // �̵� ������
    ~Useless();
    Useless operator+(const Useless & f)const;
    Useless & operator=(const Useless & f); // ���� ����
    Useless & operator=(Useless && f);      // �̵� ����
    void ShowData() const;
};

// ����
int Useless::ct = 0;

Useless::Useless()
{
    ++ct;
    n = 0;
    pc = nullptr;
 }

Useless::Useless(int k) : n(k)
{
    ++ct; 
    pc = new char[n];
}

Useless::Useless(int k, char ch) : n(k)
{
    ++ct;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = ch;
}

Useless::Useless(const Useless & f): n(f.n) 
{
    ++ct;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
}

Useless::Useless(Useless && f): n(f.n) 
{
    ++ct;
    pc = f.pc;       // �ּ� ����è
    f.pc = nullptr;  // ���� ��ü�� �ƹ��͵� ��ȯ���� �ʵ��� ��
    f.n = 0;
}

Useless::~Useless()
{
    delete [] pc;
}

Useless & Useless::operator=(const Useless & f)  // ���� ����
{
    std::cout << "���� ���� ������ ȣ��:\n";
    if (this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
    return *this;
}

Useless & Useless::operator=(Useless && f)       // �̵� ����
{
    std::cout << "�̵� ���� ������ ȣ��:\n";
    if (this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = f.pc;
    f.n = 0;
    f.pc = nullptr;
    return *this;
}

Useless Useless::operator+(const Useless & f)const
{
    Useless temp = Useless(n + f.n);
    for (int i = 0; i < n; i++)
        temp.pc[i] = pc[i];
    for (int i = n; i < temp.n; i++)
        temp.pc[i] = f.pc[i - n];
    return temp;
}

void Useless::ShowObject() const
{ 
    std::cout << "�Ű����� ��: " << n;
    std::cout << " ������ �ּ�: " << (void *) pc << std::endl;
}

void Useless::ShowData() const
{
    if (n == 0)
        std::cout << "(��ü ����)";
    else
        for (int i = 0; i < n; i++)
            std::cout << pc[i];
    std::cout << std::endl;
}

// ���ø����̼�
int main()
{
    using std::cout;
    {
        Useless one(10, 'x');
        Useless two = one +one;   // �̵� ������ ȣ��
        cout << "��ü one: ";
        one.ShowData();
        cout << "��ü two: ";
        two.ShowData();
        Useless three, four;
        cout << "three = one\n";
        three = one;              // �ڵ� ���� ����
        cout << "���� ��ü three = ";
        three.ShowData();
        cout << "�׸��� ��ü one = ";
        one.ShowData();
        cout << "four = one + two\n";
        four = one + two;         // �ڵ� �̵� ����
        cout << "���� ��ü four = ";
        four.ShowData();
        cout << "four = move(one)\n";
        four = std::move(one);    // ���� �̵� ����
        cout << "���� ��ü four = ";
        four.ShowData();
        cout << "�׸��� ��ü one = ";
        one.ShowData();
    }
}