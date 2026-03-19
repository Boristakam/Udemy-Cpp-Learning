#include <iostream>
using namespace std;

/* Unlike local variables global variables are automatically initialised to 0
because they are accessible by any part of the program, they can also be changed by 
any part of the program which could be an issue when debugging. Only use them when needed
for vars that will never need to change through the whole execution of the program */

int age {23}; // Global variable accessible by any function in the program 

int main () 
{
    int age {24}; // local variable to function main()
    cout << age << endl; 

    return 0;
}
//Note to local variable shadows the global variable in the main function 