// pe11-01.cpp -- randwalk.cpp 프로그램 결과를 파일로 저장한다.
// randwalk1.cpp -- Vector 클래스를 사용한다
// vect.cpp 파일과 함께 컴파일한다
#include <iostream>
#include <cstdlib>		// rand(), srand()의 원형
#include <ctime>		// time()의 원형
#include <fstream>
#include <cstdlib>
#include "vect.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));		// 난수 발생기에 씨를 뿌린다
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream fout("randwalk.txt");

	if(!fout.is_open())
	{
		cerr << "출력을 위해 randwalk.txt 파일을 열 수 없습니다.\n";
		exit(1);
	}

	cout << "목표 거리를 입력하십시오(끝내려면 q): ";
	while (cin >> target)
	{
		cout << "보폭을 입력하십시오: ";
		if (!(cin >> dstep))
			break;
		fout << "목표거리: " << target << ", 보폭: " << dstep << endl;
		fout << steps << ": " << result << endl;

		while (result.magval() < target)
		{			
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;			

			fout << steps << ": " << result << endl;
		}
		fout << steps << " 걸음 후 술고래가 서 있는 위치\n";
		fout << result << endl;
		result.polar_mode();
		fout << " 또는\n" << result << endl;
		fout << "걸음당 기둥에서 벗어난 평균 거리 = "
			 << result.magval()/steps << endl;
		steps = 0;
		result.set(0.0, 0.0);
		cout << "목표 거리를 입력하십시오(끝내려면 q): ";
	}
	cout << "프로그램을 종료합니다.\n";

	fout.close();
	return 0;
}
