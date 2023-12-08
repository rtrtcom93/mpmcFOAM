// pe04-01.cpp -- 이름, 학점, 나이를 키보드로부터 읽어들여 다시 출력한다
#include <iostream>
using namespace std;
struct student
{
	char firstName[20];
	char lastName[20];
	char grade;
	int age;
};
int main()
{
	student Std;
	cout << "영문 퍼스트 네임(이름): ";
	cin.getline(Std.firstName, 20);
	cout << "영문 라스트 네임(성): ";
	cin.getline(Std.lastName, 20);
	cout << "학생이 원하는 학점: ";
	cin  >> Std.grade;
	cout << "나이: ";
	cin  >> Std.age;

	cout << "성명: " << Std.lastName << ", " << Std.firstName << endl;
	cout << "학점: " << (char) (Std.grade + 1) << endl;
	cout << "나이: " << Std.age << endl;

	return 0;
}
