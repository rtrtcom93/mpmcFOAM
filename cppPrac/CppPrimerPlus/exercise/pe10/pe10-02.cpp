// pe10-02.cpp -- 클래스에 3개의 생성자와 2개의 디스플레이 메서드를 정의한다.
#include <iostream>
#include <string>
using namespace std; 

class Person		// 클래스 선언
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
	cout << "이름(Show 메서드 사용): " << fname << " " << lname;
}

void Person::FormalShow() const
{
	cout << "이름(FormalShow 메서드 사용): " << lname << ", " << fname;
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
