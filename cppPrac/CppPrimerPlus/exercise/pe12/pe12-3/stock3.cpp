// stock3.cpp -- 12장 프로그래밍 연습 3을 위한 메서드 구현
#include <iostream>
#include <cstring>
using namespace std;
#include "stock3.h"

// 생성자들
Stock::Stock()		// 디폴트 생성자
{
	company = new char[8];
	strcpy(company, "no name");
	company[7]= '\0';
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char * co, int n, double pr)
{
	company = new char[strlen(co) + 1];
	strcpy(company, co);
	shares = n;
	share_val = pr;
	set_tot();
}


Stock::Stock(const Stock & sto)
{
	company = new char[strlen(sto.company) + 1];
	strcpy(company, sto.company);
	shares = sto.shares;
	share_val = sto.share_val;
	set_tot();
}

Stock & Stock::operator=(const Stock & sto)
{
	if (this == &sto)
		return *this;
	delete [] company;
	company = new char[strlen(sto.company) + 1];
	strcpy(company, sto.company);
	share_val = sto.share_val;
	shares = sto.shares;
	set_tot();
	return *this;
}

// 다른 메서드들
void Stock::buy(int num, double price)
{
	if (num < 0)
	{
		cerr << "매입 주식 수는 음수가 될 수 없으므로, "
			 << "거래가 취소되었습니다.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(int num, double price)
{
	if (num < 0)
	{
		cerr << "매도 주식 수는 음수가 될 수 없으므로, "
			 << "거래가 취소되었습니다.\n";
	}
	else if (num > shares)
	{
		cerr << "보유 주식보다 많은 주식을 매도할 수 없으므로, "
			 << "거래가 취소되었습니다.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

ostream & operator<<(ostream & os, const Stock & sto)
{
	os << "회사명: " << sto.company
	   << "  주식 수: " << sto.shares << '\n'
	   << "  주가: $" << sto.share_val
	   << "  주식 총 가치: $" << sto.total_val << '\n';
	
	return os;
}

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}
