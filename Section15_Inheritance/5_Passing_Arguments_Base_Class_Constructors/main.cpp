// Section 15
// Base class initialization
#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
   Base() : value {0}  { 
            cout << "Base no-args constructor" << endl; 
    }
    Base(int x)  : value {x} {    //overloaded 1 arg constructor
            cout << "Base (int) overloaded constructor" << endl;
    }
   ~Base() { 
       cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived()                                                   // derived class no arg constructor
        :Base {}, doubled_value {0} {                           // therefore Base class no arg constructor "Base{}"
            cout << "Derived no-args constructor " << endl; 
    }
    Derived(int x)                                              // 
        :  Base{x},  doubled_value {x * 2} { 
            cout << "Derived (int) constructor" << endl; 
    }
    ~Derived() { 
        cout << "Derived destructor " << endl; 
    } 
};

int main() {
   //  Derived d;
   Derived d {1000};
    return 0;
}