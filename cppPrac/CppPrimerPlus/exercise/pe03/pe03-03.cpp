// pe3-3.cpp
#include <iostream>
const double MINS_PER_DEG = 60.0;
const double SECS_PER_MIN = 60.0;
int main()
{
	using namespace std;

	int degrees;
	int minutes;
	int seconds;
	double latitude;

	cout << "위도를 도, 분, 초 단위로 입력하시오:\n";
	cout << "먼저, 도각을 입력하시오: ";
	cin >> degrees;
	cout << "다음에, 분각을 입력하시오: ";
	cin >> minutes;
	cout << "끝으로, 초각을 입력하시오: ";
	cin >> seconds;
	latitude = degrees + (minutes + seconds / SECS_PER_MIN)/MINS_PER_DEG;
	cout << degrees << "도, " << minutes << "분, "
		 << seconds << "초 = " << latitude << "도\n";
	return 0;
}
