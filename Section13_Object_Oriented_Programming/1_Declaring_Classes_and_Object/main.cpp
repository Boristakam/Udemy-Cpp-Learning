// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Player {                        
    // attributes           //also called intance variables like in procedual programming (section 1 to 12)
    string name {"Player"};
    int health {100};
    int xp {3};
    
    // methods              //aka functions (func prototypes in this case) 
    void talk(string);
    bool is_dead();
};

class Account {
    // attributes
    string name {"Account"};
    double balance {0.0};
    
    // methods
    bool deposit(double);
    bool withdraw(double);
    
};


int main() {
    // instances/objects of class Account or Account objects
    Account frank_account;
    Account jim_account;
    
    // ojects of class Player or Player object 
    Player frank;
    Player hero;
    
    // players is an array of type Player aka array of Player objects. can't have object of other type/class in an array
    // (same an in procedual programing, all elements of arrays and vectors are of same type)
    Player players[] {frank, hero};
    
    // again vector of user defined type Player aka vector of Player objects 
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    
    
    // can also create objects on the heap
    // pointer to an object in class Player or Pointer to a Player object. cant ppoint to the class directly 
    Player *enemy {nullptr};
    enemy = new Player;      //Note: enemy is not the name of the new player it is the pointer to a new object (a new player)
                             // we can dereference that pointer and access the name member of the class instances of the new player to rename it 
                             // to something other than what the class initialised it to
    
    delete enemy; // would need to use 'delete [] enemy' if the pointer enemy was pointing to an array 

    return 0;
}