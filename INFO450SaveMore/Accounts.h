#pragma once
#include <string>

using namespace std;

class Accounts
{
protected:
	string accountNumber;
	float interestRate;

public:
	double balance;

	Accounts();
	Accounts(double b);
	Accounts(string a, float i, double b);

	virtual void inputValues() = 0;
	int withdraw(double w);
	int deposit(double d);
	void display();
};