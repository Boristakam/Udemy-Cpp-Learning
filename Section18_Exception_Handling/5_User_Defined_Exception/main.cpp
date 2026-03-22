// Section 18
// Miles per Gallon - Function - Exception Classes
#include <iostream>

using namespace std;

/* Exception classes */
class DivideByZeroException 
{
    /* Do nothing */
};
class NegativeValueException 
{
    /* Do nothing */
};

double calculate_mpg(int miles, int gallons) 
{
    if (gallons == 0)
        throw DivideByZeroException();  // it is best practice to throw exception class object unlike before
    else if (miles < 0 || gallons < 0)
        throw NegativeValueException();
    return static_cast<double>(miles) / gallons;
}

int main() 
{    
    int miles {};
    int gallons {};
    double miles_per_gallon {};   
    
    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;
    
    try 
    {
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallon << endl;
    } 
    catch (const DivideByZeroException &ex) //the exception object is still passed by reference (but a const this time so class members are not modified)
    {
        cerr << "Sorry, you can't divide by zero" << endl;
    } 
    catch (const NegativeValueException &ex) // catching exception by const reference 
    {
        cerr << "Sorry, one of your parameters is negative" << endl;
    }
    cout << "Bye" << endl;

    return 0;
}

