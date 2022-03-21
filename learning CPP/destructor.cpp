#include "destructor.hpp"

using namespace std;
//Destructors are special functions that are called whenever an object goes out of scope.
//Destructors are called automatically. Destructors cannot retuna a value and accept parameters.
//Destructors must have the same name as the class
//Destructors are identified with the tilda (~) symbol
//One of the more important tasks of a destructor is releasing memory that was allocated by
//the class constructor and member functions.

/* int main()
{
    Dog d1;
    Student s1;
    cout << d1.getLicence() << endl;
    s1.setGrade(0, 43);
    s1.setGrade(1, 53);
    s1.setGrade(2, 64);
    s1.setGrade(3, 79);
    s1.setGrade(4, 96);
    s1.setId(43665);
    s1.printInfo();
    return 0;
} // namespace std; */


//Helper functions
//Classes have members functions that do more than just set or get data values.
//Helper functions perfrom tasks that are often requested or are easier to perform in the class itself

class Student
{
    private:
        int id;
        int grade[5];
    public:
        Student(); //declaring a constructor
        int getId();
        void setId(int idIn);
        int getGrade(int index);
        void setGrade(int index, int gradeIn);
        ~Student(); //declaring a destructor
        void printInfo();
        float getAvg();

};

Student::Student()
{
    for (int i=0; i < 5; i++)
    {
        grade[i] = 0;
    }
    id = 0;
}

Student::~Student()
{
    cout << "\nDeleting the class student";
}

void Student::setId(int idIn)
{
    id = idIn;
}

int Student::getId()
{
    return id;
}

void Student::setGrade(int index, int gradeIn)
{
    grade[index] = gradeIn;
}

int Student::getGrade(int index)
{
    return grade[index];
}

float Student::getAvg()
{
    int sum = 0;
    for (int i=0; i < 5; i++)
        sum = sum + grade[i];
    return sum / 5.0;
}

void Student::printInfo()
{
    cout << id<< '\n';
    for (int i=0; i< 5; i++)
        cout << grade[i] << endl;
}

int main()
{
    Dog d1;
    Student s1;
    cout << d1.getLicence() << endl;
    s1.setGrade(0, 43);
    s1.setGrade(1, 53);
    s1.setGrade(2, 64);
    s1.setGrade(3, 79);
    s1.setGrade(4, 96);
    s1.setId(43665);
    s1.printInfo();
    cout << s1.getAvg() << endl;
    return 0;
} // namespace std;