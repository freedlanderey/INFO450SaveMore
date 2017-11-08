#include "stdafx.h"
#include <iostream>
#include <string>
#include "Accounts.h"

using namespace std;

Accounts::Accounts()
{
	accountNumber = "0";
	interestRate = 0.00;
	balance = 0.00;
}

Accounts::Accounts(double b)
{
	balance = b;
}

Accounts::Accounts(string a, float i, double b)
{
	accountNumber = a;
	interestRate = i;
	balance = b;
}

//function to take money out of accounts
int Accounts::withdraw(double w)
{
	double withdrawl;

	withdrawl = w;

	if (withdrawl > balance)
	{
		cout << "Insuficient funds.\n" << endl;

		return -1;
	}
	else
	{
		balance -= withdrawl;

		cout << "$" << withdrawl << " has succesfully been removed from your account! \n" << endl;

		return 0;
	}
}

//function to put money in accounts
int Accounts::deposit(double d)
{
	double deposit;

	deposit = d;

	balance += deposit;

	return 0;
}

//Display account information
void Accounts::display()
{
	cout << "Account #: " << accountNumber << endl;
	cout << "Balance: " << balance << "\n" << endl;
}