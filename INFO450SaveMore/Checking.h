#pragma once
#include "Accounts.h"

class Checking : public Accounts
{
public:
	Checking(double b);
	void balanceCheck(double balance);
	void orderChecks(double balance);
};