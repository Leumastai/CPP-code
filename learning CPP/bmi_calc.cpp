#include <iostream>
#include <string>

using namespace std;
int main()
{
    double weight;
    double height;
    cout << "Enter your weight in kg: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    double bmi = weight / (height * height);
    
    if (bmi < 18.5)
        cout << "You're underweight! " << endl;
    else
        if (bmi > 25)
            cout << "You're overweiht! " << endl;
        else
            cout << "You've got a normal weight! Cheers" << endl;

    cout << "Your bmi is " << bmi << endl;
}