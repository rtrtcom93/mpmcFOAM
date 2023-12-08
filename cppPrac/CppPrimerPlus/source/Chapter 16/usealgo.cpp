//usealgo.cpp -- �� ���� STL ��ҵ��� ����Ѵ�
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>
using namespace std;

char toLower(char ch) { return tolower(ch); }
string & ToLower(string & st);
void display(const string & s);

int main()
{
    vector<string> words;
    cout << "�ܾ���� �Է��Ͻʽÿ�(�������� quit):\n";
    string input;
    while (cin >> input && input != "quit")
        words.push_back(input);

    cout << "������ ���� �ܾ���� �Է��ϼ̽��ϴ�.\n";
    for_each(words.begin(), words.end(), display);
    cout << endl;

    // �ܾ���� �ҹ��ڷ� ��ȯ�Ͽ� ���տ� �ִ´�
    set<string> wordset;
    transform(words.begin(), words.end(),
        insert_iterator<set<string> > (wordset, wordset.begin()),
        ToLower);
    cout << "\n�ܾ���� ���ĺ��� ����Ʈ:\n";
    for_each(wordset.begin(), wordset.end(), display);
    cout << endl;

    // �ܾ�� �󵵸� �ʿ� �ִ´�
    map<string, int> wordmap;
    set<string>::iterator si;
    for (si = wordset.begin(); si != wordset.end(); si++)
        wordmap[*si] = count(words.begin(), words.end(), *si);

    // ���� ������ ����Ѵ�
    cout << "\n�ܾ ��:\n";
    for (si = wordset.begin(); si != wordset.end(); si++)
        cout << *si << ": " << wordmap[*si] << endl;

    return 0;
}

string & ToLower(string & st)
{
    transform(st.begin(), st.end(), st.begin(), toLower);
    return st; 
}

void display(const string & s)
{
    cout << s << " ";
}