#include <iostream>
#include <string>

using namespace std;

void counter()
{
    static int count = 0; //remove the static and see the diffrent results
    cout << count++;
}

struct Employee
{
    string name;
    //char name[50];
    int age;
    float salary;
};

// Static variables are initialized only once
int main()
{
    for (int i =0; i <5; i++)
    {
        counter();
    }

    struct Employee e1 = {"Samuel", 22, 150000};
    struct Employee e2;
    e2.name = "Albert";
    e2.age = 23;
    e2.salary = 200000;

    cout << e1.name << '\n' << e2.age << '\n' << e1.salary << endl;

    //this return the loacation of variabel
    return 0;
    
}

/*  If we do not use static keyword, the variable count, is reinitialized everytime when counter() function is called,
and gets destroyed each time when counter() functions ends. 
But, if we make it static, once initialized count will have a scope till the end of main() function 
and it will carry its value through function calls too. */

//Struct: is used to holde variables of diffrent trypes