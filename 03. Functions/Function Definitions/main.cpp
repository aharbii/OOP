#include <iostream>

#define PI 3.14159

using namespace std;

double get_area(double radius)
{
    double area{0};
    area = PI * radius * radius;
    return area;
}

double get_volume(double radius, double height)
{
    double volume{};
    volume = get_area(radius) * height;
    return volume;
}

int main()
{
    double radius{};
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << get_area(radius) << endl;


    double height{};
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    
    cout << "The volume of the cylinder with radius: " << radius << " and height " << height << " is " << get_volume(radius, height) << endl;
    return 0;
}