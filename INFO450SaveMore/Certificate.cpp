#include "stdafx.h"
#include "Accounts.h"
#include "Certificate.h"

using namespace std;


Certificate::Certificate()
{
}

Certificate::Certificate(string a, double b, int t) : Accounts(a,b,t)
{
	term = t;
}

void Certificate::inputValues()
{
	accountNumber = "CD0003";
	balance = 10000.00;
	term = 3;
}

float Certificate::AssessInterest(int t)
{
	float interestRate;

	if (term >= 5)
	{
		interestRate = .1;
	}
	else
	{
		interestRate = .05;
	}

	return interestRate;
}