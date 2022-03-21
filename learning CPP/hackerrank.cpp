#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

/*
Data types

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value



//to read a data type
scanf("`format_specifier`", &val)
//to print a data type 
printf("`format_specifier`", val)

char ch ='d';
double d = 234.432;
printf("%c %lf", ch, d);

//NOTE: scanf and printf are faster than cout and cin
*/

int main() {
    // Complete the code.
    int a; long long b; char c; float d; double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    //setprecision helps you set a particular length for a data type
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;
    return 0;
}