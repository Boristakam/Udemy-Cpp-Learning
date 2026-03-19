#include "Player.h"

int Player::num_players {0}; // note the static attribute does not belong to any object therefore defined on its own 

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} 
{
    //we increment the mumber of players everytime we create a new Player obj (best done in the constructor)
    // if you have more than one constructor remember to increment there too
    ++num_players; 
}

Player::Player(const Player &source)
       : Player {source.name, source.health, source.xp}  // no need to increment the counter here because 
                                                         //it is implicitely done by the delegated constructor in the ini list 
{
}

Player::~Player() 
{
    //we decrement the mumber of players everytime we destroy a Player obj
    --num_players;
}

int Player::get_num_players()  // static function as declared in class declaration, therefore only has access to static data members 
{
    return num_players;
}


