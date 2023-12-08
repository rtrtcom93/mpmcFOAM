// dmaabc.h  -- ��Ӱ� ���� �޸� �Ҵ�
#ifndef DMAABC_H_
#define DMAABC_H_
#include <iostream>
using namespace std;

// �߻�ȭ ���� Ŭ����
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

// DMA�� ����ϴ� �Ļ� Ŭ����
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

// DMA�� ������� �ʴ� �Ļ� Ŭ����
// �ı��ڰ� �ʿ� ����
// �Ͻ��� ���� �����ڸ� ����Ѵ�
// �Ͻ��� ���� �����ڸ� ����Ѵ�
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

// DMA�� ����ϴ� �Ļ� Ŭ����
class hasDMA : public dmaABC
{
private:
	char * style;	// �����ڿ��� new�� ����Ѵ�
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
