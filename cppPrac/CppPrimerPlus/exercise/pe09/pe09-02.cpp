// pe09-02.cpp -- Listing 9.8�� string ��ü�� ����ؼ� ��ȯ�Ѵ�
#include <iostream>
#include <string>
using namespace std; 

// �Լ� ����
void strcount(const string str);

int main()
{
	string str;
	char next;

	cout << "�������� �� ���� �Է��Ͻʽÿ�:\n";

	while (1)
	{
		getline(cin, str);
		if(str[0] == '\0') 
			break;
		strcount(str);
		cout << "���� ���� �Է��Ͻʽÿ�(�������� �� ���� �Է�):\n";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

void strcount(const string str)
{
	static int total = 0;		// ���� ���� ����
	int count;			// �ڵ� ���� ����

	cout << "\"" << str <<"\"���� ";
	for(count = 0 ; str[count] != '\0'; count++);	// ���ڿ��� ������ ī��Ʈ�Ѵ�

	total += count;
	cout << count << "���� ���ڰ� �ֽ��ϴ�.\n";
	cout << "���ݱ��� �� " << total << "���� ���ڸ� �Է��ϼ̽��ϴ�.\n";
}
