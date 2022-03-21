#include <iostream>

using namespace std;

class Student
{
    private:
        int studentId;

    public:
        void setId(int idIn);
        int getId();
        Student();
}; // namespace std;

Student::Student()
{
    studentId = 000000;
}

void Student::setId(int idIn)
{
   studentId = idIn;
}

int Student::getId()
{
    return studentId;
}

class Staff
{
    private:
        string title;
    public:
        Staff();
        void setTitle(string input);
        string getTitle();
};

Staff::Staff()
{
    title = "NA";
}

void Staff::setTitle(string input)
{
    title = input;
}

string Staff::getTitle()
{
    return title;
}

//inheritance from student class

class GradStudent : public Student, public Staff // inheriting from more than one class
{
    private:
        string degree;
    public:
        GradStudent();
        void setDegree(string idIn);
        string getDegree();
};

GradStudent::GradStudent()
{
    degree = "undecleared";
}

void GradStudent::setDegree(string idIn)
{
    degree = idIn;
}

string GradStudent::getDegree()
{
    return degree;
}




int main()
{
    GradStudent gs1;
    int id = 5693;
    //string degree = "Graduated (B. Eng.)";
    gs1.setId(id);
    //gs1.setDegree(degree);
    
    cout << gs1.getId() << '\n';
    cout << gs1.getDegree() << endl;
}


//The derived class with Student as base class using a privae inheritance
// In private class inheritance, you only have access to the private variable and not to the public variable.
//Example of a private class
/* class GradStudent : private Student
{
    private:
        string degree;
    public:
        GradStudent();
        void setDegree(string degreeIn);
        string getDegree();
        void setStudentId(int idIn); //need this to access Student::setId()
        int getStudentId(); //need this to access Student::getId()
}; */