// textin4.cpp -- cin.get()���� ���� �б�
#include <iostream>
int main(void)
{
	using namespace std;
	int ch;				// char���� �ƴ϶� int���̾�� �Ѵ�
	int count = 0;

	while ((ch = cin.get()) != EOF)	// ���� �� �˻�
	{
		cout.put(char(ch));
		++count;
	}
	cout << count << " ���ڸ� �о����ϴ�.\n";
	return 0;
}
