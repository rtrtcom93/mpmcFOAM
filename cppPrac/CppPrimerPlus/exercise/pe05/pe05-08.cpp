// pe05-08.cpp -- C ��Ÿ�� ���ڿ��� ����Ͽ� �ܾ� �� ī��Ʈ�ϱ�

#include <iostream>
#include <cstring>     // strcmp() ����
const int STR_LIM = 50;
int main()
{
	using namespace std;
	char word[STR_LIM];
	int count = 0;

	cout << "���� �ܾ���� �Է��Ͻʽÿ�(�������� done�� �Է�):\n";

	while (cin >> word && strcmp("done", word))
		++count;

	cout << "�� " << count << " �ܾ �ԷµǾ����ϴ�.\n";
	return 0;
}
