// structur.cpp -- ������ ����ü
#include <iostream>
struct inflatable			// ����ü ����
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable guest =
	{
		"Glorious Gloria",	// name ��
		1.88,			// volume ��
		29.99			// price ��
	};				// guest�� inflatable���� ����ü �����̴�
					// ������ ������ �ʱ�ȭ�ȴ�
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};				// pal�� inflatable���� �� ��° �����̴�
// ����: � C++ �ý��ۿ����� ������ ���� ������ �䱸�Ѵ�
// static inflatable guest =

	cout << "���� �Ǹ��ϰ� �ִ� ����ǳ����\n" << guest.name;
	cout << "�� " << pal.name << "�Դϴ�.\n";
// pal.name�� pal ������ name ����̴�
	cout << "�� ��ǰ�� $";
	cout << guest.price + pal.price << "�� �帮�ڽ��ϴ�!\n";
	return 0;
}
