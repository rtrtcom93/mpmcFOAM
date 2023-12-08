// plorg.h -- Plorg 클래스 선언
#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
	char pl_name[20];
	int ci_index;
public:
	Plorg(char * name = "Plorga", int index = 50);
	void changeCI(int index);
	void show() const;
};

#endif
