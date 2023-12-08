// pe10-02.cpp -- Ŭ������ 3���� �����ڿ� 2���� ���÷��� �޼��带 �����Ѵ�.
#include <iostream>
#include <string>
using namespace std; 

class Person		// Ŭ���� ����
{
private:
	static const LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person() {lname = ""; fname[0] = '\0'; }
	Person(const string & ln, const char * fn = "Heyyou");
	void Show() const;
	void FormalShow() const;
};

Person::Person(const string & ln, const char * fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show() const
{
	cout << "�̸�(Show �޼��� ���): " << fname << " " << lname;
}

void Person::FormalShow() const
{
	cout << "�̸�(FormalShow �޼��� ���): " << lname << ", " << fname;
}

int main()
{
	//using std::cout;
	//using std::ios_base;

	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");

	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;
	
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;

	three.Show();
	cout << endl;
	three.FormalShow();
	cout << endl;

	return 0;
}
