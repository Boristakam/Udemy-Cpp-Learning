// Section 18
// Miles per Gallon - Function
#include <iostream>

using namespace std;

/* returns miles per gallon */
double calculate_mpg(int miles, int gallons)
{
    if (gallons == 0)
        throw 0;
    return (double)miles / gallons; //casting one of the integers to allow 'double' division
}

int main () 
{
    int miles {};
    int gallons {};
    double miles_per_gallon {};

    cout <<"enter the number of miles: ";
    cin >>miles;
    cout <<"enter the number of gallons: ";
    cin >>gallons;

    try
    {
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout <<"result: " << miles_per_gallon << endl;
    }
    catch (int &ex)
    {
        cerr <<"you cannot divide by zero"<< endl;
    }

    cout <<"bye!" << endl;
    
    return 0;
}

