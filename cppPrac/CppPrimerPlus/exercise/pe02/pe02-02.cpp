// pe02-02.cpp -- 마일을 킬로미터로 변환한다
#include <iostream>
using namespace std;
int main()
{
	float miles, km;
	
	cout << "거리를 마일 단위로 입력하십시오: ";
	cin >> miles;
    km = miles * 1.60934;	// 마일을 킬로미터로 환산
	cout << miles << " 마일은 " << km << " 킬로미터입니다.\n";
	return 0;
}
