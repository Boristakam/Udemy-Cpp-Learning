// Section 17
// Unique Pointers 
#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"

class Test {
private:
    int data;
public:
    Test() : data{0} { std::cout << "Test constructor (" << data << ")" << std::endl; } //no args constructor 
    Test(int data) : data {data} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "Test destructor (" << data << ")" << std::endl; } //destructor 
};

using namespace std;

int main() {
   // Test *t1 = new Test {1000};               //it's on the stack so we expect both our defined constructor and destructor to be called 
   //  delete t1;                               // have to call the destructor before the next statements are excecuted (wouldn have to if there were no next statements but it is best practice reagardless)
//   std::unique_ptr<Test> t1 {new Test{100}};  // creating variable/smart/unique pointer T1 to a Test obj and instantiating that test obj (it still call the constructor)
//   std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);
//   
//   std::unique_ptr<Test> t3;
//   t3 = std::move(t1);         //because we cant do t3 = t1 (rule says we cannot assign or copy unique pointers). ownership of test obj on the heap to move from t1 to t3, and t1 is nulled
//   if (!t1) 
//       std::cout << "t1 is nullptr" << std::endl; //gets printed 
       
       std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000); //instantiating the obj pointed to by our unique pointer to Moe and 5000
       std::cout << *a1 << std::endl;    
       a1->deposit(5000);
       std::cout << *a1 << std::endl;

       std::vector<std::unique_ptr<Account>> accounts;
        // pushing new objs to the account vector 
       accounts.push_back( make_unique<Checking_Account>("James", 1000));
       accounts.push_back( make_unique<Savings_Account>("Billy", 4000, 5.2));
       accounts.push_back( make_unique<Trust_Account>("Bobby", 5000, 4.5));

        for (const auto &acc: accounts)
            std::cout << *acc << std::endl;
       return 0;
}

