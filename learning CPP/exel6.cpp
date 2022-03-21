#include <iostream>
using namespace std;

/*
//exe 1
const double pi = 3.14159256;
double volume(double radius);
double volume(double radius, double height);

int main()
{
    cout << "Enter 's' to calculate volume of a sphere or 'c' for cylinder: ";
    char userSelection = 'c';
    cin >> userSelection;

    cout << "Enter the radius of the object: ";
    double radius = 0;
    cin >> radius;

    if (userSelection == 'c')
    {
        cout << "Enter the height of the cylinder: ";
        double height = 0;
        cin >> height;

        cout << "The volume of the Cylinder is " << volume(radius, height) << endl;
    }
    else
    {
        cout << "The volume of the Sphere is " << volume(radius) << endl;
    }

    return 0;
}

double volume(double radius)
{
    int vS = 0;
    vS = (4 * pi * radius * radius * radius) / 3;
    return vS;
}

double volume(double radius, double height)
{
    int vC = 0;
    vC = pi * radius * radius * height;
    return vC;
}
*/


//function that accepts array of double as input
void ProcessArray(double numbers[], int length)
{
    for (int index = 0; index < length; ++index)
        cout << numbers[index] << " ";

    cout << endl;
}

int main()
{
    double numbers[3] = {3.0, 0.005, 34.765};
    ProcessArray(numbers, 4);
    return 0;
    
}

vo