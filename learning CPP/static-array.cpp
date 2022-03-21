/*
//Declearing static array
int myNumbers [5] = {}; // initialize all integers to 0
int myNumbers [5] = {34, 56}; // initialize first two elements to 34 and 56 and the rest to 0

const int ARRAY_LENGTH = 5; // define the length of an array as a constant
int myNumbers [ARRAY_LENGTH] = {34, 56, -21, 5904, 24};

int myNumbers [] = {2453, 9045. -9025}; //array of 3 elements
*/

// declearing an array of integers and accessing its elements
#include <iostream>
using namespace std;
constexpr int Square(int number) { return number * number; }

int main()
{
    int myNumbers [5] = {34, 56, -21, 5003, 365};

    cout << "First element at index 0: " << myNumbers[0] << endl;
    cout << "Second element at index 1: " << myNumbers[1] << endl;
    cout << "Third element at index 2: " << myNumbers[2] << endl;
    cout << "Fourth element at index 3: " << myNumbers[3] << endl;
    cout << "Fifth element at index 4: " << myNumbers[4] << endl;

    /*
    //Assigning values to elements in an array
    const int ARRAY_LENGTH = 5;
    
    // Array of five integers, initialized using a const
    int myNumbers1 [ARRAY_LENGTH] = {5, 10, 0, -101, 20};

    //Using a constexpr for array of 25 integeres
    int moreNumbers [Square(ARRAY_LENGTH)];

    cout << "Enter index of the element to be changed: ";
    int elementIndex = 0;
    cin >> elementIndex;

    cout << "Enter new value: ";
    int newValue = 0;
    cin >> newValue;

    myNumbers1[elementIndex] = newValue;
    moreNumbers[elementIndex] = newValue;

    cout << "Element " << elementIndex << " in array myNumber1 is: ";
    cout << myNumbers1[elementIndex] << endl;

    cout << "Element " << elementIndex << " in array moreNumber is: ";
    cout << moreNumbers[elementIndex] << endl;

    */

    //Declaring and Initializing Multidimensional Arrays
    //int solarPanels [2][3];

    int solarPanels [2][3] = {{0,1,2},{3,4,5}};
    int threeRowsThreeCloumns [3][3] = \
    {{-501, 206, 2016},{989, 101, 206},{303,456, 596}};

    cout << "Row 0: " << threeRowsThreeCloumns [0][0] << " " \
                    << threeRowsThreeCloumns [0][1] << " " \
                    << threeRowsThreeCloumns [0][2] << endl;
                
    cout << "Row 1: " << threeRowsThreeCloumns [1][0] << " " \
                    << threeRowsThreeCloumns [1][1] << " " \
                    << threeRowsThreeCloumns [1][2] << endl;
                
    cout << "Row 2: " << threeRowsThreeCloumns [2][0] << " " \
                    << threeRowsThreeCloumns [2][1] << " " \
                    << threeRowsThreeCloumns [2][2] << endl;

    return 0;
}

