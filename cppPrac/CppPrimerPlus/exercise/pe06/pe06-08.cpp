// pe6-8.cpp -- ���� �� ī��Ʈ�ϱ�
#include <iostream>
#include <fstream>			// ���� I/O ����
#include <cstdlib>			// exit() ����
const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	char ch;
	ifstream inFile;		// ���� �Է��� �ڵ鸵�ϴ� ��ü

	cout << "������ ������ �̸��� �Է��Ͻʽÿ�: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);	// ������ inFile�� ����
	if (!inFile.is_open())	// ������ ���� �� �����ϸ�
	{
		cout << filename << " ������ �� �� �����ϴ�.\n";
		cout << "���α׷��� �����մϴ�.\n";
		exit(EXIT_FAILURE);
	}
	int count = 0;			// ���� �׸� ��

	inFile.get(ch);			// ù ��° �� ���
	while (inFile.good())	// �Է��� ��ȣ�ϰ� EOF�� �ƴ� ����
	{
		count++;		// ī��Ʈ �ϳ� ����
		inFile.get(ch);		// ���� �� ���
	}

	cout << filename << " ���Ͽ��� " << count << "���� ���ڰ� ��� �ֽ��ϴ�.\n";

	inFile.close();			// ���� ó�� ����
	return 0;
}
