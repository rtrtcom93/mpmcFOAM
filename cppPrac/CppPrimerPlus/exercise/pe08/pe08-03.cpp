// pe08-03.cpp -- 문자열을 대문자로 변환한다
#include <iostream>
#include <string>
using namespace std; 

void main()
{
	int i;
	string str;

	while(1)
	{
		cout << "문자열을 입력하시오 (끝내려면 q): ";
		getline(cin, str);
		if(str.size() == 1 && str[0] == 'q')
			break;
		for(i = 0; str[i] != '\0'; i++)
			cout << (char)toupper(str[i]);
		cout << endl;
	}
}
