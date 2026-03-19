// using code in part 3(function definitions) to create function prototypes 

#include<iostream>

using namespace std;
// function prototypes. The more of these you have then you might need to put them in a header file 
// with there here we can even have our function definitions at the end of the code and no errors occur during compilation
double calc_volume_cylinder (double radius, double length);
double calc_area_circle(double radius);
void area_circle ();  //does not return anything so passing argument when calling this in main or anywhere wont compile 
void volume_cylinder();


const double pi {3.14159};

int main()
{
    area_circle();
    volume_cylinder();

    return 0;
}

// functions definitions 
double calc_area_circle(double radius)
{
    double area {};
    area = pi * radius * radius;
    return area;
}

double calc_volume_cylinder (double radius, double length)
{
  double volume;
  volume = calc_area_circle(radius) * length;
  return volume;
}

void area_circle ()
{
    double radius{};
    double area{};

    cout << "what the radius of the circle? " << endl;
    cin >> radius;

    area = calc_area_circle (radius); // passing user variable radius as the function argument and storing the function's returned value in the variable area
    cout << "the area of your circle is " << area << endl;
    cout << endl;
}

void volume_cylinder()
{
    double radius{};
    double length{};

    cout << "what the radius of the cylinder? " << endl;
    cin >> radius;

    cout << "What is the length of the cylinder? " << endl;
    cin >> length;
    
    cout << "the volume of the cylinder of radius "<< radius << " and length " << length << " is " << calc_volume_cylinder(radius, length) << endl;
}
