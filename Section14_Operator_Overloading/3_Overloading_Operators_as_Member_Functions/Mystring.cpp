#include <iostream>
#include <cstring>
#include <cctype>
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
    :str(source.str) 
    {
        source.str = nullptr;
        cout << "Move constructor used" << endl;
    }

// Destructor
Mystring::~Mystring() 
{
    delete [] str;
}

// Copy assignment operator
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

// Move assignment operator
Mystring &Mystring::operator=( Mystring &&rhs) 
{
    cout << "Using move assignment" << endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

// Display method
void Mystring::display() const 
{
    cout << str << " : " << get_length() << endl;
}

// length getter

int Mystring::get_length() const 
{ 
    return strlen(str); 
}
 
 // string getter
const char *Mystring::get_str() const 
{ 
    return str; 
}


// Equality
bool operator==(const Mystring &lhs, const Mystring &rhs) 
{
    return (strcmp(lhs.str, rhs.str) == 0);
}

// Make lowercase
Mystring operator-(const Mystring &obj) 
{
    char *buff = new char[strlen(obj.str) + 1];
    strcpy(buff, obj.str);
    for (size_t i=0; i<strlen(buff); i++) 
        buff[i] = tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    
    return temp;
}

// Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs) 
{
    char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;

    return temp;
}






