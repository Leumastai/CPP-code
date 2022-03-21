#include <iostream>
#include <string>
#include <string.h>

using namespace std;

/*
int main()
{
    //conditional statement
    cout << "Enter two integers: " << endl;
    int num1 =0, num2 = 0;
    cin >> num1;
    cin >> num2;

    cout << "Enter \'m\' to multiply, anything else to add: ";
    char userSelection = '\0';
    cin >> userSelection;

    int result = 0;
    if (userSelection == 'm')
        result = num1 * num2;
    else
        result = num1 + num2;
    cout << "result is: " << result << endl;

    return 0;
}
*/

/*
//multiple statement conditiona
//multiple statement condition are enclosed within statement blocks with the use of {} 
int main()
{
    cout << "Enter a line of text: " << endl;
    string userInput;
    getline (cin, userInput);

    char copyInput[20] = { '\0' };
    if (userInput.length() < 20) //check bounds
    {
        strcpy(copyInput, userInput.c_str());
        cout << "copyInput contains: " << copyInput << endl;
    }
    else
        cout << "Bounds exceeded: won't copy!" << endl;
            
    return 0;
}

*/

/*
//nested if statement
int main()
{
    cout << "This program allows you to either divide or multipy" << endl;
    cout << "Enter two number: " << endl;
    float num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    cout << "Enter 'd' to divide and anyother key to multiply. ";
    char userSelection = '\0';
    cin >> userSelection;

    if (userSelection == 'd')
    {
        cout << "You wish to divide" << endl;
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "you can't divide by 0!" << endl;
    }
    
    else
    {
        cout << "You wish to multiply" << endl;
        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
    }

    return 0;
}
*/

/*
//using grouped if..else construct
int main()
{
    cout << "Find out what the day sof the week are named after!" << endl;
    cout << "What day of the week is it? " << endl;
    
    string day;
    getline(cin, day);

    if (day == "Sunday")
        cout << day << " was named after the Sun" << endl;
    else if (day == "Monday")
        cout << day << " was named after the Moon" << endl;
    else if (day == "Tuesday")
        cout << day << " was named after the Mars" << endl;
    else if (day == "Wednesday")
        cout << day << " was named after the Mecury" << endl;
    else if (day == "Thursday")
        cout << day << " was named after the Jupiter" << endl;
    else if (day == "Friday")
        cout << day << " was named after the Venus" << endl;
    else if (day == "Saturday")
        cout << day << " was named after the Saturn" << endl;
    else
        cout << "I don't know mate. Did you enter a day of the week?" << endl;


    return 0; 
}
*/

/*
//OR THE ABOVE CAN ALSO BE WRITTEN AS

int main()
{
    enum daysOfWeek 
    { 
        Sunday = 0, 
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    cout << "Find out what the day sof the week are named after!" << endl;
    cout << "Enter a number for a day (Sunday = 0): ";
    
    int dayInput = Sunday; //Initialize to sunday
    cin >> dayInput;

    if (dayInput == Sunday)
        cout << "Sunday was named after the Sun" << endl;
    else if (dayInput == Monday)
        cout << "Monday was named after the Moon" << endl;
    else if (dayInput == Tuesday)
        cout << "Tuesday was named after Mars" << endl;
    else if (dayInput == Wednesday)
        cout << "Wednesday was named after Mercury" << endl;
    else if (dayInput == Thursday)
        cout << "Thursday was named after Jupiter" << endl;
    else if (dayInput == Friday)
        cout << "Friday was named after Venus" << endl;
    else if (dayInput == Saturday)
        cout << "Saturday was named after Saturn" << endl;
    else
        cout << "Wrong input, execute again" << endl;

    return 0; 
}
*/

/*
//conditional processing using switch-case
int main()
{
    enum DaysOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    cout << "Find what days of the week are named after!" << endl;
    cout << "Enter a number for a day (Sunday = 0): ";

    int dayInput = Sunday;
    cin >> dayInput;

    switch(dayInput)
    {
    case Sunday:
        cout << "Sunday was named after the Sun" << endl;
        break;
    case Monday:
        cout << "Monday was named after the Moon" << endl;
        break;
    case Tuesday:
        cout << "Tuesday was named after the Mars" << endl;
        break;
    case Wednesday:
        cout << "Wednesday was named after the Mecury" << endl;
        break;
    case Thursday:
        cout << "Thursday was named after the Jupiter" << endl;
        break;
    case Friday:
        cout << "Friday was named after the Venus" << endl;
        break;
    case Saturday:
        cout << "Saturday was named after the Saturn" << endl;
        break;
    
    default:
        cout << "Wrong input, execute again" << endl;
        break;
    }

    return 0;
}
*/

int main()
{
    cout << "Enter two numbers" << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    //(conditional expression evaluated to bool) ? expression1 if true : expression2 if false;
    //        conditional ? expression1 : expression2
    //         expression   if true       if false
    int max = (num1 > num2)? num1 : num2;
    cout << "The greater of " << num1 << " and " \
        << num2 << " is: " << max << endl;

    return 0;

    // if you don't understand check pg 29 of note
}