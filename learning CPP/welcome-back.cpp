#include <iostream>
#include <string>

using namespace std;

/*
//Trying out functions
int DemoCounsleOutput()
{
    cout << "This is a simple string lateral" << endl;
    cout << "Putting this shit right sown" << endl;
    cout << "Ennter you name: ";
    string Name;
    cin >> Name;
    cout << "My Name is " << Name << "! peace out" << endl;

    return 0;
}

int main()
{
    return DemoCounsleOutput();
}
*/

/*
//Writing a function with multiple parameters

//decalring constant parameters
const double Pi=3.14159265;

//Declaration of function name and parameters
double SurfaceArea(double height, double radius);

//Body of code
int main()
{
    cout << "Enter the radius of the cylinder: ";
    double radius;
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    double height;
    cin >> height;

    cout << "Surface Area: " << SurfaceArea( radius, height) << endl;
    
    return 0;
}

double SurfaceArea(double radius, double height)
{
    double area =  2 * Pi * radius * radius + 2 * Pi * radius * height;
    return area;
}
*/

/*
const string career="Machine Learning Developer";
//int (string Name, int age);
int Details()
{
    cout << "Enter you name: ";
    string Name;
    cin >> Name;

    cout << "Enter your age: ";
    int age=0;
    cin >> age;

    cout << "My Name is " << Name << ". I'm " << age \
    << "years old. I work as a " << career << endl;
    
    return 0;
}

int main()
{
    return Details();
}
*/

double Area(double radius, double pi=3.14);

int main()
{
    cout << "Enter Radius: ";
    double radius = 0;
    cin >> radius;

    cout << "The value of Pi is 3.14. Do you wish to change if? ";
    char userPrompt = 'n';
    cin >> userPrompt;

    double circleArea = 0;
    if (userPrompt == 'y')
    {
        cout << "Enter the value of Pi: ";
        double newPi=3.14;
        cin >> newPi;
        circleArea = Area ( radius, newPi);
    }
    else
        circleArea = Area(radius);

    cout << "Area is: " << circleArea << endl;
    return 0;
}

double Area(double radius, double pi)
{
    return  pi * radius * radius;
}