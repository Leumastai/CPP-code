#include <iostream>
#include <string>

using namespace std;

int main()
{
    int inputnumber;

    cout << "Enter an integer: ";

    cin >> inputnumber;

    cout << "Enter your name: ";
    string inputName;
    cin >> inputName;

    cout << inputName << " entered " << inputnumber << endl;
    return 0;
}