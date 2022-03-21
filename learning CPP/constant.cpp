#include <iostream>
using namespace std;

/*
int main()
{
    //const are powerfull way to ensure that a certain variable cannot be modified
    const auto pi = 22.0 / 7;
    //const double pi = 22.0 / 7;
    cout << "The value of constant pi is: " << pi << endl;

    // Uncomment next line to view compile faliure
    // pi = 345

    return 0;
}

*/

/*
constexpr double GetPi() {
    return 22.0 / 7;
}
constexpr double TwicePi() {
    return 2 * GetPi (); 
}

int main()
{
    const double pi = 22.0 / 7;

    cout << "constant pi contains value " << pi << endl;
    cout << "constexpr GetPi() returns value " << GetPi() << endl;
    cout << "constexpr TwicePi() returns value " << TwicePi() << endl;

    return 0;
}
*/

//Enumeration
//check page 12 of your note for more details..

enum CardinalDirections
{
    North = 25,
    South,
    East,
    West
};

int main()
{
    cout << "Displaying directions and their symbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    cout << "East: " << South << endl;
    cout << "West: " << West << endl;

    CardinalDirections windDirection = South;
    cout << "Variable windDirection = " << windDirection << endl;

    return 0;
}

//using #define
#define pi 3.14286
/*
#define is a preprocessor macro, and what is done here is that all mentions of pi
henceforth are replaced by 3.14286 for the compiler to process.
*/

