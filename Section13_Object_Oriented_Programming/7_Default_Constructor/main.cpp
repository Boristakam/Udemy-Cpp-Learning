// Section 13
// Default Constructors
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
    void set_name(string name_val) 
    { 
        name = name_val; 
    }
    std::string get_name() 
    {
        return name;
    }
    //default constructor, does not expect any argurments 
    Player() // AGAIN no args method aguments are present here! do not confuse with method statements which can do assignments not initialisations
    {
        name = "None";
        health = 100; //still assignment here not really initialisation (see next lesson)
        xp = 3;
    }
    //if the constructor only expected args for name it would still be best practice to initialise the other 2 attributes to known value
    Player(string name_val, int health_val, int xp_val) 
    {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
    
};

int main() 
{
    Player hero; //uses default (no args overload constructor)
    Player frank {"Frank", 100, 13}; //assignment as well because it takes place in the constructor's body not in it's declaration
    frank.set_name("Franky"); //assignment 
    cout << frank.get_name() << endl; //accessing private attribute 
    return 0;
}

