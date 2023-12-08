// pe08-04.cpp
#include <iostream>
using namespace std;
#include <cstring>	// strlen(), strcpy()를 사용하기 위해
struct stringy 
{
	char * str;	// 문자열을 지시한다
	int ct;		// 문자열의 길이('\0'은 제외)
};

inline void show(stringy & bean, int n = 1) { for (int i = 0; i < n; i++) cout << bean.str << endl; }
inline void show(const char string[], int n = 1) { for (int i = 0; i < n; i++) cout << string << endl; }
void set(stringy & bean, const char string[]);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);	// 첫 번째 전달인자는 참조이다,
				// testing의 사본을 저장할 공간을 할당한다,
				// beany의 str 멤버가 새 블록을 지시하도록 설정한다,
				// testing을 새 블록에 복사한다,
				// beany의 ct 멤버를 설정한다
	show(beany); 		// 문자열 멤버를 한 번 출력한다
	show(beany, 2);		// 문자열 멤버를 두 번 출력한다
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);		// testing 문자열을 한 번 출력한다
	show(testing, 3);	// testing 문자열을 세 번 출력한다
	show("Done!");
	return 0;
}

void set(stringy & bean, const char string[])
{
	char * ps = new char[strlen(string) + 1];
	bean.str = ps;
	strcpy(ps, string);
	bean.ct = strlen(bean.str);
}
