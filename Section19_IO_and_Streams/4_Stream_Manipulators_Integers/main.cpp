// Section 19
// Stream manipulators - Integer manipulators
// dec, hex, oct, showbase uppercase, nouppercase, showpos
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num {255};
 
    // Displaying using different bases
    cout << "\n------------------------------------------------------------" << endl;
    cout << dec << num << endl; //255
    cout << hex << num << endl; //ff
    cout << oct << num << endl; //377
    
    // Displaying showing the base prefix for hex and oct
        cout << "\n------------------------------------------------------------" << endl;
    cout << showbase;
    cout << dec << num << endl;  // 255
    cout << hex << num << endl;  // 0xff
    cout << oct << num << endl;  // 0377
    
     // Display the hex value in uppercase
    cout << "\n------------------------------------------------------------" << endl;
    cout << showbase << uppercase;
    cout << hex << num << endl; // 0xFF

    // Display the + sign in front of positive base 10 numbers
    cout << "\n------------------------------------------------------------" << endl;
    cout << showpos;
    cout << dec << num << endl; // +255
    cout << hex << num << endl; // 0XFF
    cout << oct << num << endl; // 0377
    
    // setting using the set method (alternate way of manipulating intergers)
    cout.setf(ios::showbase); //ios is input output stream, setf is set flag, cout is the standard output stream
    cout.setf(ios::uppercase);
    cout.setf(ios::showpos);

    // resetting to defaults
    cout << resetiosflags(ios::basefield);
    cout << resetiosflags(ios::showbase);
    cout << resetiosflags(ios::showpos);
    cout << resetiosflags(ios::uppercase);

    cout << "\n------------------------------------------------------------" << endl;
    cout << "Enter an integer : ";
    cin >> num;
    
    cout << "Decimal default  : " << num << endl;
    
    cout << "Hexadecimal      : " << hex << num << endl;
    cout << "Hexadecimal      : " << hex << uppercase << num << endl; 
    cout << "Hexadecimal      : " << hex  << num << endl;
    cout << "Hexadecimal      : " << hex << nouppercase << num << endl;

    cout << "Octal            : " << oct << num << endl; 
    cout << "Hexadecimal      : " << hex << showbase << num << endl;
    cout << "Octal            : " << oct << num << endl;
    
    cout << endl << endl;
    return 0;
}

