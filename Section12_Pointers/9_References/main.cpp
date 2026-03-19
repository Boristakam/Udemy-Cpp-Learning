// Section 12
// References
// Please see the section 11 examples for references as function paramters
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int num {100};
    int &ref {num};  // ref is an alias to num meaning they are the same (100)
    
    cout << num << endl; //100
    cout << ref << endl; //100 notice no dereferencing needed
    
    num  = 200;
    cout << "\n---------------------------------" << endl;
    cout << num << endl; //200
    cout << ref << endl; //200
    
    ref = 300;
    cout << "\n---------------------------------" << endl;
    cout << num << endl; //300
    cout << ref << endl; //300
    
    cout << "\n---------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};

    for (auto str: stooges)     
        str = "Funny";              // str is a COPY of the each vector element. making copies can be expensive so you could pass by reference 
      
    for (auto str: stooges)        // No change to stooges 
        cout << str << endl;
 
    cout << "\n---------------------------------" << endl;
    for (auto &str: stooges)  // str is a reference to each vector element. now passing by reference so no copies are made (a much cheaper operation),but running a risk of data being changed, so could make the variable const 
        str = "Funny";
     
    for (auto const &str:stooges)   // notice we are using const. Now the no data is copied across and the passed data cannot be changed/modified 
        cout << str << endl;            // now the vector elements have changed
    
    cout << endl;
    return 0;
}

