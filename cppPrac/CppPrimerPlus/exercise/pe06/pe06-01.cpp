// pe06-01.cpp
#include <iostream>
#include <cctype>		// ���� ���� �Լ��� ����
using namespace std;
int main()
{
	char ch;

	cout << "���� ������ �Է��Ͻʽÿ�. (�������� @)\n";
	cin.get(ch);
	while (ch != '@') {
		if (isalnum(ch))		// ���ĺ� ���� �Ǵ� �����ΰ�?
		{
			if (isdigit(ch))	// �����ΰ�?
				;						// �����̸� ���ڿ��� �����Ѵ�
			else if (islower(ch))		// ���ĺ� �ҹ����ΰ�?
				cout.put(toupper(ch));	// �빮�ڷ� ��ȯ�Ͽ� �����Ѵ�
			else
				cout.put(tolower(ch));	// �ҹ��ڷ� ��ȯ�Ͽ� �����Ѵ�
		} 
		else 
			cout.put(ch);		// ���ĺ� ���� �Ǵ� ���ڰ� �ƴϸ� �״�� �����Ѵ�
		cin.get(ch);			// ���� ���ڸ� �޾Ƶ��δ�
	}
	return 0;
}
