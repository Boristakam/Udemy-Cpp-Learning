#include "Trust_account.h"

using namespace std;


Trust_Account::Trust_Account(string name, double balance, double int_rate)
    :Savings_Account{name, balance, int_rate}, num_withdrawals{0} {
}

bool deposit(double amount)
{
    if(amount >= deposit_threshold)
    {
        amount += deposit_bonus;
    }
    return Savings_Account::deposit(amount);
}

bool withdraw(double amount)
{
    if ((num_withdrawals > max_withdrawal_count) || (amount > balance * max_withdraw_percentage))
    {
        return false;
    }
    else
    {
        ++num_withdrawal;
        return Savings_Account::withdraw(amount);
    }
}

ostream &operator<<(ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate 
        << "%, withdrawals: " << account.num_withdrawals <<  "]";
    return os;
}
