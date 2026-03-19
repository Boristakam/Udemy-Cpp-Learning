// Area of a circle and volume of a cylindre

#include<iostream>

using namespace std;

const double pi {3.14159};

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

int main()
{
    area_circle();
    volume_cylinder();

    return 0;
}