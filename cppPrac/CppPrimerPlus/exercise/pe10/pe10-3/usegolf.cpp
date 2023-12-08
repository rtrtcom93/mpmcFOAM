// usegolf.cpp -- Golf 클래스를 사용한다
#include <iostream>
using namespace std;
#include "golf.h"

const int ArSize = 5;

int main()
{
	Golf me = Golf();
	me.showgolf();

	Golf ann = Golf("Ann Birdfree", 24);
	ann.showgolf();
	
	Golf andy, temp;
	andy.setgolf(temp);
	andy.showgolf();
	andy.updatehandicap();
	andy.showgolf();
	
	Golf golfers[ArSize];
	int i, j;
	
	for (i = 0; i < ArSize && golfers[i].setgolf(temp); i++) ;
	for (j = 0; j < i; j++)
	{
		cout << "Golfer #" << j+1 << endl;
		golfers[j].showgolf();
	}

	return 0;
}
