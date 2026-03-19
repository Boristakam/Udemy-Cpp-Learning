#include <iostream>
#include <vector>
#include <iomanip> // used to manipulate decimal places with the keyword/function setprecision()
using namespace std;


int main ()
{
    cout << "itterating through a simple array:" << endl;
    int scores [] {10, 20, 30};
    for (auto score: scores)
    {
        cout << score <<endl;
    }


    cout << "\nitterating through a vector of doubles:" << endl;
    vector <double> temperatures {87.4, 57.9, 734.6};
    double avg_temp {0};
    double total_temp {0};
    
    for (auto temperature: temperatures)
    {
       total_temp += temperature; 
    }
    if (temperatures.size() != 0)
    {
        avg_temp = total_temp / temperatures.size();
        cout << fixed << setprecision (3); // manipulate data to set the decimal places of the output number on the next line 
        cout << "the average temperature is " << avg_temp << endl;
    }
    else 
    {
        cout << "you cant devide be 0" << endl;
    }  


    cout << "\ninitialising the array in the range base for loop:" << endl;
    for (auto values: {'a', 'b', 'c'}) 
    {
        cout << values << endl;
    }


    cout << "\ninitialising the array in the range base for loop:" << endl;
    for (auto str: "This is a string")
        //if (str != ' ')   //to only print the characters ommittins spaces. and be use to print something else like tabs instead "\t" of spaces
        cout << str << endl;


    cout << endl;
    return 0;
}