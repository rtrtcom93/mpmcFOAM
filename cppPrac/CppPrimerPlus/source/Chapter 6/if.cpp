// if.cpp -- if ����
#include <iostream>
int main()
{
	using std::cin;			// declaration�� ���
	using std::cout;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')		// ������ ��(��ħǥ)���� ���� ����
	{
		if (ch == ' ')		// ch�� ��ĭ���� �˻�
			++spaces;	// ch�� ��ĭ�� ������ ����
		++total;		// ��ĭ�̵� �ƴϵ� �Ź� ����
		cin.get(ch);
	}
	cout << "�� ������ �� ���� ���� " << total << "�̰�, ";
	cout << "�� �߿��� ��ĭ�� " << spaces << "���Դϴ�.\n";
	return 0;
}
