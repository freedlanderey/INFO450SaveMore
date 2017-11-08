#pragma once
#include "Accounts.h"

class Savings : public Accounts
{
private:

public:
	Savings();
	Savings(double b);
	Savings(string a, double b);
	Savings(string a, float i, double b);
	int withdraw(double w);
	void inputValues();
    float AssessInterest(double balance);
};