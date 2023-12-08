// account.cpp -- BankAccount 클래스 멤버 함수들
#include <iostream>
#include <cstring>
#include "account.h"

BankAccount::BankAccount(char * client, char * num, double bal)
{
	std::strncpy(name, client, 39);
    name[39] = '\0';
	std::strncpy(acctnum, num, 24);
    acctnum[24] = '\0';
    balance = bal;
}

void BankAccount::show(void) const
{
	using std::cout;
	using std::endl;
	cout << "예금주: " << name << endl;
	cout << "계좌 번호: " << acctnum << endl;
	cout << "잔액: " << balance << endl;
}

void BankAccount::deposit(double cash)
{
	if (cash >= 0)
		balance += cash;
	else
		std::cout << "부당 거래 시도";
}

void BankAccount::withdraw(double cash)
{
	if (cash < 0)
		std::cout << "부당 거래 시도";
	else if (cash <= balance) 
		balance -= cash;
	else
		std::cout << "출금 요구액이 잔액보다 많아 거래 취소.\n";
}
