// strout.cpp -- 인코어 형식의 지정(출력)
#include <iostream>
#include <sstream>
#include <string>
int main()
{
    using namespace std;
    ostringstream outstr;   // string 스트림을 관린한다

    string hdisk;
    cout << "하드디스크의 모델명이 무엇입니까? ";
    getline(cin, hdisk);
    int cap;
    cout << "하드디스크의 용량이 몇 GB입니까? ";
    cin >> cap;
    // 형식이 지정된 정보를 string 스트림에 써 넣는다
    outstr << hdisk << " 하드디스크의 용량은 "
           << cap << " GB입니다.\n";
    string result = outstr.str();   // 결과를 저장한다
    cout << result;                 // 내용을 화면에 표시한다

    return 0; 
}
