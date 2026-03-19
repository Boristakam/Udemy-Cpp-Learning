#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs); // previously the 1st argument was ommitted as it was handled by the 'this' pointer
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
private:
    char *str;      // pointer to a char[] that hold a C-style string
public:
    Mystring();                                                          // No-args constructor
    Mystring(const char *s);                                      // Overloaded constructor
    Mystring(const Mystring &source);                     // Copy constructor
    Mystring( Mystring &&source);                          // Move constructiror
    ~Mystring();                                                      // Destructor
    
    Mystring &operator=(const Mystring &rhs);    // Copy assignment
    Mystring &operator=(Mystring &&rhs);          // Move assignment

    // Mystring operator-() const;                             // make lowercase
    // Mystring operator+(const Mystring &rhs) const;        // concatenate 2 strings 
    // bool operator==(const Mystring &rhs) const;
    
    void display() const;

    int get_length() const;                                        // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_
