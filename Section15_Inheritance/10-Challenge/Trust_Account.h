#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include <string>
#include "Savings_Account.h"

class Trust_Account: public Savings_Account
{
    friend ostream &operator<<(ostream &os, const Trust_Account &account);
    private:
        static constexpr const char *def_name = "Unnamed Savings Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_interest_rate = 0.0;
        static constexpr double deposit_threshold = 5000.0;
        static constexpr double deposit_bonus = 50.0;
        static constexpr int max_withdrawal_count = 3;
        static constexpr double max_withdraw_percentage = 0.2;
    protected:
    // new attribute initialiased when the constructor is called 
        int num_withdrawals;
    public:
        Trust_Account(string name = def_name, double balance = def_balance, double int_rate = def_interest_rate);
        bool deposit(double amount);
        bool withdraw(double amount);

};

#endif