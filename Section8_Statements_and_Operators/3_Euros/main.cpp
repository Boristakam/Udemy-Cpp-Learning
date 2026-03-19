//convert EUR to USD

#include <iostream>
using namespace std;

int main ()
{
    const double usd_per_eur {1.19};
    cout << "\nWelcome to the money converter eur to usd!" << endl;
    cout << "enter the amount to convert: ";

    double dollars {0};
    double euros {0};

    cin >> euros;
    dollars = euros * usd_per_eur;
    
    cout << "it converts to: " << dollars << "$" << endl;

    cout << endl;
    return 0;
}

// operations occur on same type operands (use type cast to  ensure this when required otherwise C++ does it for you, can cause unwanted results)
