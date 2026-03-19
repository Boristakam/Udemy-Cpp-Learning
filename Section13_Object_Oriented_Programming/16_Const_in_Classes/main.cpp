// Section 13
// Const in Classes
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
    string get_name() const  // the 'const' here means it will not change any data members in it's body 
    {         // consty method
        return name;
    }
    void set_name(std::string name_val) //   
    {
        name = name_val; //an attempt to modify data member 'name' will throw an err if accessed with a constant object 
                         //otherwise fine for any other objects 
    }
// Overloaded Constructors
    Player();
    Player(string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() 
    : Player {"None",0,0}
{
}

Player::Player(string name_val) 
   : Player {name_val,0, 0}  
{
}
  
Player::Player(string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} 
{
}

void display_player_name(const Player &p) 
{
    cout << p.get_name() << endl;
}

int main() 
{
    const Player villain {"Villain", 100, 55};  // const obj so will need to be used to access a const method for reading only  
    Player hero {"Hero", 100, 15}; // check what happens if calling a non-const obj with a const method!!!!!!!!!!
    
   // villain.set_name("Super villain");
    cout << villain.get_name() << endl;
    cout << hero.get_name() << endl;   
    
    display_player_name(villain);
    display_player_name(hero);

    return 0;
}

