// Section 13
// Implementing member methods 1 
#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    // attributes
    string name;
    double balance;
    
public:
    // methods
    // declared inline to read the above private vars/attributes from elsewhere in the code 
    void set_balance(double bal) 
    { 
        balance = bal; 
    } 
    double get_balance()
    { 
        return balance; 
    }
    
    // methods (methods prototypes) will be declared outside the class declaration
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name = n;  //accessing and changing the private attribute 'name'. Note: assignment not initialisation 
}

string Account::get_name() 
{
    return name; //reading the new/updated private attributes
}

bool Account::deposit(double amount) 
{
    // if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) 
{
    if (balance-amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}


int main() {
    Account frank_account; //Account object 
    frank_account.set_name("Frank's account"); //updating private attribute 'name' via a public function/method 'set_name'
    frank_account.set_balance(1000.0); //same for balance 
    
    if (frank_account.deposit(200.0)) //you can have this function in the if statement because it is a bool function/method
        cout << "Deposit OK" << endl;
    else 
        cout << "Deposit Not allowed" << endl;
        
    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
        
    if (frank_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    return 0;
}

