// pe05-09.cpp -- '*'를 출력한다
#include <iostream>
using namespace std; 

void main()
{
	int line, i, j;

	cout << "출력할 행 수를 입력하시오: ";
	cin >> line;

	for(i = 0; i < line; i++) {
		for(j = 1; j < line-i; j++)
			cout << " ";
		for(j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}
}
