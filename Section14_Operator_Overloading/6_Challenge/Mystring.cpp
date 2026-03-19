#include <iostream>
#include <cstring>
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
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

// equality operator
bool Mystring::operator==(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) == 0); // returns true if there are 0 differences between the two args
}

// not equal operator
bool Mystring::operator!=(const Mystring &rhs) const
{
    return !(strcmp(str, rhs.str) == 0); // returns true if there is 1 or more differences between the two args
}

// smaller than operator
bool Mystring::operator<(const Mystring &rhs) const
{
    return (strcmp(str , rhs.str) < 0); 
}

// greater than operator
bool Mystring::operator>(const Mystring &rhs) const
{
    return (strcmp(str , rhs.str) > 0); 
}

// minus operator
Mystring Mystring::operator-() const
{
    char *buff = new char[strlen(str) + 1];
    strcpy(buff, str);
    for (size_t i{0}; i < strlen(buff); i++)
    {
        buff[i] = tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// plus operator
Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buff = new char[strlen(str) + 1];
    strcpy(buff, str);
    strcat(buff, rhs.str);
    Mystring temp{buff};
//    delete [] buff;
    return temp;
}

Mystring &Mystring::operator+=(const Mystring &rhs)
{
    *this = *this + rhs.str;
    return *this;
}

// mulTiplication 
Mystring Mystring::operator*(int n)
{
    Mystring temp;
    for (int i{0}; i < n; i++)
    {
        temp = temp + *this; //temp is nothing (null) so we're just stacking whats pointed to by the 'this' pointer
    }
    return temp;
}

//repeat and assign
Mystring &Mystring::operator*=(int n)
{
    *this = *this * n;
    return *this;
}

// Pre-increment - make the string upper-case
Mystring &Mystring::operator++()   {  // pre-increment
    for (size_t i=0; i<std::strlen(str); i++)
        str[i] = std::toupper(str[i]);   
   return *this;
} 


Mystring &Mystring::operator++(int)
{
   Mystring temp (*this);       // make a copy
   operator++();                    // call pre-increment - make sure you call preincrement!
   return temp;                     // return the old value
}