#include <iostream>
#include <string>

using namespace std;
int main()
{
    //pointer
    int a = 56;
    // Get the location of a using a pointer
    cout << &a << endl;

    // Derefrencing a pointer i.e getting the value stored in the address
    int * pointToA = &a;

    // Get the address of A from pointToA
    cout << pointToA << endl;

    // Get the derefrence pointToA
    cout << * pointToA << endl;
} // namespace std
