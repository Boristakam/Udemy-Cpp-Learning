#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char *str;      // uninitialised pointer to a char[] that holds a C-style string 
public:
    Mystring();                                          // No-args constructor
    Mystring(const char *s);                             // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    ~Mystring();                                         // Destructor
    
    Mystring &operator=(const Mystring &rhs);    // Copy assignment operator. 'rhs' can be renamed to whatever make more sense to you 
                                                    // returns a Mystring object by reference and we're overloading the '=' operator,
                                                    // hence the first half of the expression 'Mystring &operator='
                                                    // it expects data from the right hand side of any assignement expressions, by reference
    
    void display() const;

    int get_length() const;                               // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_
