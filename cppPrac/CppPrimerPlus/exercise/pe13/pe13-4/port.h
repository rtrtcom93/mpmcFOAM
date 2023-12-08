// port.h
#include <iostream>
using namespace std;
// Port ���� Ŭ����
class Port
{
private:
	char * brand;
	char style[20];			// ���� ��� tawny, ruby, vintage
	int bottles;
protected:
public:
	Port(const char * br = "none", const char * st = "none", int b = 0);
	Port(const Port & p);		// ���� ������
	virtual ~Port() { delete [] brand; }
	Port & operator=(const Port & p);
	Port & operator+=(int b);	// bottles�� b�� ���Ѵ�
	Port & operator-=(int b);	// ������ ��쿡 bottles���� b�� ����
	int BottleCount() const { return bottles; }
	virtual void Show() const;
	friend ostream & operator<<(ostream & os, const Port & p);
};

// VintagePort �Ļ� Ŭ����
class VintagePort : public Port	// style�� �׻� "vintage"�̴�
{
private:
	char * nickname;		// "The Noble", "Old Velvet" ���� ����
	int year;			// ������Ȯ�⵵(��Ƽ��)
public:
	VintagePort(const char * br = "none", const char * st = "vintage", int b = 0, const char * nn = "none", int y = 0);
	VintagePort(const VintagePort & vp);
	~VintagePort() { delete [] nickname; }
	VintagePort & operator=(const VintagePort & vp);
	virtual void Show() const;
	friend ostream & operator<<(ostream & os, const VintagePort & vp);
};
