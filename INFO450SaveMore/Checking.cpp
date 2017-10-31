#include "stdafx.h"
#include "Accounts.h"
#include "Checking.h"
#include <iostream>

using namespace std;

Checking::Checking(double b)
{
	balance = b;
}

void Checking::orderChecks(double balance)
{
	cout << "Checks cost $15. Payment has been charged to your checking account. " << endl;

	balance -= 15;
}

void Checking::balanceCheck(double balance)
{
	if (balance < 500)
	{
		balance -= 5;
	}
}
