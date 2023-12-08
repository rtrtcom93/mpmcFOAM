// pe17-3.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char * argv[])
{
    using namespace std;
    if (argc < 3)
    {
        cerr << "Usage: " << argv[0]
            << " source-file target-file\n";
        exit(EXIT_FAILURE);
    }
    ifstream fin(argv[1]);
    if (!fin)
    {
        cerr << "Can't open " << argv[1] << " for input\n";
        exit(EXIT_FAILURE);
    }
    ofstream fout(argv[2]);
    if (!fout)
    {
        cerr << "Can't open " << argv[2] << " for output\n";
        exit(EXIT_FAILURE);
    }
    char ch;
    while (fin.get(ch))
        fout << ch;
    cout << "Contents of " << argv[1] << " copied to "
         << argv[2] << endl;
    fin.close();
    fout.close();
    return 0;
}
