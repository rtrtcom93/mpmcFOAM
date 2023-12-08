// studenti.cpp -- private ����� ����ϴ� Student Ŭ����
#include "studenti.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

// public �޼����
double Student::Average() const
{
    if (ArrayDb::size() > 0)
        return ArrayDb::sum()/ArrayDb::size();  
    else
        return 0;
}

const string & Student::Name() const
{
    return (const string &) *this;
}

double & Student::operator[](int i)
{
    return ArrayDb::operator[](i);         // ArrayDb::operator[]() ���
}

double Student::operator[](int i) const
{
    return ArrayDb::operator[](i);
}

// private �޼���
ostream & Student::arr_out(ostream & os) const
{
    int i;
    int lim = ArrayDb::size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << ArrayDb::operator[](i) << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else
        os << " �� �迭 ";
    return os; 
}

// ������
// operator>>()�� string ������ ����Ѵ�
istream & operator>>(istream & is, Student & stu)
{
    is >> (string &)stu;
    return is; 
}

// string ������ getline(ostream &, const string &)�� ����Ѵ�
istream & getline(istream & is, Student & stu)
{
    getline(is, (string &)stu);
    return is;
}

// operator<<()�� string ������ ����Ѵ�
ostream & operator<<(ostream & os, const Student & stu)
{
    os << (const string &) stu  << " �л��� ����ǥ:\n";
    stu.arr_out(os);  // scores�� ���� private �޼��带 ����Ѵ�
    return os;
}
