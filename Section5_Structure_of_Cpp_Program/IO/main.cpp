#include <iostream>

/* You can specify what names you want to use from a specific namespace (namespace std in this case)
for simple programs in this course it's fine to define the entire namespace as done in previous sections
but when working in much larger programs it is not best practice because the possibility of naming conflics
with names from another framework's namespace will remain */

using std::cout;   
using std::cin;
using std::endl;


int main () 
{
    int num1;
    //int num2; 
    double num3;

    // cout << "Hello world" << endl;

    // cout << "Hello";
    // cout << "Hello world" << endl;
    // cout << "Hello world\n"; //new line can also be inserted with back slash n like in C programming 
    // cout << "Hello\nworld\nhow\nare\nyou!" << endl;
    // cout << "Hi" << endl << endl;



    // cout << "enter a number: ";
    // cin >> num1; 
    // //cout << "your number is: " << num1 << endl;
    // cout << "enter a second number: ";
    // cin >> num2;
    // cout << "your numbers are: " << num1 << " and " << num2 << endl;


    /* NOTE: enter 2 sets of intergers for the first cin saves the second interger in the buffer to be used for num2
    without any more user input the proper syntax to enter multiple cin at once in the next code block */ 
    // cout << "enter 2 integers: ";
    // /* Doing this way is more code efficient, with cleaner console output (no isolated 'enter second number' text) */ 
    // cin >> num1 >> num2; 
    // cout << "your numbers are: " << num1 << " and " << num2 << endl;


    // cout << "enter a double: ";
    // cin >> num3;
    // cout << "you entered " << num3;


    /* Note: writing a double in an integer variable only reads the interger part and ignores the decimal part 
    but the decimal part remains in the buffer and will be read for the next extraction operation wether wanted by the 
    programmer or not, hence always enter the correct data type */
    cout << "enter an integer: ";
    cin >> num1; // entering a double here will make the next 2 statements redundant as mentioned above 
    cout << "enter a double: ";
    cin >> num3;

    cout << "the interger is: " << num1 << endl;
    cout << "the double is: " << num3 << endl;


    return 0;
}