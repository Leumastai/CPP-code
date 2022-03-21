#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
int main()
{
    // the importance of dynamic array over static array is that
    //dynamic array optimize memory consumption and scale up depending 
    //on the demand for resources and memory at execution-time.
    // this can be done using the form std::vector
    vector<int> dynArray (3); //dynamic array of int

    dynArray[0] = 365;
    dynArray[1] = -421;
    dynArray[2] = 789;

    cout << "Number of integers in array: " << dynArray.size() << endl;

    cout << "Enter another element to insert" << endl;
    int newValue = 0;
    cin >> newValue;
    dynArray.push_back(newValue);

    cout << "Number of integers in array: " << dynArray.size() << endl;
    cout << "Last element in array: ";
    cout << dynArray[dynArray.size() -1] << endl;

    return 0;

}

*/

int main()
{
    //Analyzing the null-terminator in a c-style string
    char sayHello[] = {'H','e',\
            'l','l','o',' ','W','o','r','l','d','\0'};
    cout << sayHello << endl;
    cout << "Size of array: " << sizeof(sayHello) << endl;

    cout << "Replacing space with null" << endl;
    sayHello[5] = '\0';
    cout << sayHello << endl;
    cout << "Size of array: " << sizeof(sayHello) << endl;

    // using std::string
    string greetString ("Hello std ::string!");
    cout << greetString << endl;

    cout << "Enter a line of text: " << endl;
    string firstLine;
    getline(cin, firstLine);

    cout << "Enter another: " << endl;
    string secondLine;
    getline(cin, secondLine);

    cout << "Result of concatenation: " << endl;
    string concatString = firstLine + " " + secondLine;
    cout << concatString << endl;

    cout << "Copy of concatenated string: " << endl;
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;

    cout << "Length of concat string: " << concatString.length() << endl;


    return 0;
}