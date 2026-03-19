#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class Checking_Account: public Account
{
    friend ostream &operator<<(ostream &os, const Checking_Account &account);
    private:
        // the following are not class attribute so do not need to be passed to constructors (only used in the class scope)
        static constexpr const char *def_name = "Unnamed Savings Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_withdrawal_fee = 1.5;
    protected:
        double withdrawal_fee;
    public:
        Checking_Account(string name = def_name, double balance = def_balance);
        bool withdraw(double amount);
};
#endif