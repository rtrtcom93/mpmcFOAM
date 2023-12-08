// dmaabc.h  -- 상속과 동적 메모리 할당
#ifndef DMAABC_H_
#define DMAABC_H_
#include <iostream>
using namespace std;

// 추상화 기초 클래스
class dmaABC
{
private:
	char * label;
	int rating;
public:
	dmaABC(const char * l = "null", int r = 0);
	dmaABC(const dmaABC & rs);
	virtual ~dmaABC();
	virtual void ViewGoods() const = 0;
	virtual dmaABC & operator=(const dmaABC & rs);
	friend ostream & operator<<(ostream & os, const dmaABC & rs);
};

// DMA를 사용하는 파생 클래스
class baseDMA : public dmaABC
{
public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA() { }
	virtual void ViewGoods() const;
	virtual baseDMA & operator=(const baseDMA & rs);
	friend ostream & operator<<(ostream & os, const baseDMA & rs);
};

// DMA를 사용하지 않는 파생 클래스
// 파괴자가 필요 없다
// 암시적 복사 생성자를 사용한다
// 암시적 대입 연산자를 사용한다
class lacksDMA : public dmaABC
{
private:
	char color[40];
public:
	lacksDMA(const char * c = "blank", const char * l = "null",
				int r = 0);
	lacksDMA(const char * c, const dmaABC & rs);
	lacksDMA(const lacksDMA & rs);
	virtual ~lacksDMA() { }
	virtual void ViewGoods() const;
	virtual lacksDMA & operator=(const lacksDMA & rs);
	friend ostream & operator<<(ostream & os, 
								const lacksDMA & rs);
};

// DMA를 사용하는 파생 클래스
class hasDMA : public dmaABC
{
private:
	char * style;	// 생성자에서 new를 사용한다
public:
	hasDMA(const char * s = "none", const char * l = "null",
				int r = 0);
	hasDMA(const char * s, const dmaABC & rs);
	hasDMA(const hasDMA & hs);
	virtual ~hasDMA();
	virtual void ViewGoods() const;
	virtual hasDMA & operator=(const hasDMA & rs); 
	friend ostream & operator<<(ostream & os, 
								const hasDMA & rs);
};

#endif
