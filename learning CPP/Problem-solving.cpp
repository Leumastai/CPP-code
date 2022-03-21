#include <iostream>
using namespace std;

/*
int main()
{
    
    int sum = 0, val = 50;
    while (val <= 100)
    {
        sum += val;
        ++val;
    }

    cout << sum << endl;

    
    int sub = 0, dec = 11;
    while(dec >=1)
    {
        sub += dec; //sub = sub + dec
        --dec; // dec = dec - 1
        cout << dec << endl;
    }

    cout << "Enter two integer and i'll print a range of those integer" << endl;
    int a = 0, b = 0;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;
    // considering that a will be greater than b

    int range = 0;
    //int range = 1;
    while (a >= b)
    {
        
        range += b; //range = range + b
        ++b; //b = b + 1

        //range -=a; // range = range - a
        //--a; //a = a - 1
        cout << b << endl;
    }

    
    int val = 0, sum = 0;
    for (int val = 50; val <= 100; ++val)
        sum += val;
        cout << sum << endl;

    

    int sum = 0, value = 0;
    cout << "Enter integer continuosly: ";
    while (cin >> value)
    {
        sum += value;
        //cout << "The sum of input number are: " << sum << endl;

    }
    cout << "The sum of input number are: " << sum << endl;


    //program to check how many concecutive value appears in an inout

    int value = 0, cVal = 0;
    if (cin >> value)
    {
        int cnt = 1;
        while (cin >> value)
        {
            if (value == cVal)
                ++cnt;
            else
            {
                cout << cVal << " occurs " << cnt << " times." << endl;
                cVal = value;
                cnt = 1;
            }
        }
        cout << cVal << " occurs " << cnt << " times." << endl;
    }
    return 0;
    
    for (int i = 10; i >= 0; --i)
    {
        cout << i << endl;
    }
    

    /*
    unsigned u = 0,  u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;

    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i -i2 << endl;

    cout << i - u << endl;
    cout << u - i << endl;

    /*
    
}

*/

/*
int main(int argc, char** argv)
{
    int ret = 0;

    cout << argv[0] << endl;

    return ret;
}


int main()
{
    int n = 3;
    while (n >= 0)
    {
        cout << n * n << endl;
        --n;
    }

    cout << n << endl;

    while (n < 4)
      cout << ++n << endl;

    cout << n << endl;

    while (n >= 0)
        cout << (n /= 2) << endl;

    return 0;
}



int main()
{
    int n;

    cout << (n = 4) << endl;
    cout << (n == 4) << endl;
    cout << (n > 3) << endl;
    cout << (n > 4) << endl;
    cout << (n = 0) << endl;
    cout << (n == 0) << endl;
    cout << (n && 4) << endl;
    cout << (n || 4) << endl;
    cout << (!n) << endl;

    return 0;
}

*/

int
