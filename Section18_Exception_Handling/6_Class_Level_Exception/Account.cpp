#include "Account.h"

using namespace std;

Account::Account(string name, double balance) 
    : name{name}, balance{balance} //initialiser list (Note it can also be in a 'try' block but thats beyond the curriculum scope)
{
        if (balance < 0.0)
            throw IllegalBalanceException{};
}

bool Account::deposit(double amount)
{
    if (amount < 0) 
        return false;
    else 
    {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) 
{
    if (balance-amount >=0) 
    {
        balance-=amount;
        return true;
    } 
    else
        return false;
}

void Account::print(ostream &os) const 
{
    os.precision(2);
    os << fixed;
    os << "[Account: " << name << ": " << balance << "]";
}
