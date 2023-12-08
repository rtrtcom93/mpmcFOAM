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

// box 구조체를 값으로 전달받아, 각 멤버의 값을 출력하는 함수
void showbox(box mybox)
{
	cout << "maker: " << mybox.maker << endl;
	cout << "height: " << mybox.height << endl;
	cout << "width: " << mybox.width << endl;
	cout << "length: " << mybox.length << endl;
	cout << "volume: " << mybox.volume << endl;
	cout << endl;
}

// box 구조체의 주소를 전달받아, volume 멤버를 다른 세 가지 멤버의 곱으로 설정하는 함수
void setbox(box * mybox)
{
	mybox->volume = mybox->height * mybox->width * mybox->length;
}
