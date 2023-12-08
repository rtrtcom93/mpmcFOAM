// namesp.h
namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};

	// ���ȭ�� ����:
	// 4 �Ǵ� n �߿��� �� ���� ������ �׸��� 
	// �迭 ar�κ��� s�� sales ����� �����Ѵ�
	// �Էµ� �׸�鿡 ���� ��հ�, �ִ밪, �ּҰ��� ����Ͽ� �����Ѵ�
	// sales�� ������ ���ҵ���(���� ��쿡) 0���� �����Ѵ�
	void setSales(Sales & s, const double ar[], int n);

	// ��ȭ�� ����:
	// 1,2,3,4 �б⺰ �Ǹž� �ڷḦ ��ȭ������ ȹ���Ͽ�
	// s�� sales ����� �����Ѵ�
	// ��հ�, �ִ밪, �ּҰ��� ����Ͽ� �����Ѵ�
	void setSales(Sales & s);

	// s ����ü�� ��� �ִ� ��� ������ ����Ѵ�
	void showSales(const Sales & s);
}
