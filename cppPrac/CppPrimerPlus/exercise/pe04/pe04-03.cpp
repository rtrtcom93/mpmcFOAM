// pe04-03.cpp -- char형 배열에 문자열 저장하기
#include <iostream>
#include <cstring>
const int SIZE = 20;
int main()
{
	using namespace std;
	char firstName[SIZE];
	char lastName[SIZE];
	char fullName[2*SIZE + 1];

	cout << "퍼스트 네임(이름)을 입력하시오: ";
	cin.getline(firstName,SIZE);
	cout << "라스트 네임(성)을 입력하시오: ";
	cin.getline(lastName,SIZE);
	strncpy(fullName,lastName,SIZE);
	strcat(fullName, ", ");
	strncat(fullName,firstName,SIZE);
	fullName[2*SIZE] = '\0';
	cout << "하나의 문자열로 만들면: "
		 << fullName << endl;
	return 0;
}
