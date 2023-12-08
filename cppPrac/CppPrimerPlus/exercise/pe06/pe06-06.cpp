// pe06-06.cpp
#include <iostream>
using namespace std;
struct donator		// ����ü ���ø�
{
	char name[20];	// ����� �̸�
	double money;	// ��α�
};
void display_grand_patrons(donator *p_donator_array, int num);
void display_patrons(donator *p_donator_array, int num);
int main()
{
	int num_donators = 0;
	cout << "��α��� ���� ���� �� ������ �Է��Ͻʽÿ�: ";
	(cin >> num_donators).get();
	
	donator * pdonators = new donator [num_donators];	// ���� ����ü �迭�� �޸� �Ҵ�

	// ���� ����ü �迭�� �ʱ�ȭ
	int i;
	for (i = 0; i < num_donators; i++)
	{
		cout << "����� #" << i+1 << ": ";
		cin.getline(pdonators[i].name, 20);
		cout << "��α� #" << i+1 << ": ";
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
