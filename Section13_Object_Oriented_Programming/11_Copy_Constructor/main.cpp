// Section 13
// Copy Constructor
#include <iostream>
#include <string>

using namespace std;

class Player
{
    private:
        string name;
        int health;
        int xp;

    public:
        string get_name() 
        { 
            return name; 
        }
        int get_health() 
        { 
            return health; 
        }
        int get_xp()
        {
            return xp; 
        } 
        // Constructor with default parameter values
        Player(string name_val ="None", int health_val = 0, int xp_val = 0);
        // Copy constructor
        Player(const Player &source); //passing the constructor 'Player' by reference so a copy is not made therefore saving memory (const prevents changes to the copy constructor changing the original)
        // Destructor                 //note the name source can be omitted above. it is ab object that represensts the object being copied
        ~Player() 
        { 
            cout << "Destructor called for: " << name << endl; 
        }
};
//constructor definition
Player::Player(string name_val, int health_val, int xp_val)  
    : name{name_val}, health{health_val}, xp{xp_val}    //initialisation list 
{
    cout << "Three-args constructor for " + name << endl;
}

//copy constructor definition. if you dont provide this(declaration and definition c++ provides a default copy constructor) 
Player::Player(const Player &source) //source can be omitted
   // : name(source.name), health(source.health), xp{source.xp} {   //using intialisation list 
       : Player {source.name, source.health, source.xp}  {          //using delegating constructor
        cout << "Copy constructor - made copy of: " << source.name << endl; //tells us what we've made a copy of 
}

void display_player(Player p) // p is created and imediately copied/passed by value
                              // because the parameter is type type Player(class name), therefore making it an object, 
                              // the function expects the parmameter/argument to be passed by value when calling this function (arg should also be of same type(an object))
{
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;    
}//destructor for p gets called at this point as we go out of scope of the function where it was created and used. compiler returns to main()

int main() 
{    
    Player empty {"XXXXXX", 100, 50};
    
    Player my_new_object {empty}; //object my_new_object is a copy of object 'empty'. it calls the copy constructor 
    
    display_player(empty);
    
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
        
    return 0;
} //destructor is called to destroy created objects from the heap 