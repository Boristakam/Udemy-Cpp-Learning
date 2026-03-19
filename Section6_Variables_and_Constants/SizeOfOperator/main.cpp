#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main ()
{
    cout << "sizeof information for different data types on this specific machine with this specific compiler:" << endl;
    cout << "=================================================================================================" << endl;
    cout << "char = " << sizeof (char) << " byte" << endl;
    cout << "int = " << sizeof (int) << " bytes" << endl;
    cout << "unsigned int = " << sizeof (unsigned int) << " bytes" << endl;
    cout << "short = " << sizeof (short) << " bytes" << endl;
    cout << "long = " << sizeof (long) << " bytes" << endl;
    cout << "long long = " << sizeof (long long) << " bytes" << endl;

    cout << "=================================================================================================" << endl;
    cout << "float = " << sizeof (float) << " bytes" << endl;
    cout << "double = " << sizeof (double) << " bytes" << endl;
    cout << "long double = " << sizeof (long double) << " bytes" << endl;

    cout << "=================================================================================================" << endl;
    cout << "minimum values of data types" << endl;
    cout << "char = " << CHAR_MIN << endl;
    cout << "int = " << INT_MIN << endl;
    cout << "short = " << SHRT_MIN << endl;
    cout << "long = " << LONG_MIN << endl;
    cout << "long long = " << LONG_LONG_MIN << endl;

    cout << "=================================================================================================" << endl;
    cout << "maximum values of data types:" << endl;
    cout << "char = " << CHAR_MAX << endl;
    cout << "int = " << INT_MAX << endl;
    cout << "short = " << SHRT_MAX << endl;
    cout << "long = " << LONG_MAX << endl;
    cout << "long long = " << LONG_LONG_MAX << endl;

    cout << "=================================================================================================" << endl;
    cout << "sizeof can also be used with variable names:" << endl;
    int age {34};
    cout << "size of age is " << sizeof (age) << " bytes." << endl;
    cout << "size of age is " << sizeof age << " bytes." << endl; // parenthesis can be ommited 
    double wage {465};
    cout << "size of wage is " << sizeof (wage) << " bytes." << endl;


    return 0;
}