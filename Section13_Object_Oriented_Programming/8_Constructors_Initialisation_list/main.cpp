// Section 13
// Constructor Initialization Lists
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   string name {"XXXXXXX"};
   int health;
   int xp;
public:
// Overloaded Constructors prototypes
    Player();
    Player(string name_val);
    /*     :name{name_val}, health{0}, xp{0}
    {} */                                     //can also do this inside the class but it's not clean 
    Player(string name_val, int health_val, int xp_val);
};

// Note some overloaded contructors have repeated/same code, we'll see how to delegate those in the next lesson 
Player::Player() //class name followed by constructor prototype (separated by ::)
    : name{"None"}, health{0}, xp{0} //This initialises the private attributes (meaning the 'XXXXXXXX' is discarded not used for initialisation, 
                                     //and the other 2 attributes will not have garbadge value from the start of the program)
{
 // constructor body 
}

Player::Player(string name_val) 
   : name{name_val}, health{0}, xp{0} //the order of default/values provided here does not matter, 
                                      //attributes will be initialise in the order they are declared in the class declaration
{
    // constructor body 
}
  
Player::Player(string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val}
{
    // constructor body    
}

int main() 
{
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55}; //notice we have curly brakets now unlike in the last lecture 
    
    return 0;
} //destructor is called 

