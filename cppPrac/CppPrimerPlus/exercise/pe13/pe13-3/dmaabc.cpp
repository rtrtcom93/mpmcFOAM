// dmaabc.cpp -- DMA 클래스 메서드들
#include "dmaabc.h"
#include <cstring>

// dmaABC 메서드들
dmaABC::dmaABC(const char * l, int r)
{
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	rating = r;
}

dmaABC::dmaABC(const dmaABC & rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);
	rating = rs.rating;
}

dmaABC::~dmaABC()
{
	delete [] label;
}

void dmaABC::ViewGoods() const
{
	cout << "상표: " << label << endl;
	cout << "등급: " << rating << endl;
}

dmaABC & dmaABC::operator=(const dmaABC & rs)
{
	if (this == &rs)
		return *this;
	delete [] label;
	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}

ostream & operator<<(ostream & os, const dmaABC & rs)
{
	os << "상표: " << rs.label << endl;
	os << "등급: " << rs.rating << endl;
	return os;
}

// baseDMA 메서드들
baseDMA::baseDMA(const char * l, int r) 
	: dmaABC(l, r)
{
}

baseDMA::baseDMA(const baseDMA & rs) 
	: dmaABC(rs)
{
}

void baseDMA::ViewGoods() const
{
	dmaABC::ViewGoods();
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
	if (this == &rs)
		return *this;
	dmaABC::operator=(rs);
	return *this;
}
   
ostream & operator<<(ostream & os, const baseDMA & rs)
{
	os << (const dmaABC &) rs << endl;
	return os;
}

// lacksDMA 메서드들
lacksDMA::lacksDMA(const char * c, const char * l, int r)
	: dmaABC(l, r)
{
	strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const dmaABC & rs)
	: dmaABC(rs)
{
	strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const lacksDMA & rs)
	: dmaABC(rs)
{
	strcpy(color, rs.color);
}

void lacksDMA::ViewGoods() const
{
	dmaABC::ViewGoods();
	cout << "색상: " << color << endl;
}

lacksDMA & lacksDMA::operator=(const lacksDMA & rs)
{
	if (this == &rs)
		return *this;
	dmaABC::operator=(rs);
	strcpy(color, rs.color);
	return *this;
}

ostream & operator<<(ostream & os, const lacksDMA & rs)
{
	os << (const dmaABC &) rs;
	os << "색상: " << rs.color << endl;
	return os;
}

// hasDMA 메서드들
hasDMA::hasDMA(const char * s, const char * l, int r)
	: dmaABC(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const dmaABC & rs)
	: dmaABC(rs)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
	: dmaABC(hs)	// 기초 클래스 복사 생성자를 호출한다
{
	style = new char[strlen(hs.style) + 1];
	strcpy(style, hs.style);
}

hasDMA::~hasDMA()	// hasDMA에 관련된 것을 처리한다
{
	delete [] style;
}

void hasDMA::ViewGoods() const
{
	dmaABC::ViewGoods();
	cout << "스타일: " << style << endl;
}

hasDMA & hasDMA::operator=(const hasDMA & rs)
{
	if (this == &rs)
		return *this;
	delete [] style;
	dmaABC::operator=(rs);		// 기초 클래스 부분을 복사한다
	style = new char[strlen(rs.style) + 1];
	strcpy(style, rs.style);
	return *this;
}
    
ostream & operator<<(ostream & os, const hasDMA & rs)
{
	os << (const dmaABC &) rs;
	os << "스타일: " << rs.style << endl;
	return os;
}
