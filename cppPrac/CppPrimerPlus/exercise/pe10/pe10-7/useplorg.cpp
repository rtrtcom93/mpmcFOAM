// useplorg.cpp -- Plorg Ŭ������ ���
#include <iostream>
using namespace std;
#include "plorg.h"

int main()
{
	Plorg org1;
	org1.show();
	
	Plorg org2("�����󿬱�ȸ", 30);
	org2.show();
	
	Plorg org3("���缱���߸���ȸ", 40);
	org3.show();
	org3.changeCI(100);
	org3.show();
	
	return 0;
}
