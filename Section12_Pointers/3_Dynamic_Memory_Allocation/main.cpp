// Section 12
// Dynamic Memory
/* vectors use heap memory or free store, same as arrays, and pointers */
#include <iostream>

using namespace std;

int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int;          // allocate storage for an int on the heap, and stores its address in the pointer int_ptr
    cout << int_ptr << endl;    // use it. prints addr of new int 
    delete int_ptr;             // release it (frees allocated storage aka the pointer is now null, points nowhere, loses access to that memory). to prevent memory leak. pointing nowhere is good, pointing anywhere is bad
    
    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps? ";
    cin >> size;
    
    temp_ptr = new double[size];    // allocate the storage for array of doubles on the heap and stores its addr in temp_ptr
    cout << temp_ptr << endl;       // use it
    delete [] temp_ptr;            // release it
    
    cout << endl;
    return 0;
}

