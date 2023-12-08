// usestack1.cpp -- Stack Ŭ������ �׽�Ʈ�Ѵ�
#include <iostream>
using namespace std;
#include <cctype>		// �Ǵ� ctype.h
#include "stack1.h"

void showStack(Stack & st);

int main()
{
	char c;
	unsigned long po;
	int st_size;

	cout << "ó������ �ʰ� �ִ�� �׾� �� �� �ִ� �ֹ��� ��: ";
	while (!(cin >> st_size))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "ó������ �ʰ� �ִ�� �׾� �� �� �ִ� �ֹ��� ��: ";
	}
	Stack st1(st_size);		// st_size���� ���Ҹ� ������ ������ �������� �����Ѵ�

	cout << "�ֹ��� �߰�(A)    �ֹ��� ó��(P)    ��ó�� �ֹ��� Ȯ��(C)    ���α׷� ����(Q)\n";
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
			case 'a': cout << "�߰��� �ֹ����� ��ȣ�� �Է��Ͻʽÿ�: ";
					  cin >> po;
					  if (st1.isfull())
						  cout << "������ ���� �� �ֽ��ϴ�.\n";
					  else
						  st1.push(po);
					  break;
			case 'P':
			case 'p': if (st1.isempty())
						  cout << "������ ��� �ֽ��ϴ�.\n";
					  else 
					  {
						  st1.pop(po);
						  cout << "#" << po << " �ֹ����� ó���߽��ϴ�.\n";
					  }
					  break;
			case 'C':
			case 'c': Stack st2;
					  st2 = st1;				// ���� �����ڸ� ����Ѵ�
					  showStack(st2);
					  Stack st3(st1);			// ���� �����ڸ� ����Ѵ�
					  showStack(st3);
					  break;					
		}
		cout << "�ֹ��� �߰�(A)    �ֹ��� ó��(P)    ��ó�� �ֹ��� Ȯ��(C)    ���α׷� ����(Q)\n";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

void showStack(Stack & st)
{
	Item value;

	if (st.isempty())
		cout << "������ ��� �ֽ��ϴ�.\n";
	else 
	{
		while (st.pop(value))
			cout << value << "\t";
		cout << "\n";
	}
}
