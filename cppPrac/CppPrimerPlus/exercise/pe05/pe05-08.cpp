// pe05-08.cpp -- C 스타일 문자열을 사용하여 단어 수 카운트하기

#include <iostream>
#include <cstring>     // strcmp() 원형
const int STR_LIM = 50;
int main()
{
	using namespace std;
	char word[STR_LIM];
	int count = 0;

	cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력):\n";

	while (cin >> word && strcmp("done", word))
		++count;

	cout << "총 " << count << " 단어가 입력되었습니다.\n";
	return 0;
}
