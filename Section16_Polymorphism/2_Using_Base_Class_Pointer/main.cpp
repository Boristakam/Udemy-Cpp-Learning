// Section 16
// Using Base class pointers

#include <iostream>
#include <vector>

using namespace std;

// This class uses dynamic polymorphism for the withdraw method
// We'll learn about virtual functions in the next video
class Account 
{
public:
    virtual void withdraw(double amount)  
    {
        cout << "In Account::withdraw" << endl;
    }
    virtual ~Account() {  }
};

class Checking: public Account  
{
public:
    virtual void withdraw(double amount) 
    {
        cout << "In Checking::withdraw" << endl;
    }
    
    virtual ~Checking() {  }
};

class Savings: public Account  
{
public:
    virtual void withdraw(double amount) 
    {
        cout << "In Savings::withdraw" << endl;
    }
    virtual ~Savings() {  }
};

class Trust: public Account  
{
public:
    virtual void withdraw(double amount) 
    {
        cout << "In Trust::withdraw" << endl;
    }
    virtual ~Trust() {  }
};


int main() 
{
    cout << "\n === Pointers ==== " << endl;
    // dynamic binding occurs here (at run time) so regardless of pointer initial type, if it points to obj of other type, it will access methods from that obj's class
    Account *p1 = new Account();
    Account *p2 = new Savings();  //all the following pointers are also of type Account regardless of what the point to (public inheritance hierarchy)
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    
    p1->withdraw(1000);
    p2->withdraw(1000);           // they all print their respective withdraw statements now since the func is virtual 
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    cout << "\n === Array ==== " << endl;
    Account *array [] = {p1,p2,p3,p4};
    for (auto i=0; i<4; ++i)
        array[i]->withdraw(1000); //dynamic binding again (specific withdraw methods for each of those pointers is called)
        
    cout << "\n === Array ==== " << endl;
    array[0] = p4;      // overriding first element
    for (auto i=0; i<4; ++i)
        array[i]->withdraw(1000);

    cout << "\n === Vector ==== " << endl;
    vector<Account *> accounts {p1,p2,p3,p4};
    for (auto acc_ptr: accounts) //range base for loop
        acc_ptr->withdraw(1000); // dynamic binding
        
    cout << "\n === Vector ==== " << endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);

    cout << "\n === Clean up ==== " << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
        
    return 0;
}

