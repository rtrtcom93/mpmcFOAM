// pe05-09.cpp -- �ܾ��� ������ ī��Ʈ�Ѵ�
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt = 0;
	string str;
	
	cout << "���� �ܾ �Է��Ͻʽÿ�(�������� done�� �Է�):" << endl;

	while(1) {
		cin >> str;
		if(str == "done")
			break;
		cnt++;
	}

	cout << "�� " << cnt << " �ܾ �ԷµǾ����ϴ�." << endl;

	return 0;
}
