#include <iostream>
#include <string>
using namespace std;

/*
int main()
{
    int age = 30;
    const double pi = 3.1416;

    
    //Use & to find the address in memory
    cout << "Integer age is located at: " << &age << endl;
    cout << "Double pi is located at: " << &pi << endl;
    cout << "Size of Integer: " << sizeof(int) << endl;
    cout << "Size of double pi: " << sizeof(int) << endl;
    
    //check page 61 of your note.
    
    
    //Declaring and initializing a pointer
    int* pointsToInt = &age; // pointer initialized to age

    //Displaying the value of the pointer
    cout << "Integer age is at: " << pointsToInt << endl;
    
    return 0;
}
*/

/*
//pointer reassignment to another variable
int main()
{
    int age = 30;

    int* pointsToInt = &age;
    cout << "pointsToInt points to age now" << endl;

    //Displaying the value if pointer
    cout << "pointsToInt = " << hex << pointsToInt << endl;

    int dogAge = 9;
    pointsToInt = &dogAge;
    cout << "pointsToInt point to dogAge now" << endl;

    cout << "pointsToInt = "<< hex << pointsToInt << endl;

    return 0;
}
*/


//access pointed data using derefence operator (*)
/*
int main()
{
    int age = 30;
    int dogsAge = 9;

    cout << "Integer age = " << age << endl;
    cout << "Integer dogsAge = " << dogsAge << endl;

    int* pointsToInt = &age;
    cout << "pointsToint points to age" << endl;

    //Disp[playing the value of pointer
    cout << "pointsToInt = " << hex << pointsToInt << endl;
    
    //Displaying the value at the pointed location
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;

    pointsToInt = &dogsAge;
    cout << "pointsToInt points to dogsAge now" << endl;

    cout << "pointsToInt = " << hex << pointsToInt << endl;
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;

    return 0;
}
*/

/*
//Manipulating data using a pointer and the derefrence operator
int main()
{
    int dogsAge = 30;
    cout << "Initialized dogsAge = " << dogsAge << endl;

    int* pointsToAnAge = &dogsAge;
    cout << "pointsToAnAge points to dogsAge" << endl;

    cout << "Enter an age for your dog: ";
    cin >> *pointsToAnAge;

    cout << "Input stored at " << hex << pointsToAnAge << endl;
    cout << "Integer dogsAge = " << dec << dogsAge << endl;

    return 0;
}
*/

/*
//sizeof() of a pointer
int main()
{
    cout << "sizeof fundamental types -" << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    
    cout << "sizeof pointers of fundamental types -" << endl;
    cout << "sizeof(char*) = " << sizeof(char*) << endl;
    cout << "sizeof(int*) = " << sizeof(int*) << endl;
    cout << "sizeof(double*) = " << sizeof(double*) << endl;
}
*/

/*
//dynamic memory allocation
int main()
{
    //Request for new memory space for an int
    int* pointsToAnAge = new int;

    //Use the allocated memory to store a number
    cout << "Enter your dog's age:";
    cin >> *pointsToAnAge;

    // Use indirection operator* to access value
    cout << "Age " << *pointsToAnAge << " is stored at " << hex << pointsToAnAge << endl;

    delete pointsToAnAge; // release memory

    return 0;
}
*/

/*
//allocatingg using new[..] and releasing using delete[]

int main()
{
    cout << "How many integers shall i reserve memory for?" << endl;
    int numEntries = 0;
    cin >> numEntries;

    int* myNumbers = new int[numEntries];

    cout << "Memory allocated at: " << myNumbers << endl;

    //de-allocate before exiting
    delete[] myNumbers;

    return 0;
}
*/

/*
//effect of incrementing and decrementing operators on pointers
int main()
{
    cout << "How man integers you wish to enter? ";
    int  numEntries = 0;
    cin >> numEntries;

    int* pointsToInts = new int[numEntries];

    cout << "Allocated for " << numEntries << " integers" << endl;
    for(int counter = 0; counter < numEntries; ++counter)
    {
        cout << "Enter number " << counter << ": ";
        cin >> *(pointsToInts + counter);
    }

    cout << "Displaying all numbers entered: " << endl;
    for (int counter = 0; counter < numEntries; ++counter)
        cout << *(pointsToInts++) << " ";

    cout << endl;

    // return pointer to inital position
    pointsToInts -= numEntries;

    //done with using memory release
    delete[] pointsToInts;

    return 0;
}
*/

/*
//using const on pointers

void CalcArea(const double* const ptrPi, // const pointer to const data
                const double* const ptrRadius,
                double* const ptrArea) // const pointer

{
    //check pointers for validity before using
    if (ptrPi && ptrRadius && ptrArea)
        *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
}

int main()
{
    const double Pi = 3.1416;

    cout << "Enter radius of circle: ";
    double radius = 0;
    cin >> radius;

    double area = 0;
    CalcArea (&Pi, &radius, &area);

    cout << "Area is = " << area << endl;

    return 0;
}
*/

/*
//Demonstrate That the Array Variable Is a Pointer to the First Element
int main()
{
    //static array of 5 integeres
    int myNumbers[5];

    //array assinged to pointer to int
    int* pointsToNums = myNumbers;

    //Display address contained in pointer
    cout << "pointsToNums = " << hex << pointsToNums << endl;

    //Address of first element of array
    cout << "&myNumbers[0] = " << hex << &myNumbers[0] << endl;

    return 0;
}
*/

/*
//Accessing Elements in an Array Using the Dereference Operator ( * ) and
//Using the Array Operator ( [] ) with a Pointer

int main()
{
    const int ARRAY_LEN = 5;

    // Static array of 5 integeres, initialized
    int myNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};

    //Pointer initialized to first element in array
    int* pointsToNums = myNumbers;

    cout << "Displaying array using pointer syntax, operator*" << endl;
    for (int index = 0; index < ARRAY_LEN; ++index)
        cout << "Element " << index << " = " << *(myNumbers + index) << endl;

    cout << "Display array using ptr with array syntax, operator[]" << endl;
    for (int index = 0; index < ARRAY_LEN; ++index)
        cout << "Element " << index << " = " << pointsToNums[index] << endl;

    return 0;
}
*/

/*
//Refrence
int main()
{
    int original = 30;
    cout << "original = " << original << endl;
    cout << "original is at address " << hex << &original << endl;

    int& ref1 = original;
    cout << "ref1 is at address: " << hex << &ref1 << endl;
    
    int& ref2 = ref1;
    cout << "ref2 is at address: "<< hex << &ref2 << endl;
    cout << "Therefore, ref2 = " << dec << ref2 << endl;

    return 0;
}
*/

/*
void GetSquare(int& number)
{
    number *= number;//number = number * number
}

int main()
{
    cout << "Enter a number you wish to square: ";
    int number = 0;
    cin >> number;

    GetSquare(number);
    cout << "Square is: " << number << endl;
    cout << "Square address is: " << &number << endl;

    return 0;
}
*/

void GetSquare(const int& number, int& result)
{
    result = number*number;
}

int main()
{
    cout << "Enter a number you wish to square: ";
    int number = 0;
    cin >> number;

    int square = 0;
    GetSquare(number, square);
    cout << number << "^2 = " << square << endl;

    return 0;
}