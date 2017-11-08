#include "stdafx.h"
#include <string>
#include "Accounts.h"
#include "Checking.h"
#include <iostream>

using namespace std;
//****constructors****
Checking::Checking() : Accounts()
{
}

Checking::Checking(double b) : Accounts(b)
{
}

Checking::Checking(string a, double b)
{
	accountNumber = a;
	balance = b;
}

Checking::Checking(string a, float i, double b)
{
	accountNumber = a;
	interestRate = i;
	balance = b;
}

//****functions****
void Checking::inputValues()
{
	accountNumber = "C001";
	balance = 6000.00;
}

//charges fee for buying checks
void Checking::orderChecks()
{
	cout << "Checks cost $15. Payment has been charged to your checking account. \n" << endl;

	balance -= 15;

	balanceCheck();
}

//checks to see if balance is over 500, charges fee otherwise
void Checking::balanceCheck()
{
	if (balance < 500)
	{
		balance -= 5;

		cout << "Your account has fallen below $500. A penalty fee of $5 has been deducted from your account.\n";
	}
}
