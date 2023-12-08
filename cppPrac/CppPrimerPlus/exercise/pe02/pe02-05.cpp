// pe02-05.cpp -- ¼·¾¾¸¦ È­¾¾·Î º¯È¯ÇÑ´Ù
#include <iostream>
using namespace std; 
double convert(double);
int main()
{
	double Celsius, Fahrenheit;
	cout << "¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ°í Enter Å°¸¦ ´©¸£½Ê½Ã¿À: ";
	cin >> Celsius;
	Fahrenheit = convert(Celsius);
	cout << "¼·¾¾ " << Celsius << "µµ´Â È­¾¾ " << Fahrenheit << "µµÀÔ´Ï´Ù.\n";
    return 0;
}

double convert(double Cel)
{
	double Fah;			// È­¾¾ ¿Âµµ
	Fah = 1.8 * Cel + 32.0;		// È¯»ê °ø½Ä
	return Fah;
}
