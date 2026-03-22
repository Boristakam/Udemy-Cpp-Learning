#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H__
#define __INSUFFICIENT_FUNDS_EXCEPTION_H__

using namespace std;

class InsufficientFundsException: public exception
{
    public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;
    /* what() virtual function */
    virtual const char *what() const noexcept
    {
        return "insufficient funds exception!";
    }

};

#endif