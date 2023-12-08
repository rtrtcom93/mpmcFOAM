// complex0.cpp -- 11�� ���α׷��� ���� 7
#include <iostream>
using namespace std;
#include "complex0.h"

complex::complex(double Re, double Im)
{
	real = Re;
	imaginary = Im;
}

complex complex::operator+(const complex & comp) const
{
	return complex(real + comp.real, imaginary + comp.imaginary);
}

complex complex::operator-(const complex & comp) const
{
	return complex(real - comp.real, imaginary - comp.imaginary);
}

complex complex::operator*(const complex & comp) const
{
	return complex(real * comp.real - imaginary * comp.imaginary, real * comp.imaginary + imaginary * comp.real);
}

complex complex::operator*(double mult) const
{
	return complex(mult * real, mult * imaginary);
}

complex complex::operator~() const
{
	return complex(real, -imaginary);
}

ostream & operator<<(ostream & os, const complex & comp)
{
	os << "(" << comp.real << "," << comp.imaginary << "i)";
	return os;
}
istream & operator>>(istream & is, complex & comp)
{
	cout << "�Ǽ���: ";
	if (!(is >> comp.real))
		return is;

	cout << "�����: ";
	if (!(is >> comp.imaginary))
		return is;

	return is;
}
