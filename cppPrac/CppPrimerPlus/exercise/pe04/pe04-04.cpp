// pe04-04.cpp -- 이름, 성을 입력받아 출력한다
#include <iostream>
#include <string>
using namespace std; 

void main()
{
	string firstName, lastName, str;

	cout << "퍼스트 네임(이름)을 입력하시오: ";
	getline(cin, firstName);
	cout << "라스트 네임(성)을 입력하시오: ";
	getline(cin, lastName);

	str = lastName;
	str.append(", ");
	str.append(firstName);

	cout << "하나의 문자열로 만들면: " << str;
}
