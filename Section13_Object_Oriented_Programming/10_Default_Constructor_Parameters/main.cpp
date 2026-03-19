// Section 13
// Default Constructor Parameters
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
    Player(string name_val ="None", int health_val = 0, int xp_val = 0)
      :name{name_val}, health{health_val}, xp{xp_val}
    {
      cout << "Three args constructor called" << endl;
    }
  //  Player() {}    // Will cause a compiler error because the object with no args could call the constructor above as well. err is ambiguous constructor call
};

// the block below can be implemented in the class as shown   
/* Player::Player(string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
            cout << "Three-args constructor" << endl;
} */


int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
    
    return 0;
}

