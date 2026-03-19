// Section 13
// Move Constructor 
#include <iostream>
#include <vector>

using namespace std;

class Move 
{
    private:
        int *data;
    public:
        void set_data_value(int d) { *data = d; }
        int get_data_value() { return *data; }
        // Constructor
        Move(int d);
        // Copy Constructor (deep copy)
        Move(const Move &source);
        // Move Constructor
        Move(Move &&source) noexcept;
        // Destructor
        ~Move();
};

 Move::Move(int d)  
 {
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}

// Copy ctor
Move::Move(const Move &source)
    : Move {*source.data} //delegating constructor called to copy and init the data
{
    cout << "Copy constructor  - deep copy for: " << *data << endl;
}

//Move ctor
Move::Move(Move &&source) noexcept // parameter is in r-value reference. KEY POINT
    : data {source.data} //advantage of move constructor over the copy constructor is not having to dereference the pointer here (cheaper)
{
    source.data = nullptr; //null out pointer of source data (there only one pointer pointing to one mem addr). without this we have a shallow copy operation not a move
                            //in short is steals the data and  nulls out the source pointer                  
    cout << "Move constructor - moving resource: " << *data << endl;
} //destructor is also called here to destroy the object whose data was stolen and its pointer is being set to null

Move::~Move() 
{
    if (data != nullptr) {
        cout << "Destructor freeing data for: " << *data << endl;
    } else {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}

int main() 
{
    vector<Move> vec;

    vec.push_back(Move{10}); //10 is a temp object of class Move!!!!! it is unnamed so it's an r-value
                             //default ctor called first then move constructor is called to move this r-value on the heap. then original object gets destroyed
    vec.push_back(Move{20});
    vec.push_back(Move{30}); // we have to declare this r-values again in the pushback func because the compiler knows them as intergers or floats etc
    vec.push_back(Move{40});
    vec.push_back(Move{50}); //with the move ctor these temp values are simply moved the the vector vec, whereas with copy ctor a copy 
                            //(deep copy - to make the matter more expensive) is made, before this copy is then pushed to vec
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});


    return 0;
}

