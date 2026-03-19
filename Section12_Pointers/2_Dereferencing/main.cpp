// Section 12
// Dereferencing
// except for its declaration if a pointer has an '*' anywhere in the code it is being dereferenced 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int score {100};
    int *score_ptr {&score};   //because of '&' any changes made to 'score' via this pointer will be permanent 

    cout << *score_ptr << endl;		// 100. the '*' dereferences the pointer so it now stores the value of score not the addr of score

    *score_ptr = 200; //using dereferencing operator again to change the value of score indirectly. note this is possible because of '&' in the declaration 
    
    cout << *score_ptr << endl;		// 200.  would still print 200 if a the value of score was changed directly instead of indirected using the dereferenced pointer 
    cout << score << endl; 			// 200
    cout << score_ptr << endl;      // address of score
    cout << &score << endl;         // address of score 

    cout << "\n------------------------------" << endl;
    double high_temp {100.7};
    double low_temp {37.4};			       
    double *temp_ptr {&high_temp};    

    cout << *temp_ptr << endl;   	// 100.7    	    
    temp_ptr = &low_temp;	
    cout << *temp_ptr << endl;   	// 37.4   	    

    cout << "\n------------------------------" << endl;

    string name {"Frank"};
    string *string_ptr {&name};

    cout << *string_ptr << endl;   	// Frank   
    name = "James"; 	    
    cout << *string_ptr << endl;   	// James  
//
    cout << "\n------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges;
    
    cout << "First stooge: " << (*vector_ptr).at(0) << endl;    // Larry
    
    cout << "Stooges: ";
    for (auto stooge: *vector_ptr)  
        cout << stooge << " ";
    cout << endl;
    
    cout << endl;
    return 0;
}

