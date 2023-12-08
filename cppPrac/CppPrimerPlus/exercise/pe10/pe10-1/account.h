// account.h -- 은행 계좌를 위한 BankAccount 클래스를 선언한다
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
