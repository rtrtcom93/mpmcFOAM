// pe06-06.cpp
#include <iostream>
using namespace std;
struct donator		// 구조체 템플릿
{
	char name[20];	// 기부자 이름
	double money;	// 기부금
};
void display_grand_patrons(donator *p_donator_array, int num);
void display_patrons(donator *p_donator_array, int num);
int main()
{
	int num_donators = 0;
	cout << "기부금을 내실 분이 몇 명인지 입력하십시오: ";
	(cin >> num_donators).get();
	
	donator * pdonators = new donator [num_donators];	// 동적 구조체 배열에 메모리 할당

	// 동적 구조체 배열의 초기화
	int i;
	for (i = 0; i < num_donators; i++)
	{
		cout << "기부자 #" << i+1 << ": ";
		cin.getline(pdonators[i].name, 20);
		cout << "기부금 #" << i+1 << ": ";
		(cin >> pdonators[i].money).get();
	}

	display_grand_patrons(pdonators, num_donators);
	display_patrons(pdonators, num_donators);
	
	delete [] pdonators;
	return 0;
}
 
void display_grand_patrons(donator * p_donator_array, int num)
{
	int count = 0;
	cout << "\n-----------\n";
	cout << "고액 기부자\n";
	for (int i = 0; i < num; i++)
	{
		if (p_donator_array[i].money >= 10000)
		{
			cout << p_donator_array[i].name << " $" << p_donator_array[i].money << endl;
			count++;
		}
	}
	if (count ==0)
		cout << "기부자가 없습니다.\n";
}

void display_patrons(donator * p_donator_array, int num)
{
	int count = 0;
	cout << "\n-----------\n";
	cout << "소액 기부자\n";
	for (int i = 0; i < num; i++)
	{
		if (p_donator_array[i].money < 10000)
		{
			cout << p_donator_array[i].name << " $" << p_donator_array[i].money << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "기부자가 없습니다.\n";
}
