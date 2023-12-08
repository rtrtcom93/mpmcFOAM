// pe17-4.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void main(int argc, char * argv[])
{
	int fin1_sw, fin2_sw;
	char ch;

	fin1_sw = fin2_sw = 0;

    if (argc < 4)
    {
        cerr << "Usage: " << argv[0]
             << " input-file input-file output-file\n";
        exit(EXIT_FAILURE);
    }

	ifstream fin1;
	fin1.open(argv[1], ios_base::in);
	if (!fin1)
    {
        cerr << "1Can't open " << argv[1] << " for output\n";
        exit(EXIT_FAILURE);
    }

	ifstream fin2;
	fin2.open(argv[2], ios_base::in);
    if (!fin2)
    {
        cerr << "2Can't open " << argv[2] << " for output\n";
        exit(EXIT_FAILURE);
    }

	ofstream fout;
	fout.open(argv[3], ios_base::out);
    if (!fout)
    {
        cerr << "Can't open " << argv[3] << " for output\n";
        exit(EXIT_FAILURE);
    }
    
    while(1) {
		while(1) {
			if(fin1.get(ch)) {
				fin1_sw = 0;
				if(ch == '\n') {
					fout << ' ';
					break;
				}
				else {
					fout << ch;
				}
			}
			else {
				fin1_sw = 1;
				break;
			}
		}

		while(1) {
			if(fin2.get(ch)) {
				fin2_sw = 0;
				fout << ch;
				if(ch == '\n') {
					break;
				}
			}
			else {
				fin2_sw = 1;
				break;
			}
		}
		if(fin1_sw == 1 && fin2_sw == 1)
			break;
	}
}
