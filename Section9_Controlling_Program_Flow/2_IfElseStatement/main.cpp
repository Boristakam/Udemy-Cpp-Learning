#include <iostream>

using namespace std;

int main ()
{
    int num {0};
    const int target {100};

    cout << "enter a number: ";
    cin >> num;

    if (num > target)
    {
        cout << num << " is greater than " << target << endl;
        cout << "it is " << num - target << " above it." << endl;
    }
    else 
    {
        cout << num << " is less than " << target << endl;
        cout << "it is " << target - num << " below it." << endl;
    }

    return 0;
}