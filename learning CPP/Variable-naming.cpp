#include <iostream>
using namespace std;

/*
int main()
{   
    int firstnumber = 0;
    cout << "Enter first number: ";
    cin >> firstnumber;

    int secondnumber = 0;
    cout << "Enter second number: ";
    cin >> secondnumber;

    cout << "Multiplying " << firstnumber << " by " << secondnumber << " is equal to = " << firstnumber * secondnumber << endl;

    return 0;
}
*/

//The variable could be stored as
// int firstnumber = 0, secondnumber = 0;

void MultiplyingNumbers()
{
    cout << "Enter the first number ";
    int firstnumber = 0, secondnumber = 0, multiplyingnumbers = 0;
    cin >> firstnumber;

    cout << "Enter the second number ";
    cin >> secondnumber;

    multiplyingnumbers = firstnumber * secondnumber;

    cout << firstnumber << " x " << secondnumber;
    cout << " = " << multiplyingnumbers << endl;
}

int main()
{
    cout << "This program will help you multiply two numbers" << endl;

    MultiplyingNumbers();

    return 0;
}

/*
The diffrence between line 5 - 18 and line 24 - 46 is that
the other is not in a function and the variable can be used oustide of the main function
while the later is delegated to a function called MultiplyingNumbers() invoked by main. 
the variables cannot be used in outside of teh multiplyer,
*/

//GLOBAL VARIABLES
/* if the variables used in the above function were declared outside the scope of the function insteed of within it,
then they can be used in both main() and MultiplyingNumbers().
*/

//three global integers
int firstnumber = 0;
int secondnumber = 0;
int multiplicationResult = 0;

void MultiplyingNumbers()
{
    cout << "Enter the first number: ";
    cin >> firstnumber;

    cout << "Enter the second number: ";
    cin >> secondnumber;

    multiplicationResult = firstnumber * secondnumber;

    cout << firstnumber << " x " << secondnumber;
    cout << " = " << multiplicationResult << endl;
}

int main()
{
    cout << "The result of the MultiplyingNumber() is" << endl;
    MultiplyingNumbers();

    cout << "The result from the main() is " << endl;
    cout << firstnumber << " x " << secondnumber;
    cout << " = " << multiplicationResult << endl;

    return 0;
}