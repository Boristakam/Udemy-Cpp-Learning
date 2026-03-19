//

#include <iostream>
using namespace std;



int main()
{
    cout << boolalpha; //this line ensure that every boolean in this function returns a true or false intead of 1 and 0
    int num1 {}, num2 {};  // can also initialise thsese to non zero values and compare it to the user's entered values
    cout << "enter 2 integers separated by a space\n: ";
    cin >> num1 >> num2;

    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;
    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
    return 0;
}