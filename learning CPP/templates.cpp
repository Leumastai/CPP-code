#include <iostream>
using namespace std;
/* vTemplates are used to write functions once 
snad use it over and over for diffrent variable type. */

/* template <typename T> //telling the compiler we're using a function template
T findSmaller(T input1, T input); //T represent the variable type sincce we wan it to be any variable type

int main()
{
    int a = 4;
    int b = 6;
    float f1 = 77.43;
    float f2 = 54.54;
    char c1 = 'f';
    char c2 = 'h';
    string s1 = "Hello";
    string s2 = "Bots are fun";

    cout << findSmaller(a,b) << endl;
    cout << findSmaller(f1, f2) << endl;
    cout << findSmaller(c1,c2) << endl;
    cout << findSmaller(s1,s2) << endl;
}

template <typename T>
T findSmaller(T input1, T input2)
{
    if (input1 < input2)
        return input1;
    else
        return input2;
} */

//using template with multiple typename
template <typename T, typename U>
U getBigger(T input1, U input2); // you can change U to T to change the output type

int main()
{
    int a = 54;
    float f1 = 54.45;

    cout << getBigger(a, f1) << endl;
}

template <typename T, typename U> // You can cahnge U to T
U getBigger(T input1, U input2)
{
    if (input1 > input2)
        return input1;
    else
        return input2;
}