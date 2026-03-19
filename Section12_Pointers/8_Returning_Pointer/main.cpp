// Section 12
// Return Pointer
#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0) {
   int *new_storage {nullptr};
   new_storage = new int[size];     //memory allocation for a new array on the heap 
   for (size_t i{0}; i < size; ++i)
      *(new_storage + i) = init_value;   //pointer offset notation, could also use the subscript notation
   return new_storage; //after the addr to the initialised array is returned this function is popped out of stack so we lose *new_storage pointer pointing to the the first array element in the heap 
                        //but now main (*my_array) gained access to the information right before *new_storage was lost. NOTE: heap data is not lost at this point
}

void display(const int *const array, size_t size) { //constant parameters so we do not alter the data passed to the function 
    for (size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}
int main() {
    int *my_array {nullptr};
    size_t size;
    int init_value {};
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    cout << "\n--------------------------------------" << endl;

    display(my_array, size); //passing the addr of the returned array created and initialised in the create array functiion 
                             // 'size wasn't passed by reference in the previous function call so it still has the value assigned at the start of the program by the user 
                             //after it returns display function is also popped out of the stack 
    delete [] my_array;  //always delete data on the heap after it has been used (heap is now free.. memory ready to be used again)
    return 0;
}