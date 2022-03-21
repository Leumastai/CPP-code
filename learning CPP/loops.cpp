#include <iostream>
using namespace std;

/* 
//Check if a number is divisible by 2 and 5
int main()
{
    int counter = 10;
    while (counter <= 150)
    {
        if (counter%5==0 && counter%2==0)
            cout << counter << " is divisible by 2 and 5"<< endl;
        counter++;
    }
} */


/* 
//Reverse a number
int main()
{
    int number, reversedNum = 0;
    cout << "Numbers: ";
    cin >> number;

    while (number!=0) {
        reversedNum *= 10;
        reversedNum += number % 10;
        number /= 10;
    }

    cout << "Reversed: " << reversedNum; << endl;
} */

/* int main()
//check if a user enter the right pin
{
    int userPin=2345, pin, errorCnt=0;
    do {
        cout << "Enter your pin: ";
        cin >> pin;

        if (pin != userPin)
            errorCnt++;
        
    } while(errorCnt<3 && pin!=userPin);

    if (errorCnt < 3)
        cout << "Loading...";
    else
    cout << "Blocked..";
} */

/* int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    int factorial = 1;
    for (int i = 1; i<=number; i++)
                //OR
    //for (int i = number; i > 1; i--)
    {
        factorial *= i;
    }

    cout << number << "! = "<< factorial;
} */

int main()
{
    int a, b, c;
    cout << "Enter the a, b, c sides of the triangle: ";
    cin >> a 

    return 0;
}

//4:58:22