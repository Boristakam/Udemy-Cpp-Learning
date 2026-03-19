#include <iostream>
#include <cstring>
#include "Mystring.h"

using namespace std;

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} 
{
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} 
    {
        if (s==nullptr) 
        {
            str = new char[1];
            *str = '\0';
        } else 
        {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
    }

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} 
    {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
        cout << "Copy constructor used" << endl;

    }

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str)   // stealing the ptr. taking source object ptr and moving it to our new str
    {      
        source.str = nullptr; // nullify the source obj ptr 
        cout << "Move constructor used" << endl;
    }

 // Destructor
Mystring::~Mystring() 
{
    if (str == nullptr) 
    {
        cout << "Calling destructor for Mystring : nullptr" << endl;
    } else 
    {
         cout << "Calling destructor for Mystring : " << str << endl;
    }
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) 
{
    cout << "Using copy assignment" << endl;

    if (this == &rhs) 
        return *this;

    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);

    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) 
{
    cout << "Using move assignment" << endl;

    if (this == &rhs)       // if addr of the current object is equal to that of the rhs address 
        return *this;

    delete [] str;          // delete str from the current object (DEALLOCATION)
    str = rhs.str;          // stealing the pointer from the right hand side and assign it to the left. it's a copy of a ptr
                            // variable, no deep copy has happened here
    rhs.str = nullptr;      // DO NOT FORGET (MAKING SURE IT IT POINTING TO NOWHERE)
    return *this;
    
}




// Display method
void Mystring::display() const 
{
    cout << str << " : " << get_length() << endl;
}


 // getters
int Mystring::get_length() const 
{
    return strlen(str); 
}

const char *Mystring::get_str() const 
{ 
    return str; 
}




