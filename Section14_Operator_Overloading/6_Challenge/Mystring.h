#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor
    
    Mystring &operator=(const Mystring &rhs);       // Copy assignment operator
    Mystring &operator=(Mystring &&rhs);           // Move assignment operator

    /* CAN ALSO REDO THIS EXERCICE WITH THESE OPERATORS AS GLOBAL FUNCTIONS */
    bool operator==(const Mystring &rhs) const;      // Equality operator
    bool operator!=(const Mystring &rhs) const;     // Not Equal operator
    bool operator<(const Mystring &rhs) const;      // Smaller than operator
    bool operator>(const Mystring &rhs) const;      // Greater than operator
    Mystring operator-() const;                     // minus (make lower case)
    Mystring operator+(const Mystring &rhs) const;  // concatenate
    Mystring &operator+=(const Mystring &rhs);      // addition operator
    Mystring operator*(int n);                      // multiplication operator 
    Mystring &operator*=(int n);                    // s1 *= 3;   s1 = s1 * 3; 
    Mystring &operator++();                     //capitalisation of all characters (pre-increment ++s1;)
    Mystring &operator++(int);                               // post-increment   s1++;
    
    void display() const;
    
    int get_length() const;                                      // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_