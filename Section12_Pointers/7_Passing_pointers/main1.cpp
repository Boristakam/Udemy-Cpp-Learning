// Section 12
// Passing Pointers 1
#include <iostream>

using namespace std;

// no need to return anything the passed value is directly to updated in the main because it was passed by reference not by value 
void double_data(int *int_ptr) {
   *int_ptr *= 2; // the function dereferences the pointer and multiplies its value by 2	
}

int main() {
    int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl; //10
    double_data(&value);    //passing by reference because the function parameter is an int pointer expecting the addr to an integer
    cout << "Value: " << value << endl; // 20

    cout << "-----------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);  // again passing value by reference with the use of a pointer
    cout << "Value: " << value << endl; //40   (NOTE; THE PREVIOUS FUNCTION CALL CHANGED VALUE FROM 10 TO 20.. SO HERE WE GET 40)

    cout  << endl;
    return 0;
}