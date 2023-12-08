// usestack.cpp -- Stack Ŭ������ �׽�Ʈ�Ѵ�
#include <iostream>
using namespace std;
#include <cstring>
#include <cctype>	// �Ǵ� ctype.h
#include "stack.h"
int main()
{
	Stack st;	// ��� �ִ� ������ �����Ѵ�
	char c;
	Item client;
	static double running_total = 0;

	cout << "���� �߰��Ϸ��� A, ���� �����Ϸ��� D, \n"
		 << "�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
	while (cin >> c && toupper(c) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(c))
		{
			cout << '\a';
			continue;
		}
		switch (c)
		{
			case 'A':
			case 'a': cout << "�߰��� ���� �̸��� �Է��Ͻʽÿ�: ";
					  cin.get(client.fullname, 34);
					  cout << "�� ���� ������ �ݾ��� �Է��Ͻʽÿ�: ";
					  cin >> client.payment;
					  cin.clear();
					  while (cin.get() != '\n')
						  continue;

					  if (st.isfull())
						  cout << "������ ���� �� �ֽ��ϴ�.\n";
					  else
						  st.push(client);
					  break;
			case 'D':
			case 'd': if (st.isempty())
						  cout << "������ ��� �ֽ��ϴ�.\n";
					  else {
						  st.pop(client);
						  cout << client.fullname << " ���� �����߽��ϴ�.\n";
						  running_total += client.payment;
						  cout << "���ݱ����� ��� ���� ������ �� �ݾ��� " << running_total << "���Դϴ�.\n";
					  }
					  break;
		}
		cout << "���� �߰��Ϸ��� A, ���� �����Ϸ��� D, \n"
			 << "�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
