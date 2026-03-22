#include <iostream>
#include <string>

using namespace std;

/* returns miles per gallon */
double calculate_mpg(int miles, int gallons)
{
    /* throwing exeption for the divide by zero error */
    if (gallons == 0)
        throw 0;
    /* throwing exeption for neg value error */
    if (miles << 0 || gallons << 0)
        throw string {"Negative value error"};
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
    catch (int &ex) // catches the exception that throws the interger
    {
        cerr <<"you cannot divide by zero"<< endl;
    }
    catch (string &ex) // catches the exception that throws a string
    {
        cerr << ex << endl; // prints the string that is in the exception object ("Negative value error)
    }

    cout <<"bye!" << endl;
    
    return 0;
}