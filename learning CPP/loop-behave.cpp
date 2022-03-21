#include <iostream>
using namespace std;

/*
// controlling loops that don't end (infinite loop)

int main()
{
    for(;;) //an infinte loop
    {
        cout << "Enter two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;

        cout << "Do you wish to correct the numbers? (y/n): ";
        char changeNumbers = '\0';
        cin >> changeNumbers;

        if (changeNumbers == 'y')
            continue; //restart the loop
        
        cout << num1 << " + " << num2 << " = " << \
            num1 + num2 << endl;
        cout << num1 << " x " << num2 << " = " << \
            num1 * num2 << endl;
        
        cout << "Press x to exit loop or any other letter to continue"<< endl;
        char userSelection = '\0';
        cin >> userSelection;

        if (userSelection == 'x')
            break; //exit the loop

    }
    cout << "Goodbye!" << endl;
    
    return 0;
}
*/

/*
//nested loop
int main()
{
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int myNums1[ARRAY1_LEN] = {35, -3, 0};
    int myNums2[ARRAY2_LEN] = {20, -1};

    cout << "Multiplying each int in myNums1 by each in myNums2:" << endl;

    for(int index1 = 0; index1 < ARRAY1_LEN; ++index1)
        for(int index2 = 0; index2 < ARRAY2_LEN; ++index2)
            cout << myNums1[index1] << " x " << myNums2[index2] \
            << " = " << myNums1[index1] * myNums2[index2] << endl;

    return 0;
}
*/

/*
//nested loop with user input then multiply
int main()
{
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int myNums1[ARRAY1_LEN] = {0};
    int myNums2[ARRAY2_LEN] = {0};

    cout << "Multiplying Array1 by Array2" << endl;
    cout << "Populate figures for array1 of " << ARRAY1_LEN << " integers" << endl;
    cout << "Populate figures for array2 of " << ARRAY2_LEN << " integers" << endl;
    
    //for (int index1 = 0; index1 < ARRAY1_LEN; ++index1)
    //    for (int index2 = 0; index2 < ARRAY2_LEN; ++index2)
    //    {
    //        cout << "Enter integers for Array1 " << index1 << ": ";
    //        cin >> myNums1[index1];

    //        cout << "Enter integers for Array2 " << index2 << ": ";
    //        cin >> myNums2[index2];
    //    }

    for (int index1 = 0; index1 < ARRAY1_LEN; ++index1)
    {
        cout << "Enter integers for Array 1 " << index1 << ": ";
        cin >> myNums1[index1];
    }
    
    for (int index2 = 0; index2 < ARRAY2_LEN; ++index2)
    {
        cout << "Enter integer for Array 2 " << index2 << ": ";
        cin >> myNums2[index2];
    }

    cout << "Displaying contents of the array: " << endl;

    for (int index1 = 0; index1 < ARRAY1_LEN; ++index1)
        cout << "Element " << index1 << " = " << myNums1[index1] << endl;
    
    for (int index2 = 0; index2 < ARRAY2_LEN; ++index2)
        cout << "Element " << index2 << " = " << myNums2[index2] << endl;

    
    for (int index1 = 0; index1 < ARRAY1_LEN; ++index1)
        for (int index2 = 0; index2 < ARRAY2_LEN; ++index2)
        {
            cout << myNums1[index1] << " * " << myNums2[index2] << " = " << \
            myNums1[index1] * myNums2[index2] << endl;
        }

    cout << myNums1[1] << endl;
    cout << myNums2[2] << endl;

    return 0;

}
*/

/*
//nested loop in two dimensional array
int main()
{
    const int NUM_ROWS = 3;
    const int NUM_COLUMNS = 4;

    int MyInts[NUM_ROWS][NUM_COLUMNS] = {
        {4,6,7,0},
        {5,7,8,1},
        {9,4,2,3}
    };
    //iterate rows, each array of int
    for (int row = 0; row < NUM_ROWS; ++row)
    {
        //iterate integers in each row (columns)
        for (int column = 0; column < NUM_COLUMNS; ++column)
        {
            cout << "Integer[" << row << "][" << column <<"] = " << \
            MyInts[row][column] << endl;
        }
    }
    return 0;
}
*/

//using nested loops to calculate fibonacci series
int main()
{
    const int numsToCalculate = 5;
    cout << "This program will calculate " << numsToCalculate << \
    " Fibonacci numbers at a time" << endl;

    int num1 = 0, num2 = 1;
    char wantMore = '\0';
    cout << num1 << " " << num2 << " ";

    do
    {
        for (int counter = 0; counter < numsToCalculate; counter--)
        {
            cout << num1 + num2 << " ";

            int num2Temp = num2;
            num2 = num1 + num2;
            num1 = num2Temp;
        }

        cout << endl << "Do you want more numbers (y/n)? ";
        cin >> wantMore;
    }while (wantMore == 'y');

    cout << "Goodbye!" << endl;

    return 0;
}
