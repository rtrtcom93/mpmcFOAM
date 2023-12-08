// pe15-03.cpp -- 예외 클래스들을 사용한다.
#include <iostream>
#include <cmath>	// (또는 math.h) unix 사용자는 -lm 플래그가 필요하다
#include "exc_mean.h"
// 함수 원형
double hmean(double a, double b) throw(std::logic_error);
double gmean(double a, double b) throw(std::logic_error);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "두 수를 입력하십시오: ";
	while (cin >> x >> y)
	{
		try {	// try 블록의 시작
			z = hmean(x,y);
			cout << x << ", " << y << "의 조화평균은 "
				 << z << "입니다.\n";
			cout << x << ", " << y << "의 기하평균은 "
				 << gmean(x,y) << "입니다.\n";
			cout << "다른 두 수를 입력하십시오(끝내려면 q): ";
		}  // try 블록의 끝
		catch (bad_gmean & hg)	// catch 블록의 시작
		{
			cout << hg.what() << endl;
			hg.mesg();
			cout << "사용된 두 값: " << hg.v1 << ", "
				 << hg.v2 << endl;
			cout << "죄송합니다. 더 이상 진행할 수 없습니다.\n";
			break;
		} 
		catch (bad_hmean & bg)	
		{
			cout << bg.what() << endl;
			bg.mesg();
			cout << "죄송합니다. 더 이상 진행할 수 없습니다.\n";
			break;
		}	 // catch 블록의 끝
	}
	cout << "프로그램을 종료합니다.\n";
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
