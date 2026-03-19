// Section 16
// The problem
#include <iostream>
#include <memory>

class Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived: public Base 
{
public:
    void say_hello()  const  //not virtual so cannot be accessed dynamically no dynamic polymorphism (only the static one)
    {
        {   
        std::cout << "Hello - I'm a Derived class object" << std::endl;
        }
    }
};

void greetings(const Base &obj) //not virtual so cannot be accessed dynamically no dynamic polymorphism (only the static one)
{
    std::cout << "Greetings: " ;
    obj.say_hello();
}

int main() {
    Base b;
    b.say_hello(); //static biding is used to call say_hello of Base class because b is a Base object 
    
    Derived d;
    d.say_hello(); //static binding
    
    greetings(b); // static biding
    greetings(d); // static biding again even tho here that is not what we want since d is a Derived object
    
    Base *ptr = new Derived(); // static binding again, even tho the Base pointer points to a Derived object/mem addr
                               // Note: the assignment is fine because Derived objects are Base object via inheritance
                               // the key point we are learning here is that without enabling dynamic polymorphism the 
                               //   the method of the Base class will always be called over the one in the Derived class 
    ptr->say_hello();
    

    // smart pointer
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->say_hello();  // static binding
    
    
    
   delete ptr;
    
    return 0;
}

