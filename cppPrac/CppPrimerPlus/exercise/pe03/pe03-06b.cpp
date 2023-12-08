// pe03-06b.cpp -- 주행 거리와 소비한 휘발유의 양으로 100킬로미터당 리터 수를 계산한다 (유럽 스타일)
#include<iostream>
using namespace std;
int main()
{
	double distance_kilometers, gasoline_liters;
	cout << "주행한 거리를 킬로미터 단위로 입력하십시오: ";
	cin >> distance_kilometers;
	cout << "소비한 휘발유의 양을 리터 단위로 입력하십시오: ";
	cin >> gasoline_liters;
	cout << "주행한 거리는 " <<  distance_kilometers << "킬로미터이고, 소비한 휘발유는 " << gasoline_liters << "리터입니다.\n";
	cout << "따라서, 100킬로미터당 " << 100 * gasoline_liters/distance_kilometers << "리터가 소비됩니다.\n";
	return 0;
}
