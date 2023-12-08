// pe17-2.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const int Limit = 255;

int main(int argc, char * argv[])
{
	char input[Limit];

    if (argc < 2)
    {
        cerr << "Usage: " << argv[0]
             << " target-file\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout(argv[1], ios_base::app | ios_base::out);
    if (!fout)
    {
        cerr << "Can't open " << argv[1] << " for output\n";
        exit(EXIT_FAILURE);
    }
    
	cout << "저장할 문자열을 입력하십시오: ";
	cin.getline(input, Limit);

    for(int i = 0; input[i]; i++)
        fout << input[i];
    return 0;
}
