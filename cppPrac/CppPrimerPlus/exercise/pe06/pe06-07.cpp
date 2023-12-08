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
    cout << "단어들을 입력하시오 (끝내려면 q):\n";
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
	cout << "모음으로 시작하는 단어 수: " << vowel << endl;
	cout << "자음으로 시작하는 단어 수: " << consonant << endl;
	cout << "기타: " << other << endl;

    return 0;
}
