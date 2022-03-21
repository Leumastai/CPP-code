#include <iostream>
#include <string>

using namespace std;
int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;

    cout << "Guest: ";
    cin >> guestUserNum;

    //using attinary instead of if else
    (hostUserNum == guestUserNum)? cout << "Correct!" : cout << "Failed";

    return 0;
}