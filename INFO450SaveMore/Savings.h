#pragma once
#include "Accounts.h"

class Savings : public Accounts
{
private:
	int interest;

public:
	Savings(double b);
	int interestCalculator(double balance);
};