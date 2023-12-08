#include <iostream>
using namespace std;
#include <cstring>
#include "cow.h"

Cow::Cow()
{
	strcpy(name, "noname");
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	strncpy(name, nm, 19);
	name[20] = '\0';
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow & c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	if (this == &c)
		return *this;
	delete [] hobby;
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	strcpy(name, c.name);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	cout << "�̸�: " << name << endl;
	cout << "����: " << hobby << endl;
	cout << "ü��: " << weight << endl;
}
