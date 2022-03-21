#include <iostream>
using namespace std;

int main()
{
    cout << "This program will help you multiply two numbers" << endl;

    cout << "Enter first number:"; //<< endl;
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter second number:"; // << endl;
    int secondNumber = 0;
    cin << secondNumber;

    //Multiply the first number with the second number
    int multiplicationResult = firstNumber * secondNumber;

    //Display result
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

    return 0;
}