// Section 12
// Passing Pointers 3

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display( const vector<string> *const  v) {  // constant pointer to a constant vector of  strings 
//(*v).at(0) = "Funny"; // this line causes an error because the vector pointed to is made const in this function (the first const )
    for (auto str: *v) //NOTE v is the pointer not the vector hence why we dereference it 
        cout << str << " ";
    cout << endl;
  
 //   v = nullptr; 
}

void display(int *array, int sentinel) {
    while (*array != sentinel) //dereference to array and check the value is not -1 
        cout << *array++ << " "; // incrementing pointer not the dereferenced value 
    cout << endl;
}

int main() {

   cout << "-----------------------------" << endl;
   vector<string> stooges {"Larry", "Moe", "Curly"};
   display(&stooges);
   
    cout << "\n-----------------------------" << endl;
    int scores[] {100,98,97,79,85,-1};
    display(scores, -1);
    
    cout  << endl;
    return 0;
}

