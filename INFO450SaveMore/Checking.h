#pragma once
#include <iostream>
#include "Accounts.h"

class Checking : public Accounts
{
public:
	Checking();
	Checking(double b);
	Checking(string a, double b);
	Checking(string a, float i, double b);
	void inputValues();
	void balanceCheck();
	void orderChecks();
};