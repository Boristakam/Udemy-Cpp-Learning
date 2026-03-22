#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() 
{
    unique_ptr<Account> Boris_account;
    unique_ptr<Account> Sony_account;
    try
    {
        {
            Sony_account = make_unique<Savings_Account>("Sony", -5000.0);
            cout << *Sony_account << endl;
        }
    }
    catch(const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << '\n';
    }
    

    try
    {
        {
            Boris_account = make_unique<Savings_Account>("Boris", 200.0);
            cout << *Boris_account << endl;
            Boris_account->withdraw(100);
            cout << *Boris_account << endl;
            Boris_account->withdraw(500);
            cout << *Boris_account << endl;
        }
    }
    catch(const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << '\n';
    }
    catch(const InsufficientFundsException &ex)
    {
        std::cerr << ex.what() << '\n';
    }
    
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

