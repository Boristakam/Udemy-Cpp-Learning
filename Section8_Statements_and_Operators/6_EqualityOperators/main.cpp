// ==    !=     they are used within expressions and evaluate to a boolean
// commonly used in control flow statements 

#include <iostream>
using namespace std;



int main()
{
    bool equal_result {false};
    bool not_equal_result {false};
    cout << boolalpha; //this line ensure that every boolean in this function returns a true or false intead of 1 and 0

    int num1 {}, num2 {};
    cout << "enter 2 integers\n: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);       
    not_equal_result = (num1 != num2);
    cout << "comparing result (equal): " << equal_result << endl;
    cout << "comparing result (not equal): " << not_equal_result << endl;


    // Equality statements also works for characters and all othe types for that matter (doubles -> note doubles approximate e.g the compiler will see 11.99999999 as 12)
    char char1 {}, char2 {};
    cout << "\nenter 2 separate characters\n: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);       
    not_equal_result = (char1 != char2);
    cout << "comparing result (equal): " << equal_result << endl;
    cout << "comparing result (not equal): " << not_equal_result << endl;

    return 0;
}