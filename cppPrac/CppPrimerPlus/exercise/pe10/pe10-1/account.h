// account.h -- ���� ���¸� ���� BankAccount Ŭ������ �����Ѵ�
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class BankAccount
{
private:
	char name[40];
	char acctnum[25];
	double balance;
public:
	BankAccount(char * client = "no one", char * num = "0", double bal = 0.0);
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
};

#endif
