// smrtptrs.cpp -- �� ���� ����Ʈ �����͵��� ���
// C++11 shared_ptr�� unique_ptr Ŭ������ �����ؾ� ��
#include <iostream>
#include <string>
#include <memory>

class Report
{
private:
    std::string str;
public:
    Report(const std::string s) : str(s) { std::cout << "��ü�� �����Ǿ����ϴ�!\n"; }
    ~Report() { std::cout << "��ü�� �����Ǿ����ϴ�!\n"; }
    void comment() const { std::cout << str << "\n"; }
};

int main()
{
    {
        std::auto_ptr<Report> ps (new Report("auto_ptr"));
        ps->comment();   // ��� �Լ��� �����ϱ� ���� ->�� ���
    }
    {
        std::shared_ptr<Report> ps (new Report("shared_ptr"));
        ps->comment();
    }
    {
        std::unique_ptr<Report> ps (new Report("unique_ptr"));
        ps->comment();
    }
    return 0;
}
