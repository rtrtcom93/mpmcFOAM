// pe05-04.cpp -- 복리와 단리의 계산
#include <iostream>
using namespace std;
const unsigned int A_Principal = 100000;	// 고객 A의 저축 원금
const unsigned int B_Principal = 100000;	// 고객 B의 저축 원금
const float A_Rate = 0.1f;			// 고객 A의 단리 이율
const float B_Rate = 0.05f;			// 고객 B의 복리 이율

int main()
{
	unsigned int A_Value = A_Principal;		// 고객 A의 투자 가치
	unsigned int B_Value = B_Principal;		// 고객 B의 투자 가치

	for (int year = 1; A_Value >= B_Value; year++)
	{
		A_Value += A_Principal * A_Rate;	// 단리 계산
		B_Value += B_Value * B_Rate;		// 복리 계산
		cout << year << "년 후\t" << A_Value << "\t" << B_Value << "\n";
	}
	--year;
	cout << "\n";
	cout << year << "년 후 고객 B의 투자 가치가 고객 A의 투자 가치를 초과한다.\n";
	cout << year << "년 후 고객 A의 투자 가치 : " << A_Value << "\n";
	cout << year << "년 후 고객 B의 투자 가치 : " << B_Value << "\n";

	return 0;
}
