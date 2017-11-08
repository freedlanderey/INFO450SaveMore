// INFO450SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Accounts.h"
#include "Savings.h"
#include "Checking.h"
#include "Certificate.h"


using namespace std;


int main()
{	
	Savings sAccount;
	Checking cAccount;
	Certificate cdAccount;
	Accounts *ptr;

	//get values for each account
	ptr = &sAccount;
	ptr->inputValues();

	ptr = &cAccount;
	ptr->inputValues();

	ptr = &cdAccount;
	ptr->inputValues();

	//determine interest for savings and cd account
	//sAccount.AssessInterest(6000.00);
	cdAccount.AssessInterest(3);

	//order checks
	cAccount.orderChecks();

	//display all accounts
	ptr = &sAccount;
	ptr->display();
	ptr = &cAccount;
	ptr->display();
	ptr = &cdAccount;
	ptr->display();

	//testing withdrawing from account
	cAccount.withdraw(200);
	sAccount.withdraw(1000);
	cdAccount.withdraw(2000);

	sAccount.display();
	cAccount.display();
	cdAccount.display();

    return 0;
}

