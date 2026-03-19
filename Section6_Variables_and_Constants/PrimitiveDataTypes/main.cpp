/* 8 bit (1byte) data type can be represented by 256 unique value (2^8) and so on for higher bit values
the more bits the more storage required for storage

char is 8 bits therefore it can store up to 256 characters 
we can increase the size of the data type as required i.e. char16_t , char32_t, wchar (for the largest available character set)

overflows are caused when you store data in other types of variable where the variable in question does not hold enough storage 

many numbers have an infinite number of degits after the decimal point and the computer's finite storage limits us from
representing those numbers accurately 
float -> 7 decimal degits 
double -> 15 decimal degits 
long double -> 19 decimal degits

long int = 32 bits = 4 bytes
float = 32 bits
long = 64 bits 
long long is still 64 bits
long double = 96 or 128 bits depending on the architecture used

bool represents true(1) and false(0)
*/

#include <iostream>
using namespace std;

int main () 
{
    /***************************************
    * character type 
    ****************************************/
    char first_initial {'B'}; //single quote! double quote would make it a string 
    cout << first_initial;


    /**************************************** 
    Integer type  
    *****************************************/
    unsigned long int exam_score {99}; // the 'int' can be ommited.  
    cout << "\nmy exam score was " << exam_score << endl;

    int places_represented {65};
    cout << "there were " << places_represented << " places represented at the event." << endl;

    long people_in_milton {3061000}; 
    cout << "the number of people in milton is: " << people_in_milton << endl;

    /* long people_on_earth {7'600'000'000}; // generates the error narrowing conversion before the value doesnt fit in a long type 
    cout << "people on earth = " << people_on_earth << endl;

    long people_on_earth = 7'600'000'000; // using c style initialisation instead of the above list initialisation adds more errors (an overflow issue into the -ve numbers) 
    cout << "people on earth = " << people_on_earth << endl; */

    long long people_on_earth {7'600'000'000}; /*  */
    cout << "people on earth = " << people_on_earth << endl;


    /*********************************
     *  Floating point types 
    *********************************/
   float car_payment {349.32};
   cout << "car payment: " << car_payment << endl;

   double pi {3.14159};
   cout << "pi = " << pi << endl;

   long double large_amount {2.7e120};
   cout << "large amount = " << large_amount << endl;


   /*********************************
     *  Boolean types 
    *********************************/
   bool game_over {false}; // the program prints a 0 for false and a 1 for true 
   cout << "the value of game ovet is " << game_over << endl;


   /*********************************
     *  Overflow example 
    *********************************/
   short value1 {30000}; //both value 1 and 2 fit in their data type but product is too large to fit in a short hence causing an overflow 
   short value2 {10000};
   short product = value1 * value2; //causes overflow error giving a -ve number in the console 

    cout << "the sum of value 1 and value 2 is " << product << endl;

    return 0;
}