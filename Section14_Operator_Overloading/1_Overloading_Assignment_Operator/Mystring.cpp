#include <cstring>
#include <iostream>
#include "Mystring.h"

using namespace std;

// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        if (source.str==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
        }
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    cout << "Copy assignment" << endl;
    if (this == &rhs)
        return *this;            // without the '*' we would be returning a pointer but the copy assignment expects a reference back (&Mystring)
    delete [] this->str;         // free memory. note the 'this' keyword can be ommited here'
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);  // again the this-> can be ommitted here but it makes this operation clearer
    return *this;
}


// Display method
void Mystring::display() const {
    cout << str << " : " << get_length() << endl;
}

// getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }




