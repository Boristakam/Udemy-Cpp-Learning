// Section 18
// Miles per Gallon - No Exception handling
#include <iostream>
using namespace std;

int main()
{
    int miles = {};
    int gallons = {};
    double mile_per_gallon {};

    std::cout <<"enter the number of miles: ";
    std::cin >> miles;
    cout <<"enter the number of miles: ";
    cin >> gallons;

    //
    try
    {
        if (gallons == 0)
        {
            throw 99;
        }
        else
        {
            mile_per_gallon = static_cast<double>(miles) / gallons; //making one of the integers a double so if user provides any double values a double diveision will occur
            cout << "result = " << mile_per_gallon << endl;
        }
    }
    catch(int &ex) // ex is the object the passes the value thrown when the exception is raised
    {
        cout << "error: "<< ex << '\n';
        cerr << "sorry cant divide by zero" << endl;
    }

    cout << "bye" << endl;
}



