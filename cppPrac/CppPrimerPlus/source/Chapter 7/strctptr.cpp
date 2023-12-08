// strctptr.cpp -- ����ü �Ű������� �����ϴ� �����͸� ����ϴ� �Լ�
#include <iostream>
#include <cmath>

// ����ü ���ø�
struct polar
{
	double distance;	// �������κ����� �Ÿ�
	double angle;		// ���������κ����� ����
};
struct rect
{
	double x;		// �������κ����� ���� �Ÿ�
	double y;		// �������κ����� ���� �Ÿ�
};

// �Լ� ����
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "x���� y���� �Է��Ͻʽÿ�: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace);	// �ּҸ� �����Ѵ�
		show_polar(&pplace);			// �ּҸ� �����Ѵ�
		cout << "x���� y���� �Է��Ͻʽÿ�(�������� q�� �Է�): ";
	}
	cout << "���α׷��� �����մϴ�.\n";	
	return 0;
}

// ���� ������ �� ������ ��ȯ�Ͽ� �� ��ǥ�� ����Ѵ�
void show_polar(const polar * pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "�Ÿ� = " << pda->distance;
	cout << ", ���� = " << pda->angle * Rad_to_deg;
	cout << "��\n";
}

// ���� ��ǥ�� �� ��ǥ�� ��ȯ�Ѵ�
void rect_to_polar(const rect * pxy, polar * pda)
{
	using namespace std;
	pda->distance =
		sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}
