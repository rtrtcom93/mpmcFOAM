// studentc.cpp -- �����θ�Ʈ�� ����ϴ� Student Ŭ����
#include "studentc.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

//public �޼����
double Student::Average() const
{
    if (scores.size() > 0)
        return scores.sum()/scores.size();  
    else
        return 0;
}

const string & Student::Name() const
{
    return name;
}

double & Student::operator[](int i)
{
    return scores[i];         // valarray<double>::operator[]() ���
}

double Student::operator[](int i) const
{
    return scores[i];
}

// private �޼���
ostream & Student::arr_out(ostream & os) const
{
    int i;
    int lim = scores.size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << scores[i] << " ";
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
    is >> stu.name;
    return is; 
}

// string friend getline(ostream &, const string &) �� ����Ѵ�
istream & getline(istream & is, Student & stu)
{
    getline(is, stu.name);
    return is;
}

// operator<<()�� string ������ ����Ѵ�
ostream & operator<<(ostream & os, const Student & stu)
{
    os << stu.name << " �л��� ����ǥ:\n";
    stu.arr_out(os);  // scores�� ���� private �޼��� ���
    return os;
}
