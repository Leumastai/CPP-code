#include <iostream>
#include <string>

using namespace std;

class Dog
{
    private:
        int licence;
    public:
        Dog();
        Dog(int licenceIn);
        void setLicnece(int licenceIn);
        int getLicence();
        void printInfo();
        ~Dog(); //declaring a destructor
};

Dog::Dog()
{
    licence = 2343546;
}

//Declaring a destructor
Dog::~Dog()
{
    cout <<"\nDeleting the dog";
}

void Dog::setLicnece(int licenceIn)
{
    licence = licenceIn;
}

void Dog::printInfo()
{
    cout << licence << endl;
}

int Dog::getLicence()
{
    return licence;
}