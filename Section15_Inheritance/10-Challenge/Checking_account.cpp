#include "Checking_account.h"

using namespace std;

ostream &operator<<(ostream &os, const Checking_Account &account) 
{
    os << "[Checking_Account: " << account.name << ": " << account.balance << "]";
    return os;
}

Checking_Account::Checking_Account(string name, double balance)
    :Account{name, balance}{
}

bool Checking_Account::withdraw(double amount)
{
    amount += withdrawal_fee;
    return Account::withdraw(amount);
}
