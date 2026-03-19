#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>

// Simple Account class
class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account); // insertion operator 
protected:
    double balance;
public:
    Account();
    Account(double balance);  
              
    void deposit(double amount); 
    void withdraw(double amount);
};

#endif // _ACCOUNT_H_
