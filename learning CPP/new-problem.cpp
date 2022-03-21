#include <iostream>

using namespace std;

/*
int main()
{
    int num1 = 0, num2 = 0;

    cout << "This function adds two number together and return result" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int results = 0;
    results = num1 + num2;
    cout << num1 << " + " << num2 << " = " << results << endl;

    return 0;
}

*/

/*
//convert hour and min to sec
int main()
{ 
    //hour should be entered in 24hours format
    int sec = 0;
    cout << "This function converts hour, minute and time into seconds" << '\n' << endl;

    cout << "If you wish to convert from hour enter 'h', from minute enter 'm', from both minute and hour enter 't': ";

    char userSelection = 'h';
    cin >> userSelection;

    if (userSelection == 'h')
    {
        cout << "What hour of the day is it? ";
        int hour = 0;
        cin >> hour;

        sec = (hour * 60 * 60);
        cout << "The hour in seconds is " << sec << "sec" << endl;
    }
    else if (userSelection == 'm')
    {
        cout << "What minute of the day is it? ";
        int min = 0;
        cin >> min;

        sec = (min * 60);
        cout << "The minute in seconds is " << sec << "sec" << endl;
    }
    else if (userSelection == 't')
    {
        cout << "What hour of the day is it? ";
        int hour = 0;
        cin >> hour;

        cout << "What minute of the day is it? ";
        int min = 0;
        cin >> min;

        sec = (hour * 60 * 60) + (min * 60);
        cout << "The time in seconds is " << sec << "sec" << endl;

    }

    return 0;
}

*/

/*
int main()
{
    cout << "This function takes in integers and check their equality" << endl;

    int num1 = 0, num2 = 0;
    cout << "Enter the two integers: ";
    cin >> num1 >> num2;

    int max = (num1 > num2)? num1 : num2;
    cout << "The greater of " << num1 << " and " \
        << num2 << " is: " << max << endl;

    return 0;
}
*/

int main()
{
    //A program that returns boolean if a string contains digit

    char sayHello[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};

    for()
    cout << sayHello << endl;

    return 0;
}