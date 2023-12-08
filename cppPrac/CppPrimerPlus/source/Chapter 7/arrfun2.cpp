// arrfun2.cpp -- �迭 �Ű������� ����ϴ� �Լ�
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
// using ������ ��� std::�� ����Ѵ�
int main()
{
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
// � �ý��ۿ����� �տ� static�� �־�� �迭�� �ʱ�ȭ�� �� �ִ�

	std::cout << cookies << " = �迭 �ּ�, ";
// � �ý��ۿ����� �������� ��ȯ�� �ʿ��ϴ�: unsigned (cookies)

	std::cout << "sizeof cookies = " << sizeof cookies << std::endl;
	int sum = sum_arr(cookies, ArSize);
	std::cout << "���� ���� �� �հ�: " << sum << std::endl;
	sum = sum_arr(cookies, 3);		// �迭 ���� ���� ���̱�
	std::cout << "ó�� �� ����� ���� " << sum << "���� �Ծ����ϴ�.\n";
	sum = sum_arr(cookies + 4, 4);		// �迭 ���� ���� ���̱�
	std::cout << "������ �� ����� ���� " << sum << "���� �Ծ����ϴ�.\n";
	return 0;
}

// ���� �迭�� �հ踦 �����Ѵ�
int sum_arr(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " = arr, ";
// � �ý��ۿ����� �������� ��ȯ�� �ʿ��ϴ�: unsigned (arr)

	std::cout << "sizeof arr = " << sizeof arr << std::endl;
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}
