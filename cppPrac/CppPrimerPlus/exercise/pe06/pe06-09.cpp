// pe06-09.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

struct donator		// ����ü ���ø�
{
	string name;	// ����� �̸�
	double money;	// ��α�
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
		cout << "������ �� �� �����ϴ�.";
		exit(EXIT_FAILURE);
	}

	inFile >> num_donators;
	inFile.get();

	// ���� ����ü �迭�� �ʱ�ȭ
	donator * pdonators = new donator[num_donators];	// ���� ����ü �迭�� �޸� �Ҵ�
	cout << "��α��� ���� ��: " << num_donators << "��" << endl;

	int i;
	for (i = 0; i < num_donators; i++)
	{
		getline(inFile, pdonators[i].name);
		cout << "����� #" << i+1 << ": " << pdonators[i].name << endl;
		inFile >> pdonators[i].money;
		inFile.get();
		cout << "��α� #" << i+1 << ": " << pdonators[i].money << endl;
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
	cout << "��� �����\n";
	for (int i = 0; i < num; i++)
	{
		if (p_donator_array[i].money >= 10000)
		{
			cout << p_donator_array[i].name << " $" << p_donator_array[i].money << endl;
			count++;
		}
	}
	if (count ==0)
		cout << "����ڰ� �����ϴ�.\n";
}

void display_patrons(donator * p_donator_array, int num)
{
	int count = 0;
	cout << "\n-----------\n";
	cout << "�Ҿ� �����\n";
	for (int i = 0; i < num; i++)
	{
		if (p_donator_array[i].money < 10000)
		{
			cout << p_donator_array[i].name << " $" << p_donator_array[i].money << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "����ڰ� �����ϴ�.\n";
}
