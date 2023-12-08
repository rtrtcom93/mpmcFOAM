// pe6-8.cpp -- 문자 수 카운트하기
#include <iostream>
#include <fstream>			// 파일 I/O 지원
#include <cstdlib>			// exit() 지원
const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	char ch;
	ifstream inFile;		// 파일 입력을 핸들링하는 객체

	cout << "데이터 파일의 이름을 입력하십시오: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);	// 파일을 inFile에 연결
	if (!inFile.is_open())	// 파일을 여는 데 실패하면
	{
		cout << filename << " 파일을 열 수 없습니다.\n";
		cout << "프로그램을 종료합니다.\n";
		exit(EXIT_FAILURE);
	}
	int count = 0;			// 읽은 항목 수

	inFile.get(ch);			// 첫 번째 값 얻기
	while (inFile.good())	// 입력이 양호하고 EOF가 아닌 동안
	{
		count++;		// 카운트 하나 증가
		inFile.get(ch);		// 다음 값 얻기
	}

	cout << filename << " 파일에는 " << count << "개의 문자가 들어 있습니다.\n";

	inFile.close();			// 파일 처리 종료
	return 0;
}
