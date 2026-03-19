// operations occur on same type operands (use type cast to  ensure this when required otherwise C++ does it for you, can cause unwanted results)
// The conversion of a type to another is called coersion, it can be done automatically, and if it fails to do so a compiler error occurs 
// coersion can be from from lower type to a higher type because a lower type can fit into a higher type 
//   i.e int can convert to long, long can convert to double, double can convert to long double etc.
//   automatic coersion e.g 2 * 5.4 the lower (here the integer to) is promoted to a higher type (double) before evaluating the expression
//   the compiler might warn about precision loss when type conversions occur 
// demotion is converting a higher type into a lower type i.e. converting a double into an int.. Note the decimal part is truncated

//type casting is manual coersion 
//integer division will not produce a double even if the variable that stores the result is a double 
//both the operands and the storage variable will need to be of type double to keep all the solution accuracy 
//syntax static_cast(double)(variable_name) / .......rest of expressions.....

#include <iostream>
using namespace std;

int main()
{
    int num1 {}, num2 {}, num3 {};
    int user_count {3};
    int sum {}; //this is perfectly fine as an int because we're doing integer additions
    double avg {0.0};
    cout << "enter 3 intergers, press enter key afer each one:\n ";
    cin >> num1 >> num2 >> num3;
    sum = num1 + num2 + num3;
    avg = static_cast<double>(sum) / user_count; // we might lose accuracy here e.g 50/3 = 16  therefore promote/convert sum to a double, the compiler automatically convert user count to a double
    cout << "the 3 integers were: " << num1 << ", " << num2 << ", and " << num3 << endl; 
    cout << "the sum of those 3 integers is: " << sum << endl;
    cout << "the average of the 3 integers is: " << avg << endl;
    cout << endl;
    return 0;
}