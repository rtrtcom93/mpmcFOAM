#include <iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void showbox(box mybox);
void setbox(box * mybox);

int main()
{
	box testbox = {"Technical Communication Laboratory", 10.5, 20.5, 30.5, 0};
	showbox(testbox);
	setbox(&testbox);
	showbox(testbox);
	return 0;
}

// box ����ü�� ������ ���޹޾�, �� ����� ���� ����ϴ� �Լ�
void showbox(box mybox)
{
	cout << "maker: " << mybox.maker << endl;
	cout << "height: " << mybox.height << endl;
	cout << "width: " << mybox.width << endl;
	cout << "length: " << mybox.length << endl;
	cout << "volume: " << mybox.volume << endl;
	cout << endl;
}

// box ����ü�� �ּҸ� ���޹޾�, volume ����� �ٸ� �� ���� ����� ������ �����ϴ� �Լ�
void setbox(box * mybox)
{
	mybox->volume = mybox->height * mybox->width * mybox->length;
}
