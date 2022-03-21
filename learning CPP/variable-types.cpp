/*
//bool to sore boolean values

bool alwaysOnTop = false;
//or
//bool deleteFile = (userSelection == "yes");
// evaluates to true if userSelection contains "yes", else to false

//char to store character values
//char is used to store singular values

char userInput = 'Y'; // intialized char to "Y"

//signed integer types short,int,long, and long long
short int gradesInMath = -5; //not your best score
int moneyInBank = -70000; // overdraft
long populationChange = -85000; // reducing population
long long countryGDPChange = -700000000000;

//unsigned integer types
unsigned short int numColorsInRainbows = 7;
unsigned int numEggsInBasket = 24;
unsigned long numCarsInNewYork = 700000;
unsigned long long countryMedicareExpenses = 700000000000;

//float and doublr types
float pi = 3.142;
double morePrecisePi = 22.0/7;

//chunking separator
int moneyInBankSep = -70'000;
long populationChangeSep = -85'000; // reducing population
long long countryGDPChangeSep = -70'000'000'000;
double piSep = 3.141'592'653'59;

//checking the size of a variable
int main()
{
    using namespace std;
    cout << "Size of bool: " << sizeoff()
}
*/
//uncomment the above comment to understand nad view code

//automatic type inferance
// auto is used when you don't want to set a particular variable type
// the compiller identifies the type of variable it is.
auto coinFlippedHeads = true;

#include <iostream>
using namespace std;

int main()
{
    auto coinFlippedHeads = true;
    auto largeNumber = 2'500'000'000'000;

    cout << "coinFlippedHeads = " << coinFlippedHeads;
    cout << ", sizeof(largeNumber) = " << sizeof(coinFlippedHeads) << endl;

    cout << "largeNumber = " << largeNumber;
    cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

    return 0;
}
