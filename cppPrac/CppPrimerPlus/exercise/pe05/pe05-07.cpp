// pe05-07.cpp -- new�� ����Ͽ� ���� ����ü �迭 �����
#include <iostream>
using namespace std;
struct car
{
	char Maker[20];		// ���۾�ü
	int MakeYear;		// ���ۿ���
};
int main()
{
	int count;

	cout << "�� ���� ���� ������� �����Ͻðڽ��ϱ�? ";
	(cin >> count).get();

	car * CarList = new car[count];

	for (int i = 0; i < count; i++) 
	{
		cout << "�ڵ��� #" << i + 1 << endl;
		cout << "���۾�ü: ";
		cin.getline(CarList[i].Maker, 20);
		cout << "���ۿ���: ";
		(cin >> CarList[i].MakeYear).get();
	}

	cout << "���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�." << endl;
	for (i = 0; i < count; i++) {
		cout << CarList[i].MakeYear << "���� " << CarList[i].Maker << endl;
	}

	delete [] CarList;
	return 0;
}
