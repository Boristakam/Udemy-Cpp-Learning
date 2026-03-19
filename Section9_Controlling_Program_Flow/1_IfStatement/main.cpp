#include <iostream>

using namespace std;

int main ()
{
    int num {0};
    const int min {10};
    const int max {100};

    cout << "\nenter a number b3tween 10 and 100: ";
    cin >> num;

    // having the curly braces is good practice but in reality it is only useful when you start declaring vars within the if statement 
    if (num >= min)
    {
        cout << "your value is greater than min " << endl;
        int diff = num - min; //this local variable is only accessible within the scope of this if statement 
        cout << "it is " << diff << " more than min" << endl;
    }
    
    
    cout << endl;
    return 0;
}