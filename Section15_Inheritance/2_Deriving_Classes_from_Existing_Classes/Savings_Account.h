#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"  // A MUST!!

class Savings_Account: public Account   // means Savings_Account is-an Account
{
public:
    double int_rate;
    Savings_Account();
    ~Savings_Account();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // _SAVINGS_ACCOUNT_H_
