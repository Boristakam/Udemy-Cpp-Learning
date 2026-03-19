// similar to if-else 
// ternary operator 

#include <iostream>
using namespace std;

int main ()
{
    int num {0};
    cout << "\nenter an interger: ";
    cin >> num;

    // if (num % 2 == 0)
    //     cout << num << " is even" <<  endl;
    // else 
    //     cout << num << " is odd" <<  endl;

    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl; //more conpact than the above 4 lines 

    cout << endl;
    return 0;
}