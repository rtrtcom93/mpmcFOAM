// pe06-03.cpp
#include <iostream>
using namespace std;
void showmenu();	// �Լ� ����
int main()
{
	char choice;
	showmenu();
	cin >> choice;
	while (choice != 'q')
	{
		switch(choice)
		{
			case 'c' :	cout << "ī�޶�� �ð��� ������ ���������� �����մϴ�.\n";
						break;
			case 'p' :	cout << "�ǾƴϽ�Ʈ�� �Ҹ��� �������Դϴ�.\n";
						break;
			case 't' :	cout << "��ǳ������ ���� ��ó�� ������ϴ�.\n";
						break;
			case 'g' :	cout << "��ǻ�� ���� ������ Ŀ���� �ֽ��ϴ�.\n";
						break;
			default	 :	while ( !(choice == 'c' || choice == 'p' || choice == 't' || choice == 'g') )
						{
							cout << "c, p, t, g �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q): ";
							cin >> choice;
							if (choice == 'q')
								break;
						}
						continue;
		}
		cout << "c, p, t, g �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q): ";
		cin >> choice;
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

void showmenu()
{
	cout << "���� ���� ���� �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q)\n"
	        "c) camera      p) pianist\n"
	        "t) tree        g) game\n";
}
