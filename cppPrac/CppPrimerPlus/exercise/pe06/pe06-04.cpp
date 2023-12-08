// pe06-04.cpp
#include <iostream>
using namespace std;
const int strsize = 20;

// Benevolent Order of Programmers ȸ�� ����ü
struct bop

{
	char fullname[strsize];	// �Ǹ�
	char title[strsize];	// ����
	char bopname[strsize];	// BOP ���̵�
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
		cout << "���ϴ� ���� �����Ͻʽÿ�: ";
		cin >> choice;
		if (choice == 'q' || choice == 'Q')
			break;
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

// �޴��� ǥ���Ѵ�
void showmenu()
{
	cout << "Benevolent Order of Programmers\n"
			"a) �̸����� ����\t\tb) �������� ����\n"
			"c) BOP ���̵�� ����\t\td) ȸ���� ������ ������ ����\n"
			"q) ����\n"
			"���ϴ� ���� �����Ͻʽÿ�: ";
}

// ȸ�� ��θ� �Ǹ����� ǥ���Ѵ�
void display_by_fullname(bop boplist[], int count)
{
	for (int i = 0; i < count; i++) {
		cout << boplist[i].fullname << endl;
	}
}

// ȸ�� ��θ� �������� ǥ���Ѵ�
void display_by_title(bop boplist[], int count)
{
	for (int i = 0; i < count; i++) {
		cout << boplist[i].title << endl;
	}
}

// ȸ�� ��θ� BOP ���̵�� ǥ���Ѵ�
void display_by_bopname(bop boplist[], int count)
{
	for (int i = 0; i < count; i++) {
		cout << boplist[i].bopname << endl;
	}
}

// ȸ�� ��θ� �� ȸ���� ������ ������� ǥ���Ѵ�
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
