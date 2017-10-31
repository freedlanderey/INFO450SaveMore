#include "stdafx.h"
#include "Accounts.h"

using namespace std;

Accounts::Accounts()
{
	accountNumber = 0;
	interestRate = 0.00;
	balance = 0.00;
}

Accounts::Accounts(double b)
{
	balance = b;
}

Accounts::Accounts(int a, float i, double b)
{
	accountNumber = a;
	interestRate = i;
	balance = b;
}

void Accounts::withdraw()
{

}

void Accounts::deposit()
{

}

void Accounts::display()
{

}