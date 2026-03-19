// logical 'not' has the highest precedence then 'and' then 'or'
// 'and' and 'or' are binary operators 
// when evaluating a logical expression C++ will stop as soon as the answer is known
//   i.e. for expr1 && expr2 && expr3  the compiler will stop evaluating at expr1 if expr1 is false therefore making the whole expression false

#include <iostream>
using namespace std;



int main()
{
    int num {};
    const int lower {10};
    const int upper {20};

    cout << boolalpha; //this line ensure that every boolean in this function returns a true or false intead of 1 and 0
    
    //determine if an entered integer is between 2 other integers 
    //assume lower < upper 
    cout << "\nenter an integer - the bounds are " << lower << " and " << upper << ": ";
    cin >> num;

    bool within_bounds {false};
    within_bounds = (num < upper && num > lower); 
    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;

    // reverse the logical expressions to test for outside the bounds, BUT || has to be used instead of &&. Same to check if on the boundary (==)
    bool outside_bounds {false};
    outside_bounds = (num > upper || num < lower); //(num == upper || num == lower) to test if on the boundary 
    cout << num << " is within the bounds of " << lower << " and " << upper << ": " << outside_bounds << "\n" << endl;

    return 0;
}