// golf.h -- Golf 클래스 선언
#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
private:
	enum { Len = 40 };
	char fullname[Len];
	int handicap;
public:
	Golf();
	Golf(const char * name, int hc);
	int Golf::setgolf(Golf & g);
	void sethandicap(int hc);
	void updatehandicap();
	void showgolf() const;
};

#endif
