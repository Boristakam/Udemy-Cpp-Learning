#include <cstring>
#include <iostream>
#include "Mystring.h"

using namespace std;

// No-args constructor. nothing is passes with the func call so we print a blank space
Mystring::Mystring() 
    : str{nullptr}      // first initialise our pointer because it is pointing 'anywhere' when declared in the .h
    {    
    str = new char[1];  // now it is assigned to point to the address of a single char on the heap 
    *str = '\0';        // that empty address is populated with a null character (black space/empty string)
    }

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr}                 // again initialising our pointer (does not have to be init to the passed addr)
        {                    
        if (s == nullptr) {           // checking if the addr passed by the user is empty (null pointer)
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1]; // str is assigned to point to new addr of a char of size equal to that of 
                                         // the user provided char/string (via the pointer s) +1 because c style string end with a null charater always!
            strcpy(str, s);     // copy user provided character or string onto str
        }
        }

// Copy constructor
Mystring::Mystring(const Mystring &source) //passing constructor 'Mystring' by reference (so no copy made), and const so it is not changed. source is an object representing the object being copied
     : str{nullptr} 
     {
        str = new char[strlen(source.str )+ 1]; //source.str because we are using an existing object which has str populated
                                                // the function above uses the string directly (s)
        strcpy(str, source.str);
     }

// Destructor
Mystring::~Mystring() 
{
    delete [] str;   //// WE EXPLICITLY ALLOCATED MEMORY USING KEYWORD NEW SO WE NEED TO EXPLITLY DEALLOCATE/FREE IT!!!   
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




