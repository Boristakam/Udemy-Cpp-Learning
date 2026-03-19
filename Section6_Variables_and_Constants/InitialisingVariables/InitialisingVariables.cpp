#include <iostream>
using namespace std;

// this program calculates the area of a room in square feet
int main () 
{
    /* if we dont initialise the local variable a series of 0s and 1s that represent its
    memory location are what will be read by the console when called upon */
    cout << "enter the width of the room: ";
    int room_width {0}; //best practice for initialisation {}. called the list initialisation. helps prevent overflow in the -ve numbers if the value provided is significantly greater then what an int can hold 
    cin >> room_width;

    cout << "enter the length of the room: ";
    int room_length {0};
    cin >> room_length;
    
    cout << "the area of the room is: " << room_length * room_width << " square feet." <<  endl;


    return 0;
}