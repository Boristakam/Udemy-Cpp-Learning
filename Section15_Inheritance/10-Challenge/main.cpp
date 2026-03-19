// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    // Checking 

    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account {} );
    check_accounts.push_back(Checking_Account {"Boris"} );
    check_accounts.push_back(Checking_Account {"Landry", 2000} );
    check_accounts.push_back(Checking_Account {"Sony", 5000} );

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    // Trust 

    vector<Trust_Account> trust_account;
    trust_account.push_back(Checking_Account {} );
    trust_account.push_back(Checking_Account {"Ryan", 10000, 5.0} );
    trust_account.push_back(Checking_Account {"John", 20000, 4.0} );
    trust_account.push_back(Checking_Account {"Jerry", 30000} );

    display(trust_account);
    deposit(trust_account, 1000);
    withdraw(trust_account, 2000);
    

    return 0;
}

