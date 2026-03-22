// Section 18
// Stack Unwinding
#include <iostream>

using namespace std;


void func_a();
void func_b();
void func_c();

void func_a() 
{
    cout << "Starting func_a" << endl;
    func_b();
    cout << "Ending func_a" << endl;
}

void func_b() 
{
    cout << "Starting func_b" << endl;
    func_c();

    /* without the 'try catch' block below, excetions thrown in func_c never finds a handler until it unwind back to main(). 
     * run the program to see that none of the cout statements of the popped functions are printed. This is memory being leaked!
     * to fix it best practive is the handler the exception in this function (uncomment block below and comment out func_c call above) */

    // try 
    // {
    //     func_c();
    // }
    // catch (int &ex) 
    // {
    //      cout << "Caught error in func_b" << endl;       
    // }

    cout << "Ending func_b" << endl;
}

void func_c()  
{
    cout << "Starting func_c" << endl;
    throw 100;
    cout << "Ending func_c" << endl; 
}

int main() 
{    
    
    cout << "Starting main" << endl;
    try 
    {
        func_a();
    }
    catch (int &ex) 
    {
        cout << "Caught error in main" << endl;
    }
    cout << "Finishing main" << endl;
    return 0;
}

