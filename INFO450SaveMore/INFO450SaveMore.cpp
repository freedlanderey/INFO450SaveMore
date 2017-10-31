// INFO450SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Accounts.h"
#include "Checking.h"

using namespace std;


int main()
{
	Checking test1 = new Checking(450);
	test1.balanceCheck();

	cout << "Balance: " << balance << endl;

    return 0;
}

