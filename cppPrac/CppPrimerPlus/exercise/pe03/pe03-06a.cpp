// pe03-06a.cpp -- 주행 거리와 소비한 휘발유의 양으로 갤런당 주행 거리를 계산한다
#include<iostream>
using namespace std;
int main()
{
	double distance_miles, gasoline_gallons;
	cout << "주행한 거리를 마일 단위로 입력하십시오: ";
	cin >> distance_miles;
	cout << "소비한 휘발유의 양을 갤런 단위로 입력하십시오: ";
	cin >> gasoline_gallons;
	cout << "주행한 거리는 " <<  distance_miles << "마일이고, 소비한 휘발유는 " << gasoline_gallons << "갤런입니다.\n";
	cout << "따라서, 갤런당 " << distance_miles / gasoline_gallons << "마일을 주행했습니다.\n";
	return 0;
}
