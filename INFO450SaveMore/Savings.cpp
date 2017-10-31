#include "stdafx.h"
#include "Accounts.h"
#include "Savings.h"

using namespace std;

Savings::Savings(double b)
{
	balance = b;
}

int Savings::interestCalculator(double balance)
{
	int i;
	interest = i;

	if (balance >= 0 && balance <= 10000)
	{
		i = .01;
	}
	else
	{
		i = .02;
	}
}