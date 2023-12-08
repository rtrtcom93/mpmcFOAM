// stock3.h -- 12장 프로그래밍 연습 3을 위한 헤더 파일
#ifndef STOCK3_H_
#define STOCK3_H_

class Stock
{
private:
	char * company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const char * co, int n, double pr);
	Stock(const Stock & sto);
	~Stock() { delete [] company; }	
	Stock & operator=(const Stock & sto);
	void buy(int num, double price);
	void sell(int num, double price);
	void update(double price);
	const Stock & topval(const Stock & s) const;
	friend ostream & operator<<(ostream & os, const Stock & sto);
};

#endif
