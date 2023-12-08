// pe07-09.cpp
#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// getinfo()�� �� ���� �������ڸ� ���Ѵ�. �ϳ��� student ����ü
// �迭�� ù ��° ���Ҹ� �����ϴ� �������̰�, �ٸ� �ϳ���
// �� �迭�� ���� ���� ��Ÿ���� int ���̴�. �� �Լ��� �л���� 
// ���õ� �����͸� �䱸�Ͽ� �迭�� �����ϰ�, �迭�� �� á�ų�
// �л� �̸��� �� ���� �ԷµǸ� ����ȴ�. �� �Լ��� �迭�� 
// ������ ä���� ���� ���� �����Ѵ�.
int getinfo(student pa[], int n);

// display1()�� student ����ü�� �������ڷ� ���ϸ�
// �� ����ü�� ������ ����Ѵ�
void display1(student st);

// display2()�� student ����ü�� �ּҸ� �������ڷ� ���ϸ�
// �� ����ü�� ������ ����Ѵ�
void display2(const student * ps);

// display3()�� student ����ü �迭�� ù ��° ������ �ּҿ�
// �迭�� ���� ���� �������ڷ� ���ϸ�, ����ü���� ������ ����Ѵ�
void display3(const student pa[], int n);

int main()
{
    cout << "�б��� �л� ���� �Է��Ͻʽÿ�: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
		cout << endl;
    }
    display3(ptr_stu, entered);
    cout << "���α׷��� �����մϴ�.\n";
    return 0;
}

int getinfo(student pa[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++) 
	{
		cout << "�̸�: ";
		cin.getline(pa[i].fullname, 30);
		if (strcmp(pa[i].fullname, "") == 0)
			break;
		cout << "���: ";
		cin.getline(pa[i].hobby, 30);
		cout << "���: ";
		(cin >> pa[i].ooplevel).get();
		count++;
	}
	cout << endl;
	return count;
}

void display1(student st)
{
	cout << "�̸�: " << st.fullname << endl;
	cout << "���: " << st.hobby << endl;
	cout << "��� : " << st.ooplevel << endl;
}

void display2(const student * ps)
{
	cout << "�̸�: " << ps->fullname << endl;
	cout << "���: " << ps->hobby << endl;
	cout << "��� : " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++) 
	{
		cout << i+1 << "�� �л�" << endl;
		cout << "�̸�: " << pa[i].fullname << endl;
		cout << "���: " << pa[i].hobby << endl;
		cout << "��� : " << pa[i].ooplevel << endl;
	}
}
