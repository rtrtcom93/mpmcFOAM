// random.cpp -- 2진 파일에 임의 접근
#include <iostream>     // 대부분의 시스템에서 필요 없다
#include <fstream>
#include <iomanip>
#include <cstdlib>      // (또는 stdlib.h) exit()를 사용하기 위해
const int LIM = 20;
struct planet
{
    char name[LIM];     // 행성의 이름
    double population;  // 행성의 인구
    double g;           // 행성의 중력가속도
};

const char * file = "planets.dat";  // 있다고 가정 (binary.cpp 예제)
inline void eatline() { while (std::cin.get() != '\n') continue; }

int main()
{
    using namespace std;
    planet pl;
    cout << fixed;

// 초기의 내용을 화면에 표시한다
    fstream finout;     // 읽기/쓰기 스트림
    finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
    // 주: 어떤 컴파일러는 | ios_base::binary를 생략할 것을 요구한다
    int ct = 0;
    if (finout.is_open())
    {
        finout.seekg(0);    // 시작 위치로 간다
        cout << file << " 파일의 현재 내용은 다음과 같습니다:\n";
        while (finout.read((char *) &pl, sizeof pl))
        {
            cout << ct++ << ": " << setw(LIM) << pl.name << ": "
                 << setprecision(0) << setw(12) << pl.population
                 << setprecision(2) << setw(6) << pl.g << endl;
        }
        if (finout.eof())
            finout.clear(); // eof 플래그를 해제한다
        else
        {
            cerr << file << " 파일을 읽다가 에러 발생.\n";
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        cerr << file << " 파일을 열 수 없습니다. 종료.\n";
        exit(EXIT_FAILURE);
    }

// 레코드를 수정한다
    cout << "수정할 레코드 번호를 입력하십시오: ";
    long rec;
    cin >> rec;
    eatline();              // 개행 문자를 없앤다
    if (rec < 0 || rec >= ct)
    {
        cerr << "잘못된 레코드 번호입니다. 종료.\n";
        exit(EXIT_FAILURE);
    }
    streampos place = rec * sizeof pl;  // streampos형으로 변환한다
    finout.seekg(place);    // 임의 접근
    if (finout.fail())
    {
        cerr << "레코드를 찾다가 에러 발생.\n";
        exit(EXIT_FAILURE);
    }

    finout.read((char *) &pl, sizeof pl);
    cout << "현재 레코드의 내용:\n";
    cout << rec << ": " << setw(LIM) << pl.name << ": "
         << setprecision(0) << setw(12) << pl.population
         << setprecision(2) << setw(6) << pl.g << endl;
    if (finout.eof())
        finout.clear();     // eof 플래그를 해제한다

    cout << "행성의 이름을 입력하십시오: ";
    cin.get(pl.name, LIM);
    eatline();
    cout << "행성의 인구를 입력하십시오: ";
    cin >> pl.population;
    cout << "행성의 중력가속도를 입력하십시오: ";
    cin >> pl.g;
    finout.seekp(place);    // 수정할 레코드의 시작 바이트로 다시 간다
    finout.write((char *) &pl, sizeof pl) << flush;
    if (finout.fail())
    {
        cerr << "쓰다가 에러 발생.\n";
        exit(EXIT_FAILURE);
    }

// 개정된 파일을 화면에 표시한다
    ct = 0;
    finout.seekg(0);            // 파일의 시작 위치로 간다
    cout << file << " 파일의 개정된 내용은 다음과 같습니다:\n";
    while (finout.read((char *) &pl, sizeof pl))
    {
        cout << ct++ << ": " << setw(LIM) << pl.name << ": "
             << setprecision(0) << setw(12) << pl.population
             << setprecision(2) << setw(6) << pl.g << endl;
    }
    finout.close();
    cout << "프로그램을 종료합니다.\n";
    return 0; 
}
