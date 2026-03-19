#include <iostream>

using namespace std;

int main()
{
    int length {0}, width {0}, height {0};
    
    cout << "\npackage dimension\nenter the length: ";
    cin >> length;
    cout << "enter the width: ";
    cin >> width;
    cout << "enter the height: ";
    cin >> height;

    //Evaluating shipping cost
    
    if (length > 10 || width > 10 || height > 10)
    {
        cout << "sorry your package is too large to ship " << endl;   
    }
    else 
    {
        double volume = length * width * height;
        const double base_cost {2.50};
        double shipping_cost = volume * base_cost;
        double ten_percent_charge = shipping_cost + (shipping_cost * 0.01);
        double twentyfive_percent_charge = shipping_cost + (shipping_cost * 0.25);

        if ( volume > 100 )
        {
            cout << "\nyour shipping cost is: " << shipping_cost + ten_percent_charge << "$" << endl;
        }
        else if (volume > 500)
        {
            cout << "\nyour shipping cost is: " << shipping_cost + twentyfive_percent_charge << "$" << endl;
        }
        else
        {
            cout << "\nyour shipping cost is: " << shipping_cost << "$" << endl;
        }
    }

    return 0;
}