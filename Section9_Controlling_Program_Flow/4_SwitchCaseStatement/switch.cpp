// switch statement takes an interger control expression for an argument i.e a var containing user defined value. or an enum {..., ..., ..}
// enum or enumeration are user defined data types (it holds constants) 
// like if statements you open curly brakets, and define all cases 
// each case has its own expression which is compared to the switch expresion
// the statement within a case is executed if its expression matches the one of the switch statement. then the compiler exists the switch statement 
// each case ends with a 'break' keyword. without it once a case is true, every case and statements are executed until a 'break' is reached
// the above is called a fall through behaviour 
// a case without a statements to execute is evaluated at the same time with the following case (similar to an OR logic), and doenst have a 'break'
// the switch statement ends with a default statement that is executed if none of the cases are true. it also doesnt need a 'break' line 

// Note simple cases do not have curly brackets, but you want to declare variables within the case you need curly brackets to create a code block

#include <iostream>

using namespace std;
//ask user what grade they expect in an exam and tell them what score they need to achieve it

int main ()
{
    cout << "\nHi what grade are you expecting in the next exam? ";
    char letter_grade {};
    cin >> letter_grade;

    switch (letter_grade)
    {
        case 'a':
        case 'A':
            cout << "you need 90 or more for an '" << letter_grade << "'" << endl;
            break;
        case 'b':
        case 'B':
            cout << "you need 80 to 89 for an '" << letter_grade << "'" << endl;
            break;
        case 'c':
        case 'C':
            cout << "you need 70 to 79 for an '" << letter_grade << "'" << endl;
            break;
        case 'd':
        case 'D':
            cout << "you need 60 to 69 for an '" << letter_grade << "'" << endl;
            break;
        //the following case has a code block with curly brakets because it declares a new variable and use other type of statements 
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "are you sure (Y/N)? ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
            {
                cout << "ok i guess you did not study" << endl;
            }
            else if (confirm == 'n' || confirm == 'N')
            {
                cout << "good! go study" << endl;
            }
            else 
            {
                cout << "illegal choice!" << endl;
            }
            cout << "you need less that 50 for an '" << letter_grade << "'" << endl;
            break;
        }
        default:
            cout << "sorry thats not a valid grade" << endl; 

    }

    cout << endl;
    return 0;
}