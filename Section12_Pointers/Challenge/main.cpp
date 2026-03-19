//passing arrays/pointer to function and returning pointers 

#include<iostream>

using namespace std;

/* function prototypes */
int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2); // the '*' is added to functioni name because it is returning to a pointer
                                                                                  // therefore it should also be a pointer 
void print(const int *array, size_t size);

int main ()
{
    const size_t array1_size {5};
    const size_t array2_size {3};

    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Results: ";
    print(results, results_size);

    delete [] results; //freeing up the storage from the heap 

    cout << endl;

    return 0;
}

/* function definitions */

/* this function prints array elements */
void print(const int *array, size_t size)
{
    // using the for loop here we're not modifying variable 'size', so it couldve been declared as a const 
    //cout << "[ ";
    // for (size_t i{0}; i < size; i++)
    // {
    //     cout << *array++ << " "; // can also use the array subscript notation 
    // }
    // cout << "]" << endl;


    // using a while loop, here we change 'size' so it cannot be declared a const. also should not pass by 'size' reference
    // because  it would change the value passed into the appy_all function call 
    cout << "[ ";
    while (size != 0)
    {
        cout << *array++ << " ";
        size--;
    }
    cout << "]" << endl;
}

/* this function receives 2 interger arrays and return a third
 * based on the size and element values of the other two arrays
 * it then return the addr of this new arary to the main function */
int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2)
{
    int *new_arr_ptr{NULL};
    size_t new_size = size1 * size2;
    new_arr_ptr = new int[new_size];

    int position {0};
    for(size_t j{0}; j < size2; j++)
    {
        for(size_t y{0}; y < size1; y++)
        {
            new_arr_ptr[position] = array1[y] * array2[j];
            position++;
        }
    }
    
    return new_arr_ptr;
}