#include<iostream>
using namespace std;

/*
//function with multipile parameters

const double Pi = 3.14159265;

//Declaration contains two parameters
double SurfaceArea(double radius, double height);

int main()
{
    cout << "Enter the radius of the cyclinder: ";
    double radius = 0;
    cin >> radius;
    
    cout << "Enter the height of the cylinder: ";
    double height = 0;
    cin >> height;

    cout << "Surface Area: " << SurfaceArea(radius, height) << endl;

    return 0;
}

double SurfaceArea(double radius, double height)
{
    double area = 2 * Pi * radius * radius + 2 * Pi * radius * height;
    return area;
}

*/

/*
//A function with no parameters and no return values

void SayHello();

int main()
{
    SayHello();
    return 0;
}

void SayHello()
{
    //or you can insert a symbolic empty sign or leave it
    cout << "Hello World" << endl;
    return; // an empty return
}
*/

/*
// functon with default values

//Function declaration (Prototypes)
double Area(double radius, double pi = 3.14);

int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << "pi is 3.14, do you wish to change this (y/n)? ";
    char changePi = 'n';
    cin >> changePi;

    double circleArea = 0;
    if(changePi == 'y')
    {
        cout << "Enter new pi value: ";
        double newPi = 3.14;
        cin >> newPi;
        circleArea = Area (radius, newPi);
    }
    else
        circleArea = Area (radius); //Ignore 2nd param, use defaukt value

    //call function area
    cout << "Area is: " << circleArea << endl;
    return 0;
}

//Function definitions (implementations)
double Area(double radius, double pi)
{
    return pi * radius * radius;
}
*/

/*
//Recursive function: here the function calls it self
int GetFibNumber(int fibIndex)
{
    if (fibIndex < 2)
        return fibIndex;
    else //recursion if fibIndex >= 2
        return GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex -2);
}

int main()
{
    cout << "Enter 0-based index of desired Fibonacci Number: ";
    int index = 0;
    cin >> index;

    cout << "Fibonacci number is: " << GetFibNumber(index) << endl;
    return 0;
}
*/

/*
//Multiple return statement

const double pi = 3.14159265;

void QueryAndCalcualte()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << "Area: " << pi * radius * radius << endl;

    cout << "Do you wish to calculate circumfrence (y/n)? ";
    char calcCircum = 'n';
    cin >> calcCircum;

    /*
    if (calcCircum == 'n')
        return;
    
    cout << "Circumfrence: " << 2 * pi * radius << endl;
    return;
    //close your comment here

    if (calcCircum == 'y')
    cout << "Circumfrence: " << 2 * pi * radius << endl;
    
}

int main()
{
    QueryAndCalcualte();
    return 0;
}
*/

/*
//Overloading functions
const double pi = 3.14159265;

double Area(double radius); // Area of a circle
double Area(double radius, double height); // Area of a cylinde

int main()
{
    cout << "Enter 'z' to calculate the area of a cylinder, 'c' for  area of a circle: ";
    char userSelection = 'z';
    cin >> userSelection;

    cout << "Enter the radius of the circle: ";
    double radius = 0;
    cin >> radius;

    if(userSelection == 'z')
    {
        cout << "Enter height of the cylinder: ";
        double height = 0;
        cin >> height;

        cout << "Area of the cylinder is: " << Area(radius, height) << endl;

    }
    else
        cout << "Area of a circle is: " << Area(radius) << endl;
}

double Area(double radius)
{
    return pi * radius * radius;
}

double Area(double radius, double height)
{
    return 2 * Area(radius) + 2 * pi * radius * height;
}
*/

/*
//Functoin that takes an array as parameter
void DisplayArray(int numbers[], int lenght)
{
    for (int index = 0; index < lenght; ++index)
        cout << numbers[index] << " ";

    cout << endl;
}

void DisplayArray(char characters[], int lenght)
{
    for(int index = 0; index < lenght; ++index)
        cout << characters[index] << " ";

    cout << endl;
}

int main()
{
    int mynums[4] = {23,-5,255,9};
    DisplayArray(mynums, 4);

    char mystatement[7] = {'H','e','l','l','o','!','\0'};
    DisplayArray(mystatement, 7);

    return 0;
}
*/

//Refrence function

const double pi = 3.14159265;
void Area(double radius, double& result)
{
    result = pi * radius * radius;
}

int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    double areaFetched = 0;
    Area(radius, areaFetched);

    cout << "This area is: " << areaFetched << endl;
    return 0;
}