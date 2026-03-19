// Section 11
// Recursion - Factorial

#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n) 
{
    if (n == 0)
        return 1;	             // base case      Important: it doesnt return 1 to main() immediately, all of its own stack frames get return values first it's an orderly unwinding process (unwiding from a recursive call) 
    return n * factorial(n-1); // recursive case
}

int main() {
    cout << factorial(3) << endl;       // 6
//    cout << factorial(8) << endl;     // 40320
//    cout << factorial(12) << endl;   // 479001600
//    cout << factorial(20) << endl;   // 2432902008176640000.  the larger the argument to longer it takes to evaluate 
    return 0;
}
