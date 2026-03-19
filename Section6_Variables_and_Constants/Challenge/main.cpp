#include <iostream>

using namespace std;

/* this program estimates the cost of room cleaning service
based on fixed prices and number of rooms provided by the user */

int main () 
{
    cout << "\nHello there! Welcome!" << endl;

    cout << "\nHow many big rooms do you want to be cleaned: ";
    int num_big_rooms;
    cin >> num_big_rooms;

    cout << "How many small rooms do you want to be cleaned: ";
    int num_small_rooms;
    cin >> num_small_rooms;

    const double big_room_price {35};
    const double small_room_price {25};
    const double tax_rate {0.06};
    const int duration {30};

    double cost = (big_room_price * num_big_rooms) + (small_room_price * num_small_rooms);
    double tax = cost * tax_rate;
    
    cout << "\nYour estimated carpet cleanig service:" << endl;
    cout << "Number of big rooms: " << num_big_rooms << endl;
    cout << "Number of small rooms: " << num_small_rooms << endl;
    cout << "Price per big rooms: $" << big_room_price << endl;
    cout << "Price per small rooms: \x9c" << small_room_price << endl; //trick to print the pound sign
    cout << "Cost: $" << cost << endl;
    cout << "Tax: " << tax << endl;
    cout << "=====================================" <<endl;
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << duration << " days!" << endl;

    // tax_rate = {45}; // this line would generate an error:assignment of read-only variable tax-rate because it's a constant and shouldnt be changed during execution

    return 0;
}