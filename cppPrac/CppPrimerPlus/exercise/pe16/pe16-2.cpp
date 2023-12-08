// pe16-2.cpp
#include <iostream>
#include <string>
#include <string.h>

using namespace std;  //introduces namespace std

bool isPal(const string & s);
void lower_str(string &s);
void white_del(string &s);

int main()
{    
    string input;
    
    cout << "Enter a string (empty string to quit):\n";
    getline(cin, input);
    while (cin && input.size() > 0)
    {
		white_del(input);
		lower_str(input);

		cout << input;
        if (isPal(input))
            cout << "That was a palindrome!\n";
        else
            cout << "That was not a palindrome!\n";
        cout << "Enter a string (empty string to quit): ";
        getline(cin, input);
    }
    cout << "Bye!\n";

    return 0;
}

bool isPal(const string & s)
{
	string rev(s);
    copy(s.rbegin(), s.rend(), rev.begin());

    return (rev == s);
}

void lower_str(string &s)
{
	for(int i = 0; i < s.size(); i++)
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] |= 0x20;
}

void white_del(string &s)
{
	string dest = s;
	int i, j;
	for(i = 0, j = 0; i < dest.size(); i++) {
		if(dest[i] == ' ' || dest[i] == '\t' || dest[i] == '\'' ||
		   dest[i] == '\"' || dest[i] == ',')
			continue;
		else {
			s[j] = dest[i];
			j++;
		}
	}
	s.resize(j);
}
