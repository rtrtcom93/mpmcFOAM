// pe08-03.cpp -- ���ڿ��� �빮�ڷ� ��ȯ�Ѵ�
#include <iostream>
#include <string>
using namespace std; 

void main()
{
	int i;
	string str;

	while(1)
	{
		cout << "���ڿ��� �Է��Ͻÿ� (�������� q): ";
		getline(cin, str);
		if(str.size() == 1 && str[0] == 'q')
			break;
		for(i = 0; str[i] != '\0'; i++)
			cout << (char)toupper(str[i]);
		cout << endl;
	}
}
