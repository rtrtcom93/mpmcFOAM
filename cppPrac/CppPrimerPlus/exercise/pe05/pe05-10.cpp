// pe05-09.cpp -- '*'�� ����Ѵ�
#include <iostream>
using namespace std; 

void main()
{
	int line, i, j;

	cout << "����� �� ���� �Է��Ͻÿ�: ";
	cin >> line;

	for(i = 0; i < line; i++) {
		for(j = 1; j < line-i; j++)
			cout << " ";
		for(j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}
}
