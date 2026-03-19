/* remember the value of an array name is the address of its first element 
*  the value of a pointer is an address
*  therefore if a pointer points to the same data type as the array then the pointer and array can be used interchangebly (almost)
*  only difference is that the array is not a variable 
*  that means we can use array subscripts with pointers */

#include <iostream>

using namespace std;

int main() {
    
    int scores[] {100, 95, 89};
    
    cout << "Value of scores: " << scores << endl;  // address if first element   
    
    // no'&' before the 'scrores' in the {} below because scores is already an address 
    int *score_ptr {scores}; // making score_ptr point to scores, then derefercing scrore_ptr.. next line prints 100
    cout << "Value of score_ptr: " << score_ptr << endl;
    
    cout << "\nArray subscript notation -------------------------" << endl;
    cout << scores[0] << endl; //100
    cout << scores[1] << endl; //95 (one interger away (4 bytes) from the first element)
    cout << scores[2] << endl; //89 (two intergers away (8 bytes) from the first element)
    
    cout << "\nPointer subscript notation -------------------------" << endl;
    cout << score_ptr[0] << endl; //100
    cout << score_ptr[1] << endl; //95
    cout << score_ptr[2] << endl; //89
    

    //for the below notations dereferencing first before adding would have the effect of adding to the stored value rather than going to the next or previous value
    //can also use increment and decrement operator to accessess next address (see next lesson.. it is limited to only 1 addr forward or backwards at a time unlike offset method)
    //REMEMBER!: if pointing to integer at addr 1000 the next addr is 1004 (4 being the size of integer on this machine)
    cout << "\nPointer offset notation-------------------------" << endl;
    cout << *score_ptr << endl; //100
    cout << (score_ptr + 1) << endl;  // add the size of 1 interger to the address pointed to (4 bytes). assuming the machines assign 4 bytes per integer  
    cout << *(score_ptr + 1) << endl; // 95. accessed the 2nd element
    cout << *(score_ptr + 2) << endl; // 89. accessed the 3rd element
    
    cout << "\nArray offset notation-------------------------" << endl;
    cout << *scores << endl; //100 dereference the name of the array which is the addr of the first elemnt 
    cout << *(scores + 1) << endl; //95
    cout << *(scores +2) << endl; //89
    
    cout << endl;
    return 0;
}

