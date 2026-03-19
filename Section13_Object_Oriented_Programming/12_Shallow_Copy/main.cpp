// Section 13
// Copy Constructor - Shallow Copy
// Note: this program will crash
#include <iostream>

using namespace std;

class Shallow 
{
    private:
        int *data; // Raw pointer
    public:
        void set_data_value(int d) 
        { 
            *data = d; 
        }
        int get_data_value() 
        { 
            return *data; 
        }
        // Constructor
        Shallow(int d);
        // Copy Constructor
        Shallow(const Shallow &source); //function expecting a class object to be passed by reference 
        // Destructor
        ~Shallow();
};

Shallow::Shallow(int d) 
{
    //allocation storage on the heap dynamically for the provided/passed interger when constructor is called 
    data = new int; //create storage on the heap
    *data = d; //dereferencing the pointer and storing the integer
}

Shallow::Shallow(const Shallow &source) 
    : data(source.data) //see here we're doing a shallow copy, copying the pointer (data), not what it points to (*data)
{
    cout << "Copy constructor  - shallow copy" << endl;
} //now the copy of obj1 (s) also points to the same memory address 

Shallow::~Shallow() 
{
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s) //expects a class object (passed by value) to access public function. the fact that it is passed by value is what causes shallow copy here
{
    cout << s.get_data_value() << endl; //printing the addr (or pointer name) not the value (thats the second problem added to the fact that both objects point to same addr)
} //s goes out of scope so destructor is called and it deletes *data, original obj1 now point to invalid memory ( now returning to line 58)

int main() 
{
    Shallow obj1 {100}; //constructor called 
    display_shallow(obj1); //passing obj1 to display_shallow by value so a copy of the passed data need to be made (not great for memory)
                           // therefore copy constructor is called first. obj1 is the arg passed so it becomes 'source'
    
    Shallow obj2 {obj1}; // trying to copy object with pointer member pointing to invalid memory (now we have 2 objects pointing to invalid data)
    obj2.set_data_value(1000); //first real problem changing obj2 also changes obj1 assuming the operation even works 
    
    return 0;
}// second problem destroying the data will not work since pointing to invalid storage 

