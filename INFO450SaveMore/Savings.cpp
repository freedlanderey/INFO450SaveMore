#include "stdafx.h"
#include <iostream>
#include "Accounts.h"
#include "Savings.h"

using namespace std;

Savings::Savings()
{
}
Savings::Savings(double b)
{
	balance = b;
}
Savings::Savings(string a, double b)
{
	accountNumber = a;
	balance = b;
}
Savings::Savings(string a, float i, double b) : Accounts(a,i,b)
{
	
}

//******Change Input Values*********
void Savings::inputValues()
{
	accountNumber = "S001";
	balance = 10000.00;
}

//withdraw from savings account
int Savings::withdraw(double w)
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
		cout << "Withdrawing from your savings account costs $2." << endl;
		cout << "The fee has automatically been charged to your account.\n" << endl;

		balance -= 2;

		balance -= withdrawl;

		cout << "$" << withdrawl << " has succesfully been removed from your account! \n" << endl;

		return 0;
	}
}

float AssessInterest(double balance)
{
	float interestRate;

	if (balance >= 0 && balance <= 10000)
	{
		interestRate = .01;
	}
	else
	{
		interestRate = .02;
	}

	return interestRate;
}
