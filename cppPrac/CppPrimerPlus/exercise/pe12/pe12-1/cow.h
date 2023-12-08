// cow.h -- 12장 프로그래밍 연습 1을 위한 헤더 파일
#ifndef COW_H_
#define COW_H_
class Cow
{
private:
	char name[20];
	char * hobby;
	double weight;
public:
	Cow();
	Cow(const char * nm, const char * ho, double wt);
	Cow(const Cow & c);
	~Cow();
	Cow & operator=(const Cow & c);
	void ShowCow() const;
};
#endif
