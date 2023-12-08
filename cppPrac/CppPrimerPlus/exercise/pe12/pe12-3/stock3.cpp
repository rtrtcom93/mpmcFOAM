// stock3.cpp -- 12�� ���α׷��� ���� 3�� ���� �޼��� ����
#include <iostream>
#include <cstring>
using namespace std;
#include "stock3.h"

// �����ڵ�
Stock::Stock()		// ����Ʈ ������
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

// �ٸ� �޼����
void Stock::buy(int num, double price)
{
	if (num < 0)
	{
		cerr << "���� �ֽ� ���� ������ �� �� �����Ƿ�, "
			 << "�ŷ��� ��ҵǾ����ϴ�.\n";
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
		cerr << "�ŵ� �ֽ� ���� ������ �� �� �����Ƿ�, "
			 << "�ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else if (num > shares)
	{
		cerr << "���� �ֽĺ��� ���� �ֽ��� �ŵ��� �� �����Ƿ�, "
			 << "�ŷ��� ��ҵǾ����ϴ�.\n";
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
	os << "ȸ���: " << sto.company
	   << "  �ֽ� ��: " << sto.shares << '\n'
	   << "  �ְ�: $" << sto.share_val
	   << "  �ֽ� �� ��ġ: $" << sto.total_val << '\n';
	
	return os;
}

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}
