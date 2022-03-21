/*
//q1
#include <iostream>
using namespace std;

enum YourCards 
{
    Ace = 42,
    Jack,
    Queen ,
    King
};

int main()
{
    YourCards Poker = Queen;
    cout << "Size of Queen is: " << Poker << endl;

}
*/

//q3
#include <iostream>
using namespace std;

int main()
{
    double Radius = 0;
    cout << "What is the radius of the circle: ";
    cin >> Radius;

    const auto pi = 3.142;

    double circumfrenceofCircle = 0, areaofCircle = 0;

    circumfrenceofCircle =  2 * pi * Radius;
    areaofCircle = pi * Radius * Radius;

    cout << "The circumfrence of the circle is: " << circumfrenceofCircle << endl;
    cout << "The Area of the circle is: " << areaofCircle << endl;

    return 0;
}