#include <iostream>
using namespace std;

/* Boris's carpet cleaning service charges
£30 per room
sales tax rate is 30 percent
estimates are valid for 30 days

prompt the user for the number of rooms they would like cleaned 
and provide an estimate such as:

Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: £30
Cost: £60
Tax: 3.6
===============================================================
Total estimate: £63.6
 */

int main ()
{
    cout << "\nEnter the number of rooms to be cleaned: ";
    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double room_price {30.0};
    const double tax_rate {0.06};
    const int duration {30}; //days

    double cost = number_of_rooms * room_price;
    double tax = cost * tax_rate;
    
    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: " << room_price << endl;
    cout << "Cost: \x9c" << cost << endl;   // trick to print the british pound sign
    cout << "Tax: " << tax << endl;
    cout << "===========================" << endl;
    cout << "Total estimate: " << cost + tax << endl;
    cout << "This is valid for " << duration << " days!\n" << endl;

    return 0;
}