/* pseudo code:
- welcome 
- enter the amount to convert
- define constanst for conversion from dollars to cents
- use remainder operator to create conversion algorithm
- display result */

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::bool_constant;
using std::vector;


int main ()
{
    cout << "\nwelcome to the best money converter:" << endl;
    cout << "enter an integer that represents the number of cents:";
    int number;
    cin >> number;

    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int cent {1};
    
    cout << "in the US, " << number << " cents is iqual to: " << endl;

    int dollars_remainder {0};
    dollars_remainder = number % dollar; 
    int total_dollars {0};
    total_dollars = (number - dollars_remainder) / dollar;
    cout << "dollars: " << total_dollars <<  endl;

    int quarters_remainder;
    quarters_remainder = dollars_remainder % quarter;
    int total_quaters {0};
    total_quaters = (dollars_remainder - quarters_remainder) / quarter;
    cout << "quarters: " << total_quaters <<  endl;

    int dime_remainder;
    dime_remainder = quarters_remainder % dime;
    int total_dimes {0};
    total_dimes = (quarters_remainder - dime_remainder) / dime;
    cout << "dimes: " << total_dimes <<  endl;

    int nickel_remainder;
    nickel_remainder = dime_remainder % nickel;
    int total_nickels {0};
    total_nickels = (dime_remainder - nickel_remainder) / nickel;
    cout << "nickels: " << total_nickels <<  endl;

    int cent_remainder;
    cent_remainder = nickel_remainder % cent;
    int total_cents {0};
    total_cents = (nickel_remainder - cent_remainder) / cent;
    cout << "cents: " << total_cents <<  endl;

    /* could also do it the following way:
    number / dollar where dollar is 100, the integer part of the answer represents the total number of dollars (t_dollars)
    (number / quarter) - ((t_dollars * dollar) / quater) give the total number of quarters (t_quarters)
    (number / dime) - ((t_dollars * dollar) / dime) - ((t_quarters * quarter) / dime ) give total number of dimes (t_dime)
    etc...*/
    
    return 0;
}
