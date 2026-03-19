// Section 15
// Copy constructor and operator=
#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
   Base()
        : value {0}  { 
            cout << "Base no-args constructor" << endl; 
    }
    Base(int x) 
        : value {x} { 
            cout << "int Base constructor" << endl;
    }
    Base(const Base &other)         // copy constructor
        : value {other.value} {
         cout << "Base copy constructor" << endl;     
    }
        
    Base &operator=(const Base &rhs)  {  //overloaded copy assignment operator
    cout << "Base operator=" << endl;
        if (this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }
            
   ~Base(){ cout << "Base destructor" << endl; } 
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived() : 
        Base {}  { //Base class no args constructor is inherited automatically by chosing to do it explicitly here
            cout << "Derived no-args constructor " << endl; 
    }
    Derived(int x) 
        : Base{x} , doubled_value {x * 2} {                 // INITIALISING BASE PART FIRST
            cout << "int Derived constructor" << endl; 
    }
    Derived(const Derived &other) //previously named 'source' instead of 'other' does not really matter
        : Base(other), doubled_value {other.doubled_value} { // INITIALISING BASE PART FIRST
         cout << "Derived copy constructor" << endl;     
    }
    
    Derived &operator=(const Derived &rhs) {
            cout << "Derived operator=" << endl;
        if (this == &rhs)
            return *this;
        Base::operator=(rhs);                   // ASSIGN BASE PART FIRST BY CALLING IT 
        doubled_value = rhs.doubled_value;
        return *this;
    }
   ~Derived(){ cout << "Derived destructor " << endl; } 
};


int main() {
//    Base b {100};   // calls Overloaded constructor
//    Base b1 {b};    // calls Copy constructor
//    b = b1;          // calls  Copy assignment

//destructor is called at this point, destroying b1 first then destroying b

    Derived d {100};    // Overloaded constructor
    Derived d1 {d};     // Copy constructor
    d = d1;                // Copy assignment
    
    return 0;
}

