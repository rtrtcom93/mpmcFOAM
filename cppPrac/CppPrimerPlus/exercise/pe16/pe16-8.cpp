// pe16-8.cpp

#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <string>

int main()
{
    using namespace std;
    string temp;

    set<string> mats;
    cout << "Enter Mat's guest list (empty line to quit):\n";
    while (getline(cin,temp) && temp.size() > 0)
        mats.insert(temp);
    ostream_iterator<string,char> out (cout, "\n");
    cout << "Mat's guest list:\n";
    copy(mats.begin(), mats.end(), out);

    set<string> pats;
    cout << "Enter Pat's guest list (empty line to quit):\n";
    while (getline(cin,temp) && temp.size() > 0)
        pats.insert(temp);
    cout << "\nPat's guest list:\n";
    copy(pats.begin(), pats.end(), out);

    set<string> both;
    set_union(mats.begin(), mats.end(), pats.begin(), pats.end(),
        insert_iterator<set<string> >(both, both.begin()));
    cout << "\nMerged guest list:\n";
    copy(both.begin(), both.end(), out);

    return 0;
}
