// pe15-03.cpp -- ���� Ŭ�������� ����Ѵ�.
#include <iostream>
#include <cmath>	// (�Ǵ� math.h) unix ����ڴ� -lm �÷��װ� �ʿ��ϴ�
#include "exc_mean.h"
// �Լ� ����
double hmean(double a, double b) throw(std::logic_error);
double gmean(double a, double b) throw(std::logic_error);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "�� ���� �Է��Ͻʽÿ�: ";
	while (cin >> x >> y)
	{
		try {	// try ����� ����
			z = hmean(x,y);
			cout << x << ", " << y << "�� ��ȭ����� "
				 << z << "�Դϴ�.\n";
			cout << x << ", " << y << "�� ��������� "
				 << gmean(x,y) << "�Դϴ�.\n";
			cout << "�ٸ� �� ���� �Է��Ͻʽÿ�(�������� q): ";
		}  // try ����� ��
		catch (bad_gmean & hg)	// catch ����� ����
		{
			cout << hg.what() << endl;
			hg.mesg();
			cout << "���� �� ��: " << hg.v1 << ", "
				 << hg.v2 << endl;
			cout << "�˼��մϴ�. �� �̻� ������ �� �����ϴ�.\n";
			break;
		} 
		catch (bad_hmean & bg)	
		{
			cout << bg.what() << endl;
			bg.mesg();
			cout << "�˼��մϴ�. �� �̻� ������ �� �����ϴ�.\n";
			break;
		}	 // catch ����� ��
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

double hmean(double a, double b) throw(std::logic_error)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) throw(std::logic_error)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}
