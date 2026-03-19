// Section 13
// Static class members
#include <iostream>
#include "Player.h"

using namespace std;

void display_active_players();

void display_active_players() //prints number of active players, calling static funct
{
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main() 
{
    display_active_players();       //0
    Player hero{"Hero"};
    display_active_players();       //1
    
    {
        Player frank{"Frank"};
        display_active_players();   //2
    }// using curly brakets like this forces the destruction of the create obj after it is used otherwise it is destroyed with the other at the end of main()
    display_active_players();       //1
    
    Player *enemy = new Player("Enemy", 100, 100);
    display_active_players();       //2
    delete enemy; //enemy was explicitely added to the heap (dynamic allocation) so it has to be deleted explicitely 
    display_active_players();       //1  
    //destuctor called to delete all undeleted objs

    return 0;
}

