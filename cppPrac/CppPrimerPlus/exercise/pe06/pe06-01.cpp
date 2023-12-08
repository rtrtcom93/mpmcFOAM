// pe06-01.cpp
#include <iostream>
#include <cctype>		// 문자 관련 함수의 원형
using namespace std;
int main()
{
	char ch;

	cout << "영어 문장을 입력하십시오. (끝내려면 @)\n";
	cin.get(ch);
	while (ch != '@') {
		if (isalnum(ch))		// 알파벳 문자 또는 숫자인가?
		{
			if (isdigit(ch))	// 숫자인가?
				;						// 숫자이면 에코에서 제외한다
			else if (islower(ch))		// 알파벳 소문자인가?
				cout.put(toupper(ch));	// 대문자로 변환하여 에코한다
			else
				cout.put(tolower(ch));	// 소문자로 변환하여 에코한다
		} 
		else 
			cout.put(ch);		// 알파벳 문자 또는 숫자가 아니면 그대로 에코한다
		cin.get(ch);			// 다음 문자를 받아들인다
	}
	return 0;
}
