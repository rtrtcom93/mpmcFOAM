#include <iostream>
#include <cmath>
using namespace std;
int main () {
    long long worldPopulation, usPopulation = 0;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "세계 인구수를 입력하시오: ";
    cin >> worldPopulation;
    cout << "미국의 인구수를 입력하시오: ";
    cin >> usPopulation;
    cout << "세계 인구수에서 미국이 차지하는 비중은 " 
	     << (static_cast<long double>(usPopulation) / (long double)worldPopulation) * 100 << "%이다" << endl;
	return 0;
}
