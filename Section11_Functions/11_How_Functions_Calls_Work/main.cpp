// Section 11
// How function calls work
// The call stack
#include <iostream>

using namespace std;

void func2(int &x, int y, int z) {
    x+= y + z;
}

int func1(int a, int b) {
    int result {};
    result = a + b;
    func2(result, a , b);
    return result;
}

int main() {            // has a stack frame/function activation record because it is a function 
    int x {10};
    int y{20};
    int z{};
    z = func1(x,y);     // z = 60 not 30. func2 passed argument by reference therefore whatever happens to x also happens to result!!! 
    cout << z << endl;
    return 0;
}

/* What typically happens when main calls func1 (or any function calls another) ?
    There are other ways to acheive the same results :)
    
    main:
        push space for the return value
        push space for the parameters
        push the return address (func1 needs to know where to come back to in main when it is done executing)
        transfer control to func1 (jmp)  // jump ar jpm is an assembly language term
    func1:
        push the address of the previous activation record
        push any register values that will need to be restored before returning to the caller
        perform the code in func1
        restore the register values (so main continues from where it was before the function call)
        restore the previous activation record (move the stack pointer.. pop the stack frame off of the stack)
        store any function result (at the return value address provided by main)
        transfer control to the return address (jmp) (main regained control)
    main:
        pop the parameters
        pop the return value
*/




