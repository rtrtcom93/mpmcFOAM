#include <iostream>
using namespace std;
class Dash
{
private:
	float time;
public:
	Dash() 
	{ 
	    time = 0; 
	}
    void set(float t) 
	{
	    time = t; 
	}
	float get(void) 
	{
	    return time;
	}
};
int main () {
    Dash *dash[3];
	int count = 0;
	float input = 0;
	float sum = 0;
	for (int i = 0; i < 3; i++) 
	{
	    dash[i] = new Dash();
	}
	for (int i = 0; i < 3; i++) 
	{
        cout << "40-yd dash �ð��� �Է��ϼ���: ";
        cin >> input;
	    dash[i]->set(input);
		count++;
	}
	for (int i = 0; i < 3; i++) 
	{
	    sum += dash[i]->get();
	}
        cout << "Ƚ��: " << count << endl
         << "���: " << (float)sum/3 << endl;
	for (int i = 0; i < 3; i++) 
	{
	    delete dash[i];
	}
    return 0;
}
