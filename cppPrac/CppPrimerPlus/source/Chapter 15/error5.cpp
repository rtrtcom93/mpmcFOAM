//error5.cpp -- 스택 풀기
#include <iostream>
#include <cmath> 	// (또는 math.h), unix 사용자는 -lm 플래그가 필요
#include <string>
#include "exc_mean.h"

class demo
{
private:
    std::string word;
public:
    demo (const std::string & str)
    {
        word = str;
        std::cout << "demo " << word << " 생성\n";
    }
    ~demo()
    {
        std::cout << "demo " << word << " 파괴\n";
    }
    void show() const
    {
        std::cout << "demo " << word << " 생존\n";
    }
}; 

// 함수 원형
double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);
double means(double a, double b) throw(bad_hmean, bad_gmean);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    double x, y, z;
	{
        demo d1("found in block in main()");
        cout << "두 수를 입력하십시오: ";
        while (cin >> x >> y)
        {
               try {              	// try 블록의 시작
                   z = means(x,y);
                   cout << x << "와 " << y
                        << "의 평균의 평균은 " << z << endl;
                   cout << "다음 두 수를 입력하십시오: ";
               } 			// try 블록의 끝
               catch (bad_hmean & bg)	// catch 블록의 시작

               {
                   bg.mesg();
                   cout << "다시 하십시오.\n";
                   continue;
               }                  
               catch (bad_gmean & hg) 
               {
                   cout << hg.mesg();
                   cout << "사용된 두 값: " << hg.v1 << ", " 
                           << hg.v2 << endl;
                   cout << "죄송합니다. 더 이상 진행할 수 없습니다.\n";
                   break;
               } 			// catch 블록의 끝
        }
        d1.show();
    }
    cout << "프로그램을 종료합니다.\n";
    cin.get();
    cin.get();
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean(a,b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a,b);
    return std::sqrt(a * b); 
}

double means(double a, double b)
{
    double am, hm, gm;
    demo d2("found in means()");
    am = (a + b) / 2.0;    // 산술평균
    try 
    {
        hm = hmean(a,b);
        gm = gmean(a,b);
    }
    catch (bad_hmean & bg) // start of catch 블록의 시작
    {
        bg.mesg();
        std::cout << "means()에서 잡힘\n";
        throw;             // 예외 재발생
    }          
    d2.show();
    return (am + hm + gm) / 3.0;
}
