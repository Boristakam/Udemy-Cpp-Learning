// Section 13
// Constructors and Destructors

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    void set_name(std::string name_val) 
    { 
        name = name_val; //note: assignmnent not initialisation (see lesson 8 for init syntax)
    }

    // Overloaded Constructors (note they each have a unique signature: different args/params, or even within the body of constructor if code provided)
    // This example/lesson does not do it but always initialise attributes in every constructor to avoid having garbage values 
    Player() 
    { 
        cout << "No args constructor called"<< endl;
    }
    Player(std::string name) 
    { 
        cout << "String arg constructor called"<< endl;
    }
    Player(std::string name, int health, int xp) 
    {
        cout << "Three args constructor called"<< endl; 
    }
    ~Player() 
    { 
        cout << "Destructor called for " << name << endl; 
    }
};

int main() 
{
    {//if you dont provide the curly brakets when creating objects to use constructors you need to use the delete keyword ---- maybe????
     // if no curly bracket are provided at all the ones for the int main function might serve the same purpose. (not great for memory of many constructors are used)
        Player slayer; // everytime and object is created a constructor is called automatically to initialise the attributes 
                       // in this case the default constructor (with no parameters) is called, since the code does not specify 
        slayer.set_name("Slayer"); // assignment not initialisation
    }//end of constructor scope so the object is automatically destroyed using the destructor. theres only one destructor and it is called automatically 
    
    {
        Player frank;
        frank.set_name("Frank");

        Player hero("Hero"); //now calling contructor with 1 param that initialise the member attribute called 'name'
        hero.set_name("Hero"); // therefore this line is obsolete.. it is just providing a public 'name' for our print statements to display

        Player villain("Villain", 100, 12);
        villain.set_name("Villain"); 
    }// now all object of constructors are destroyed.. debug window would show all initialise attributes return to their default (garbadge) values
     // note destructor called 3 times because we have 3 objects for 3 constructors, and constructors are destroyed in the reverse order of their object creation 
      // meaning villain gets destroyed first then hero then frank
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy; //destructor also called when we delete a pointer to an object. explicitely deleting them 
    delete level_boss;
    
    return 0;
}

