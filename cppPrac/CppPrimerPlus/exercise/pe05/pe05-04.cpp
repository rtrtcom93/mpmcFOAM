// pe05-04.cpp -- ������ �ܸ��� ���
#include <iostream>
using namespace std;
const unsigned int A_Principal = 100000;	// �� A�� ���� ����
const unsigned int B_Principal = 100000;	// �� B�� ���� ����
const float A_Rate = 0.1f;			// �� A�� �ܸ� ����
const float B_Rate = 0.05f;			// �� B�� ���� ����

int main()
{
	unsigned int A_Value = A_Principal;		// �� A�� ���� ��ġ
	unsigned int B_Value = B_Principal;		// �� B�� ���� ��ġ

	for (int year = 1; A_Value >= B_Value; year++)
	{
		A_Value += A_Principal * A_Rate;	// �ܸ� ���
		B_Value += B_Value * B_Rate;		// ���� ���
		cout << year << "�� ��\t" << A_Value << "\t" << B_Value << "\n";
	}
	--year;
	cout << "\n";
	cout << year << "�� �� �� B�� ���� ��ġ�� �� A�� ���� ��ġ�� �ʰ��Ѵ�.\n";
	cout << year << "�� �� �� A�� ���� ��ġ : " << A_Value << "\n";
	cout << year << "�� �� �� B�� ���� ��ġ : " << B_Value << "\n";

	return 0;
}
