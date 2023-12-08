// dmaabc.cpp -- DMA Ŭ���� �޼����
#include "dmaabc.h"
#include <cstring>

// dmaABC �޼����
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
	cout << "��ǥ: " << label << endl;
	cout << "���: " << rating << endl;
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
	os << "��ǥ: " << rs.label << endl;
	os << "���: " << rs.rating << endl;
	return os;
}

// baseDMA �޼����
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

// lacksDMA �޼����
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
	cout << "����: " << color << endl;
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
	os << "����: " << rs.color << endl;
	return os;
}

// hasDMA �޼����
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
	: dmaABC(hs)	// ���� Ŭ���� ���� �����ڸ� ȣ���Ѵ�
{
	style = new char[strlen(hs.style) + 1];
	strcpy(style, hs.style);
}

hasDMA::~hasDMA()	// hasDMA�� ���õ� ���� ó���Ѵ�
{
	delete [] style;
}

void hasDMA::ViewGoods() const
{
	dmaABC::ViewGoods();
	cout << "��Ÿ��: " << style << endl;
}

hasDMA & hasDMA::operator=(const hasDMA & rs)
{
	if (this == &rs)
		return *this;
	delete [] style;
	dmaABC::operator=(rs);		// ���� Ŭ���� �κ��� �����Ѵ�
	style = new char[strlen(rs.style) + 1];
	strcpy(style, rs.style);
	return *this;
}
    
ostream & operator<<(ostream & os, const hasDMA & rs)
{
	os << (const dmaABC &) rs;
	os << "��Ÿ��: " << rs.style << endl;
	return os;
}
