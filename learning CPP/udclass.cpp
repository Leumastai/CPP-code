#include <iostream>
#include <string>

using namespace std;
//Functions that access and/or modify data values in classes are called mutators.
//Get functions returns data. they have variable types as return values
//Data menebers in a class are private for default
//Some C++ class conventions
//Private members are listed first; if you do it this there is no need to specify that its a private class again
//If private members are listed after after a public class you must specify that its a private class
//Use 'setVariableName' for assigning values to private variables   | just like we did below
//Use 'getVariableName' for accessing private variables             | just like we did below
//You will need to signify that the functions are part of the class definition by using the namespace classname:: 
//Classes are usually in a header file

class Student
{
    string name;
    int id;
    int gradDate;

    public:
        //Mutators
        //Used here to change data in classes "set"
        //Accessing the class members/variables
        void setName(string nameIn);
        void setId (int idIn);
        void setGradDate(int gradDateIn);
        void print();
        //Get-functions
        //used here to return/access data
        //Accessing the values of the class members
        string getName();
        int getId();
        int getGradDate();
};// namespace std;

//Changing the data in classes
void Student::setName(string nameIn)
{
    name = nameIn;
}

void Student::setId(int idIn)
{
    id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
    gradDate = gradDateIn;
}

void Student::print()
{
    cout << name << " " << id << " " << gradDate << endl;
}

//accessing the data in class
string Student::getName()
{
    return name;
}

int Student::getId()
{
    return id;
}

int Student::getGradDate()
{
    return gradDate;
}

int main()
{
    //Instantiate Class
    Student student1;

    //Setting student1 members
    student1.setName("Taiwo Samuel");
    student1.setId(152254);
    student1.setGradDate(2021);

    //We can call the members with our print function
    student1.print();

    //Or we can use the get function
    cout << student1.getName() << endl;
    cout << student1.getId() << endl;
    cout << student1.getGradDate() << endl;

    return 0;    
}