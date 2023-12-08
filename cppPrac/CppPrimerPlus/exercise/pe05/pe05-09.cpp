// pe05-09.cpp -- 단어의 개수를 카운트한다
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt = 0;
	string str;
	
	cout << "영어 단어를 입력하십시오(끝내려면 done을 입력):" << endl;

	while(1) {
		cin >> str;
		if(str == "done")
			break;
		cnt++;
	}

	cout << "총 " << cnt << " 단어가 입력되었습니다." << endl;

	return 0;
}
