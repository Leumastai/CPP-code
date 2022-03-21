#include <iostream>
#include <string>
using namespace std;


//An object is an instance of class e.g Human firstMan
// firstMan is an instance
// firstMan is an object of class Human
// name and age are both attributes of Human

/*
class Human
{
public:
    string name;
    int age;

    void IntroduceSelf()
    {
        cout << "I am " + name << " and am ";
        cout << age << " years old" << endl;
    }
};

int main()
{
    //An object of class Human with attribute name as "Adam"
    Human firstMan;
    firstMan.name = "Adam";
    firstMan.age = 30;

    //An object of class Human with an attribute name as "Eve"
    Human firstWoman;
    firstWoman.name = "Eve";
    firstWoman.age = 28;

    Human codeWriter;
    codeWriter.name = "Samuel";
    codeWriter.age = 23;

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
    codeWriter.IntroduceSelf();
}
*/

//incase you get lost in trying to understand private and public class
// checkout page 220 of the textbook

/*
class Human
{
private:
    // Private memeber data:
    int age;

public:
    void SetAge(int inputAge)
    {
        age = inputAge;
    }

    // Human lies about his/her age (if over 30)
    int GetAge()
    {
        if (age > 30)
            return (age -2);
        else
            return age;
    }
};

int main()
{
    Human firstMan;
    firstMan.SetAge(35);

    Human firstWoman;
    firstWoman.SetAge(22);

    cout << "Age of firstMan " << firstMan.GetAge() << endl;
    cout << "Age of firstWoman " << firstWoman.GetAge() << endl;

    return 0;
}

//*/

// from the above code you can see that we used the setAge()
// function before we called the getAge attribute. Normally,
// we could have just have called age and set it e,g firstMan.age = 35;
// but we couldn't because its a private data. so the only way to access it
// is to use an external user which is getAge. However, the actual age held
// in Human::age is abstracted from the outside world.
//To understand better comment line 76 and 79 of the code above
//Read page 221 if you still dont understand

//constructor
// A better version of the above code
//

/*
class Human
{
private:
    string name;
    int age;

public:
    Human() // constructor
    {
        age = 1; // initialization
        cout << "Constructed an instace of class Human" << endl;
    }

    void SetName (string humanName)
    {
        name = humanName;
    }

    void SetAge(int humansAge)
    {
        age = humansAge;
    }

    void IntroduceSelf()
    {
        cout << "I am " + name << " and am ";
        cout << age << " years old" << endl;
    }
};

int main()
{
    Human firstWoman;
    firstWoman.SetName("Eve");
    firstWoman.SetAge(28);

    firstWoman.IntroduceSelf();
}
*/

/*
//overloading constructors
class Human
{
private:
    string name;
    int age;

public:
    Human() // default constructor code here
    {
        age = 0; // initialized to ensure no junk value
        cout << "Default ocnstructor: name and age not set" << endl;
    }

    Human (string humansName, int humansAge) //overloaded
    {
        name = humansName;
        age = humansAge;
        cout << "Overloaded constructor creates ";
        cout << name << " of " << age << " years " << endl;
    }

};

int main()
{
    Human firstMan; //use default constructor
    Human firstWoman ("Eve", 20); //oveerloaded constructor
}

*/

/*
//class without a default constructor

class Human
{
private:
    string name;
    int age;

public:
    Human(string humansName, int humansAge)
    {
        name = humansName;
        age = humansAge;
        cout << "Overload constructor creates "<< name;
        cout << " of age " << age << endl;
    }

    void IntroduceSelf()
    {
        cout << "I am " + name << " and am ";
        cout << age << " years old" << endl;
    }
    
};

int main()
{
    Human firstMan("Adam", 25);
    Human firstWoman("Eve", 28);

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
}
*/

//constructor parameters with default value
//constructor with initilization lists

class Human
{
private:
    int age;
    string name;
public:
    Human(string humansName = "Adam", int humansAge = 25)
    //the initialization list is characterized by a colon ( : ) following the parameter
    //declaration contained in parentheses (...)
    :name(humansName), age(humansAge)
    {
        cout << "Contrusted a human called " << name;
        cout << ", " << age << " years old" << endl;
    }
};

int main()
{
    Human adam;
    Human eve("Eve", 18);

    return 0;
}

