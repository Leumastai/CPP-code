#include "calc.hpp"
#include <iomanip>

using namespace std;

//NOTE: Void function doesn't return parameters.
// it's just execute the program within it

/*void printHello();

int main()
{
    printHello();
    return 0;    
} // namespace std

void printHello()
{
    cout << "Hello world" << endl;
}
*/
//OR

/* void printHello()
{
    cout << "Hello world" << endl;
}

int main()
{
    printHello();
    return 0;    
} // namespace std */

// Instantiate functions

/*int sum(int m1, int m2);

float mult(float m1, float m2);

int main()
{
    int a = 5;
    int b = 5;
    
    // call function
    cout << sum(a, b);
    cout << mult(float(a), float(b));
}

// create function
int sum(int m1, int m2)
{
    return m1 + m2;
}

float mult(float m1, float m2)
{
    return m1 * m2;
}*/

//Instantiate functions from calc
/* void printEquation(int m1, int m2, int sum, char operation);
int sum(int m1, int m2);

int main()
{
    int a = 6;
    int b = 9;
    int tots = sum(a, b);
    char operation = '+';

    printEquation(a, b, tots, operation);
} */

//C++ does not allow arrays to be passed to functions, but, as we have seen, it does allow pointers to be passed.
//There are three ways arrays can be passed to a function:
// void functionName(variableType *arrayName)
// void functionName(variableType arrayName[length of array])
// void functionName(variableType arrayName[])

/* //Pass the array as a pointer
void arrayAsPointer(int *array, int size);
//Pass the array as a Sized array
void arraySized(int array[3], int size);
//Pass the array as a unsized array
void arrayUnsized(int array[], int size);

int main()
{
    const int size = 3;
    int array[size] = {23,54,12};

    arrayAsPointer(array, size);
    arraySized(array, size);
    arrayUnsized(array, size);
    
}

void arrayAsPointer(int *array, int size)
{
    //Set the width for the output
    cout << setw(5);
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        cout << '\n';
    }
    
}

void arraySized(int array[3], int size)
{
    cout << setw(5);
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        cout << '\n';
    }
}

void arrayUnsized(int array[], int size)
{
    cout << setw(5);
    for (int i=0; i < size; i++)
    {
        cout << array[i];
        cout << '\n';
    }
} */

/*Goal: create a function that searches an array for 
**a given value. 
*/

int search(int *array, int size, int searchKey);

int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}

int search(int *array, int size, int searchKey)
{
    for (int i =0; i < size; i++)
    {
        if (array[i] == searchKey)
        {
            cout << i << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    
}
