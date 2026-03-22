#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"

using namespace std;

int main() 
{
    try 
    {
        /* testing negative ballance - an exception should be thrown */
        unique_ptr<Account> moes_account = make_unique<Checking_Account>("Moe", -10.0); //unique pointer the the Account class is used to create a checking account on the heap
        cout << *moes_account << endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        cerr << "Couldn't create account - negative balance" << endl;
    }
    cout << "Program completed successfully" << endl;
    return 0;
}

