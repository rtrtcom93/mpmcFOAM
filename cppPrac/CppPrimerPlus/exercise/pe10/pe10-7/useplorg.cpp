// useplorg.cpp -- Plorg 클래스의 사용
#include <iostream>
using namespace std;
#include "plorg.h"

int main()
{
	Plorg org1;
	org1.show();
	
	Plorg org2("백범사상연구회", 30);
	org2.show();
	
	Plorg org3("단재선생추모사업회", 40);
	org3.show();
	org3.changeCI(100);
	org3.show();
	
	return 0;
}
