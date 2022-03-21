#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
//define an inline function that doubles
// Using the inline keyword should be kept to a minimum and reserved for only 
//those functions that do very little and need to do it with minimal overhead

inline long DoubleNum (int inputNum)
{
    return inputNum * 2;
}

int main()
{
    cout << "Enter an integer: ";
    int inputNum = 0;
    cin >> inputNum;

    cout << "Double is: " << DoubleNum(inputNum) << endl;
    return 0;
}
*/

//Lambda function to display element in a array and sort them

void DisplayNums(vector<int>& dynArray)
{
    for_each (dynArray.begin(), dynArray.end(), \
            [](int Element) {
                cout << Element << " ";
                });
    
    cout << endl;
}

int main()
{
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);

    DisplayNums(myNums);

    cout << "Sorting them in decending order" << endl;

    sort (myNums.begin(), myNums.end(), \
        [](int Num1, int Num2) {
            return (Num2 < Num1);
        });

    DisplayNums(myNums);

    return 0;
}