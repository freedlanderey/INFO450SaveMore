#pragma once
#include "Accounts.h"


class Certificate : public Accounts
{
private:
	int term;

public:
	Certificate();
	Certificate(string a, double b, int t);
	void inputValues();
	float AssessInterest(int t);
};
