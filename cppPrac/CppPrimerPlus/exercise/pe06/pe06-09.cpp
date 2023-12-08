// pe06-09.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

struct donator		// 구조체 템플릿
{
	string name;	// 기부자 이름
	double money;	// 기부금
};

void display_grand_patrons(donator * p_donator_array, int num);
void display_patrons(donator * p_donator_array, int num);

int main()
{
	int num_donators = 0;
	ifstream inFile;
	char *tempMoney;

	inFile.open("test.txt");
	if(!inFile.is_open())
	{
		cout << "파일을 열 수 없습니다.";
		exit(EXIT_FAILURE);
	}

	inFile >> num_donators;
	inFile.get();

	// 동적 구조체 배열의 초기화
	donator * pdonators = new donator[num_donators];	// 동적 구조체 배열에 메모리 할당
	cout << "기부금을 내실 분: " << num_donators << "명" << endl;

	int i;
	for (i = 0; i < num_donators; i++)
	{
		getline(inFile, pdonators[i].name);
		cout << "기부자 #" << i+1 << ": " << pdonators[i].name << endl;
		inFile >> pdonators[i].money;
		inFile.get();
		cout << "기부금 #" << i+1 << ": " << pdonators[i].money << endl;
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
