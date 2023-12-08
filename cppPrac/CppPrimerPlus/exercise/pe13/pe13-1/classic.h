// classic.h -- 13장 프로그래밍 연습 1을 위한 Cd 클래스와 Classic 클래스 선언
#ifndef CLASSIC_H_
#define CLASSIC_H_

// 기초 클래스
class Cd		// CD 디스크를 나타낸다
{
private:
	char performers[50];	// 연주자
	char label[20];			// 음반사
	int selections;			// 곡목 수
	double playtime;		// 분 단위의 연주 시간
public:
	Cd(char * s1 = "None", char * s2 = "None", int n = 0, double x = 0.0);
	virtual ~Cd() { }
	virtual void Report() const;	// CD의 모든 데이터를 보고한다
	Cd & operator=(const Cd & d);
};

// Cd 클래스로부터 파생시킨 Classic 클래스
class Classic : public Cd
{
private:
    char primary_work[50];
public:
    // 생성자들
	Classic(char * primary = "None", char * s1 = "None", char * s2 = "None", int n = 0, double x = 0.0);
	Classic(const Cd & d, char * primary);
    // 멤버 함수
    virtual void Report() const;
    // 오버로딩 연산자
    Classic & operator=(const Classic & x);
};

#endif
