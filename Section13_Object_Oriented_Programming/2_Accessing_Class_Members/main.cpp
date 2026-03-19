// Section 13
// Accessing Class Members
#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // attributes
    string name;
    int health {23}; //if not initialised here the print statement in main return '2' why?????????????????????????
    int xp;
    
    // methods
    void talk(string text_to_say) 
    { 
        cout << name << " says " << text_to_say << endl;  
    }
    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;
    
    // methods
    void deposit(double bal) 
    {
        balance += bal; 
        cout << name << " in deposit" << endl; 
    }
    void withdraw(double bal) 
    {
        balance -= bal; 
        cout << "In withdraw" << endl;  
    }
};

int main() {
    Account frank_account;
    frank_account.name = "Frank's account"; //Note: no curly brakets when acsessing and modifying class members because it's an assignment not an initialisation 
    frank_account.balance = 5000.0;
    
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    
    Player frank;
    frank.name = "Frank";
    cout << frank.health << endl;
    frank.health = 100;
    cout << frank.health << endl;
    frank.xp = 12;
    frank.talk("Hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;      // can also use the dot operator 
    
    enemy->talk("I will destroy you!"); // can also use the dot operator 
    


    return 0;
}

