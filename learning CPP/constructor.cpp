#include <iostream>
#include <string>

using namespace std;
// A constructor is special function that is executed whenever we create a new instance of the class. 
// It is used to set initial values of data members of the class.
// Constructors do not return a value, including void.

class Cat
{
    private:
        /* data */
        string breed;
        string name;
        int age;
    public:

        Cat(); //Declaring a constructor
        void setName(string nameIn);
        void setBreed(string breedIn);
        void setAge(int ageIn);
        void printInfo();
        string getName();
        string getBreed();
        int getAge();
};

// defining a constructor
Cat::Cat()
{
    //Assinging initial values in the constructor

    breed = "Flick";
    name = "Phil";
    age = 54;
    
}
void Cat::setName(string nameIn)
{
    name = nameIn;
}
void Cat::setBreed(string breedIn)
{
    breed = breedIn;
}
void Cat::setAge(int ageIn)
{
    age = ageIn;
}
void Cat::printInfo()
{
    cout << name << " " << age << " " << breed << endl;
}
string Cat::getName()
{
    return name;
}
string Cat::getBreed()
{
    return breed;
}
int Cat::getAge()
{
    return age;
}

int main()
{
    Cat cat1;
    cat1.printInfo();
    
}
