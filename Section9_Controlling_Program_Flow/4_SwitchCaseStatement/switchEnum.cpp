#include <iostream>

using namespace std;

int main ()
{
    enum Direction {left, right, up, down}; //defining an enum type with its constants.  
    Direction heading {left};

   switch (heading)
   {
        case left:
            cout << "going left " << endl;
            break;
        case right:
            cout << "going right " << endl;
            break;
        // the compiler warns if we dont handle all the constants of the enum but having a default stops that 
        default:
            cout << "ok" << endl;
   }

    
    return 0;
}