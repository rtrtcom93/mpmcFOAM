// pe06-07.cpp
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word;
    char ch;
    int vowel = 0;
    int consonant = 0;
    int other = 0;
    cout << "�ܾ���� �Է��Ͻÿ� (�������� q):\n";
    cin >> word;
    while ( word != "q")
    {
        ch = tolower(word[0]);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch ==  'i' || ch == 'o'
                          || ch == 'u')
                vowel++;
            else
                consonant++;
        }
        else
            other++;
        cin >> word;
    }
	cout << "�������� �����ϴ� �ܾ� ��: " << vowel << endl;
	cout << "�������� �����ϴ� �ܾ� ��: " << consonant << endl;
	cout << "��Ÿ: " << other << endl;

    return 0;
}
