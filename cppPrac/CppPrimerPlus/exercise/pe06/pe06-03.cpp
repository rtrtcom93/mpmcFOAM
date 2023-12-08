// pe06-03.cpp
#include <iostream>
using namespace std;
void showmenu();	// 함수 원형
int main()
{
	char choice;
	showmenu();
	cin >> choice;
	while (choice != 'q')
	{
		switch(choice)
		{
			case 'c' :	cout << "카메라는 시간과 공간을 순간적으로 포착합니다.\n";
						break;
			case 'p' :	cout << "피아니스트는 소리의 예술가입니다.\n";
						break;
			case 't' :	cout << "단풍나무는 잎이 별처럼 생겼습니다.\n";
						break;
			case 'g' :	cout << "컴퓨터 게임 시장이 커지고 있습니다.\n";
						break;
			default	 :	while ( !(choice == 'c' || choice == 'p' || choice == 't' || choice == 'g') )
						{
							cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q): ";
							cin >> choice;
							if (choice == 'q')
								break;
						}
						continue;
		}
		cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q): ";
		cin >> choice;
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

void showmenu()
{
	cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)\n"
	        "c) camera      p) pianist\n"
	        "t) tree        g) game\n";
}
