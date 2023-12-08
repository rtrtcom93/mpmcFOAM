// pe03-04.cpp -- 시간과 분을 입출력한다
#include <iostream>
using namespace std; 

void main()
{
	const int DAY = 86400;
	const int HOUR = 3600;
	const int MIN = 60;
	long sec, day, hour, min, second;

	cout << "초 수를 입력하시오: ";
	cin >> sec;

	day = sec / DAY;
	hour = (sec % DAY) / HOUR;
	min = (sec % HOUR) / MIN;
	second = sec % MIN;

	cout << sec << "초 = " << day << "일, " << hour << "시, " 
		 << min << "분, " << second << "초" << endl;
}
