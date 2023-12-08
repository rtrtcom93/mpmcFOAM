// useaccnt.cpp -- BankAccount 클래스를 사용한다
#include <iostream>
#include "account.h"

int main(void)
{
	BankAccount bird;
	BankAccount frog("Kermit", "croak322", 123.00);

	bird.show();
	frog.show();
	bird = BankAccount("Chipper", "peep8282", 214.00);
	bird.show();
	frog.deposit(20);
	frog.show();
	frog.withdraw(4000);
	frog.show();
	frog.withdraw(50);
	frog.show();

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}
