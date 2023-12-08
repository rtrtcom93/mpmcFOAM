// pe06-04.cpp
#include <iostream>
using namespace std;
const int strsize = 20;

// Benevolent Order of Programmers 회원 구조체
struct bop

{
	char fullname[strsize];	// 실명
	char title[strsize];	// 직함
	char bopname[strsize];	// BOP 아이디
	int preference;			// 0 = fullname, 1 = title, 2 = bopname
};

void showmenu();
void display_by_fullname(bop boplist[], int count);
void display_by_title(bop boplist[], int count);
void display_by_bopname(bop boplist[], int count);
void display_by_preference(bop boplist[], int count);

int main()
{
	bop boplist[5] =
	{
		{ "Wimp Macho", "CEO", "BLUESKY", 0 },
		{ "Raki Rhodes", "Junior Programmer", "REDCLOUD", 1 },
		{ "Celia Laiter", "Technical Editor", "MIPS", 2 },
		{ "Hoppy Hipman", "Analyst Trainee", "SWEETY", 1 },
		{ "Pat Hand", "Technical Writer", "LOOPY", 2 }
	};

	char choice;
	showmenu();
	cin >> choice;
	while (choice != 'q' && choice != 'Q') 
	{
		switch (choice) 
		{
			case 'a' :
			case 'A' : 	display_by_fullname(boplist, 5);
						break;
			case 'b' :
			case 'B' :	display_by_title(boplist, 5);
						break;
			case 'c' :
			case 'C' :	display_by_bopname(boplist, 5);
						break;
			case 'd' :
			case 'D' :	display_by_preference(boplist, 5);
						break;
		}
		cout << "원하는 것을 선택하십시오: ";
		cin >> choice;
		if (choice == 'q' || choice == 'Q')
			break;
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

// 메뉴를 표시한다
void showmenu()
{
	cout << "Benevolent Order of Programmers\n"
			"a) 이름으로 열람\t\tb) 직함으로 열람\n"
			"c) BOP 아이디로 열람\t\td) 회원이 지정한 것으로 열람\n"
			"q) 종료\n"
			"원하는 것을 선택하십시오: ";
}

// 회원 명부를 실명으로 표시한다
void display_by_fullname(bop boplist[], int count)
{
	for (int i = 0; i < count; i++) {
		cout << boplist[i].fullname << endl;
	}
}

// 회원 명부를 직함으로 표시한다
void display_by_title(bop boplist[], int count)
{
	for (int i = 0; i < count; i++) {
		cout << boplist[i].title << endl;
	}
}

// 회원 명부를 BOP 아이디로 표시한다
void display_by_bopname(bop boplist[], int count)
{
	for (int i = 0; i < count; i++) {
		cout << boplist[i].bopname << endl;
	}
}

// 회원 명부를 각 회원이 지정한 방식으로 표시한다
void display_by_preference(bop boplist[], int count)
{
	for (int i = 0; i < count; i++) 
	{
		switch (boplist[i].preference) 
		{
			case 0 : cout << boplist[i].fullname << endl;
					 break;
			case 1 : cout << boplist[i].title << endl;
					 break;
			case 2 : cout << boplist[i].bopname << endl;
					break;
		}
	}
}
