#include <iostream>
using namespace std;

/*
//calling a list from inversed order
int main()
{
    const int ARRAY_LEN = 5;
    int myLoop[ARRAY_LEN] = {34,5,12,0,97};

    cout << "Calling the array in a reversed order" << endl;

    for (int integer = ARRAY_LEN - 1; integer >= 0; --integer)
    {
        cout << myLoop[integer] << endl;
    }
    return 0;
}
*/

/*
//adding two arrays in inverse order
int main()
{
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int myNums1[ARRAY1_LEN] = {25,4,6};
    int myNums2[ARRAY2_LEN] = {5,10};

    for (int integer1 = ARRAY1_LEN - 1; integer1 >= 0; --integer1)
        for (int integer2 = ARRAY2_LEN - 1; integer2 >= 0; --integer2)
        {
            cout << myNums1[integer1] << " + " << myNums2[integer2] << \
            " = " << myNums1[integer1] + myNums2[integer2] << endl;
        }
    return 0;
}
*/

//Program that ask user how many nmber to compute in fibonacci

int main()
{
    const int numsToCalculate;
    cout << "How many numbers would you like to calculate for the fibonacci numbers? ";
    cin  >> numsToCalculate;

    int num1 = 0, num2 = 1;
    //char wantMore = '\0';
    cout << num1 << " " << num2 << " ";

    do
    {
        for (counter = 0; counter < numsToCalculate; ++counter)
        {
            cout << num1 + num2 << " ";

            int num2Temp = num2;
            num2 = num1 + num2;
            num1 = num2Temp;
        }
    }

}