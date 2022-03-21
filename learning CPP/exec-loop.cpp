#include <iostream>
#include <string>
using namespace std;


/*
//goto
int main()
{
Start:
    int num1 = 0, num2 =0;

    cout << "Enter two integers: " << endl;
    cin >> num1;
    cin >> num2;

    cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    cout << "Do you wish to perform another (y/n) " << endl;

    char repeat = 'y';
    cin >> repeat;

    if (repeat == 'y')
        goto Start;
    
    cout << "Goodbye mate" << endl;

    return 0;
}
*/

/*
//While loop
int main()
{
    char userSelection = 'm';

    while (userSelection != 'x')
    {
        cout << "Enter two integer: " << endl;
        int num1  = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        
        int multiplicationResult = num1 * num2;
        int additionResult = num1 + num2;

        cout << num1 << " x " << num2 << " = " << \
            multiplicationResult << endl;

        cout << num1 << " + " << num2 << " = " << \
            additionResult << endl;

        cout << "Enter 'x' to cancle the operation or any other key to continue" << endl;
        cin >> userSelection;

    }

    cout << "Goodbye!" << endl;

    return 0;
}
*/

/*
//do...while loop
int main()
{
    char userSelection = 'x'; //initial value
    do
    {
        cout << "Enter the two integers: " << endl;
        int num1 = 0;
        int num2 = 0;
        cin >> num1;
        cin >> num2;

        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

        cout << "Enter 'x' to cancle operation or any key to restart operation" << endl;
        cin >> userSelection;
    } while (userSelection != 'x');

    cout << "Goodbye!" << endl;

    return 0;
}
*/

/*
//For loop
int main()
{
    const int ARRAY_LENGTH = 5;
    int myNums[ARRAY_LENGTH] = {0};

    cout << "Populate array of " << ARRAY_LENGTH << " integers" << endl;

    for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
    {
        cout << "Enter an integer for element " << counter << ": ";
        cin >> myNums[counter];
    }

    cout << "Displaying contents of the array: " << endl;

    for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
    cout << "Element " << counter << " = " << myNums[counter] << endl;

    return 0;
}
*/

/*
int main()
{
    for (char userSelection = 'm'; (userSelection != 'x');) //OR
    //for (char userSelection = '\0'; (userSelection != 'x');)
    {
        cout << "Enter the two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;

        cout << num1 << " + " << num2 << " = " \
            << num1 + num2 << endl;
        cout << num1 << " x " << num2 << " = " \
            << num1 * num2 << endl;

        cout << "Press 'x' to exit the program or any key to continue ";
        cin >> userSelection;
    }
}
*/

//Range-Based for Loop
int main()
{
    int someNums[] = {1, 101, -1, 40, 2041};

    for (const int& aNum : someNums)
        cout << aNum << ' ';
    cout << endl;

    for (auto anElement : {5, 22, 110, -45, 2017})
        cout << anElement << ' ';
    cout << endl;

    char charArray[] = {'h','e','l','l','o'};
    for (auto aChar : charArray)
        cout << aChar << ' ';
    cout << endl;

    double moreNums[] = {3.14, -1.3, 22, 10101};
    for (auto anElement : moreNums)
        cout << anElement << ' ';
    cout << endl;

    string sayHello{ "Hello World!" };
    for (auto anElement : sayHello)
        cout << anElement << ' ';
    cout << endl;

    return 0;
}