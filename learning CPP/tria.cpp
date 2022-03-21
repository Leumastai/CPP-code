#include <iostream>

using namespace std;

/*
int main()
{
    //program should write wheater a triangle is isoceles, scalene or equilateral

    cout << "How many equal sides does your traingle has: ";
    
    int sides;
    char inval = 'o';
    
    cin >> sides;

    if (sides==1)
    {
        cout << "Your traingle is Scalene triangle." << endl;
    }

    else if (sides==2)
    {
        cout << "Your traingle is Isoceles triangle." << endl;
    } 
    else if (sides==3)
    {
        cout << "Your traingle is Equalateral triangle." << endl;
    }
    else
    {
        cout << "Nigga put in a valid shit! or you don't know your traingles agin." << endl;
    }    
}
*/

//Saldina's method

int main()
{
    float a, b, c;
    cout << "a, b, c: ";
    cin >> a >> b >> c;

    if (a==b && b==c)
        cout << "You have an Equilateral triangle" << endl;
    else
    {
        if (a != b && a != c && b != c)
            cout << "You have a Scalene triangle";
        else
            cout << "You have an Isoceles triangle";
    }

    return 0;
}
