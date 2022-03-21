#include <iostream>

using namespace std;

int main()
{
    cout << 5 / 2.0 << endl;

    int counter= 7;

    cout << counter++ << endl; //post increment i.e the operation happens befor incrementing i.e counter get outputed as 7 then incremented
    cout << counter << endl; // you can see here that when you call counter it gives 8. why because we incremented it in counter++ 
    cout << ++counter << endl; //pre increment i.e the operation happens after incrementing. i.e counter get incremented before it is outputed
    
    int a =5, b=8;
    cout << (a !=b ) << endl;

    cout << (a == 5 && b == 5) << endl;
    cout << (a == 5 || b == 5) << endl;
    cout << !(a == 5 || b == 5) << endl; //! not operator falsify anything

    int x = 7;
    cout << (x += 5) << endl;
    cout << (x -= 5) << endl;
    cout << (x *= 5) << endl;
    cout << (x %= 5) << endl;

    system("cls");

    int z = 20, y = 10; // switch the values
    int temp = z;

    //z = y;
    //y = temp;

    // or another method to switch values

    z = z + y;
    y = z - y;
    z = z - y;

    cout << z << y << endl;
    return 0;
}