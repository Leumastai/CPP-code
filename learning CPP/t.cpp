#include<iostream>
#include <string>

using namespace std;

int main()
{
    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 6.9;
    double balance = 456987324;
    int intMax = INT32_MAX;

    //cout << "Size of int is " <<sizeof(bool)<< " bytes"<< endl;
    //cout << __SIZEOF_DOUBLE__<<"\n";
    //cout << intMax << endl;
    cout << int('h') << endl; //ASCII number for letter h
    cout << (int)'h' << endl; //same as the code above
    cout << char(65) << endl;
    return 0;
    //system("pause>0"); //to remove irrelevant sys outputs
}