// account.cpp -- BankAccount Ŭ���� ��� �Լ���
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
	cout << "������: " << name << endl;
	cout << "���� ��ȣ: " << acctnum << endl;
	cout << "�ܾ�: " << balance << endl;
}

void BankAccount::deposit(double cash)
{
	if (cash >= 0)
		balance += cash;
	else
		std::cout << "�δ� �ŷ� �õ�";
}

void BankAccount::withdraw(double cash)
{
	if (cash < 0)
		std::cout << "�δ� �ŷ� �õ�";
	else if (cash <= balance) 
		balance -= cash;
	else
		std::cout << "��� �䱸���� �ܾ׺��� ���� �ŷ� ���.\n";
}
