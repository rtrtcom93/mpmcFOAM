// plorg.cpp -- Plorg 클래스 메서드들의 정의
#include <iostream>
#include <cstring>
using namespace std;
#include "plorg.h"

Plorg::Plorg(char * name, int index)
{
	strncpy(pl_name, name, 19);
	pl_name[20] = '\0';
	ci_index = index;
}

void Plorg::changeCI(int index)
{
	ci_index = index;
}

void Plorg::show() const
{
	 cout << "플로그 이름: " << pl_name << endl;
	 cout << "만족 지수(CI): " << ci_index << endl;
}
