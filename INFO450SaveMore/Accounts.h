#pragma once
#include <string>

using namespace std;

class Accounts
{
protected:
	int accountNumber;
	float interestRate;
	double balance;

public:
	Accounts();
	Accounts(double b);
	Accounts(int a, float i, double b);

	void withdraw();
	void deposit();
	void display();
};